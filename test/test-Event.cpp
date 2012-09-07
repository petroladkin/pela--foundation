/**
 *		\file		test-Event.h
 *		\author		Petro Ladkin aka peter__pan (PeLa)
 *		\date		05.09.2012-06.09.2012
 *		\version	0.1
 *
 *		\brief		Unit testing for PeLa::Event::Event
 */


#if defined(PELA_UNITTESTING)


#include <string>

#include "gtest/gtest.h"

#include "Event/Event.h"


class TestEvent {
public:
	TestEvent() {
		reset();
	}

	static void onSMethod(int p_i, bool p_b, const std::string& p_s) {
		sint = p_i;
		sbool = p_b;
		sstr = p_s;
	}

	void onMethod(int p_i, bool p_b, const std::string& p_s) {
		mint = p_i;
		mbool = p_b;
		mstr = p_s;
	}

	void operator()(int p_i, bool p_b, const std::string& p_s) {
		oint = p_i;
		obool = p_b;
		ostr = p_s;
	}

	void reset() {
		sint = 0;
		mint = 0;
		oint = 0;
		sbool = false;
		mbool = false;
		obool = false;
		sstr = "";
		mstr = "";
		ostr = "";
	}


	static int				sint;
	int						mint;
	int						oint;
	static bool				sbool;
	bool					mbool;
	bool					obool;
	static std::string		sstr;
	std::string				mstr;
	std::string				ostr;
};

int				TestEvent::sint;
bool			TestEvent::sbool;
std::string		TestEvent::sstr;


using namespace PeLa::Event;


TEST(Event, create_default) {
	Event<int, bool, const std::string&> theEvent;

	EXPECT_TRUE(theEvent.isNull());
}

TEST(Event, create_functor) {
	TestEvent te;

	Event<int, bool, const std::string&> theEvent(&TestEvent::onSMethod);

	EXPECT_FALSE(theEvent.isNull());
}

TEST(Event, create_medhod) {
	TestEvent te;

	Event<int, bool, const std::string&> theEvent(&te, &TestEvent::onMethod);

	EXPECT_FALSE(theEvent.isNull());
}

TEST(Event, connect_functor) {
	TestEvent te;

	Event<int, bool, const std::string&> theEvent;
	theEvent.connect(&TestEvent::onSMethod);

	EXPECT_FALSE(theEvent.isNull());
}

TEST(Event, disconnect_functor) {
	TestEvent te;

	Event<int, bool, const std::string&> theEvent;
	theEvent.connect(&TestEvent::onSMethod);
	theEvent.disconnect(&TestEvent::onSMethod);

	EXPECT_TRUE(theEvent.isNull());
}

TEST(Event, connect_medhod) {
	TestEvent te;

	Event<int, bool, const std::string&> theEvent;
	theEvent.connect(&te, &TestEvent::onMethod);

	EXPECT_FALSE(theEvent.isNull());
}

TEST(Event, disconnect_medhod) {
	TestEvent te;

	Event<int, bool, const std::string&> theEvent;
	theEvent.connect(&te, &TestEvent::onMethod);
	theEvent.disconnect(&te, &TestEvent::onMethod);

	EXPECT_TRUE(theEvent.isNull());
}

TEST(Event, send) {
	TestEvent te;

	Event<int, bool, const std::string&> theEvent;

	theEvent.connect(&TestEvent::onSMethod);
	theEvent.connect(&te);
	theEvent.connect(&te, &TestEvent::onMethod);

	theEvent(10, true, "hello");

	EXPECT_EQ(10, TestEvent::sint);
	EXPECT_EQ(10, te.mint);
	EXPECT_EQ(10, te.oint);
	EXPECT_TRUE(TestEvent::sbool);
	EXPECT_TRUE(te.mbool);
	EXPECT_TRUE(te.obool);
	EXPECT_STREQ("hello", TestEvent::sstr.c_str());
	EXPECT_STREQ("hello", te.mstr.c_str());
	EXPECT_STREQ("hello", te.ostr.c_str());

	te.reset();
	theEvent.disconnect(&TestEvent::onSMethod);
	theEvent(10, true, "hello");

	EXPECT_EQ(0, TestEvent::sint);
	EXPECT_EQ(10, te.mint);
	EXPECT_EQ(10, te.oint);
	EXPECT_FALSE(TestEvent::sbool);
	EXPECT_TRUE(te.mbool);
	EXPECT_TRUE(te.obool);
	EXPECT_STREQ("", TestEvent::sstr.c_str());
	EXPECT_STREQ("hello", te.mstr.c_str());
	EXPECT_STREQ("hello", te.ostr.c_str());

	te.reset();
	theEvent.disconnect(&te);
	theEvent(10, true, "hello");

	EXPECT_EQ(0, TestEvent::sint);
	EXPECT_EQ(10, te.mint);
	EXPECT_EQ(0, te.oint);
	EXPECT_FALSE(TestEvent::sbool);
	EXPECT_TRUE(te.mbool);
	EXPECT_FALSE(te.obool);
	EXPECT_STREQ("", TestEvent::sstr.c_str());
	EXPECT_STREQ("hello", te.mstr.c_str());
	EXPECT_STREQ("", te.ostr.c_str());

	te.reset();
	theEvent.disconnect(&te, &TestEvent::onMethod);
	theEvent(10, true, "hello");

	EXPECT_EQ(0, TestEvent::sint);
	EXPECT_EQ(0, te.mint);
	EXPECT_EQ(0, te.oint);
	EXPECT_FALSE(TestEvent::sbool);
	EXPECT_FALSE(te.mbool);
	EXPECT_FALSE(te.obool);
	EXPECT_STREQ("", TestEvent::sstr.c_str());
	EXPECT_STREQ("", te.mstr.c_str());
	EXPECT_STREQ("", te.ostr.c_str());
}

TEST(Event, disabled) {
	TestEvent te;
    
	Event<int, bool, const std::string&> theEvent;
    
	theEvent.connect(&TestEvent::onSMethod);
	theEvent.connect(&te);
	theEvent.connect(&te, &TestEvent::onMethod);
    
	theEvent(10, true, "hello");
    
	EXPECT_EQ(10, TestEvent::sint);
	EXPECT_EQ(10, te.mint);
	EXPECT_EQ(10, te.oint);
	EXPECT_TRUE(TestEvent::sbool);
	EXPECT_TRUE(te.mbool);
	EXPECT_TRUE(te.obool);
	EXPECT_STREQ("hello", TestEvent::sstr.c_str());
	EXPECT_STREQ("hello", te.mstr.c_str());
	EXPECT_STREQ("hello", te.ostr.c_str());
    
	te.reset();
	theEvent.disable();
	theEvent(10, true, "hello");
        
	EXPECT_EQ(0, TestEvent::sint);
	EXPECT_EQ(0, te.mint);
	EXPECT_EQ(0, te.oint);
	EXPECT_FALSE(TestEvent::sbool);
	EXPECT_FALSE(te.mbool);
	EXPECT_FALSE(te.obool);
	EXPECT_STREQ("", TestEvent::sstr.c_str());
	EXPECT_STREQ("", te.mstr.c_str());
	EXPECT_STREQ("", te.ostr.c_str());
}


#endif //defined(PELA_UNITTESTING)
