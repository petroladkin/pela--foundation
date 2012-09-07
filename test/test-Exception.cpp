/**
 *		\file		test-Exception.h
 *		\author		Petro Ladkin aka peter__pan (PeLa)
 *		\date		05.09.2012-06.09.2012
 *		\version	0.1
 *
 *		\brief		Unit testing for PeLa::Exception::Exception
 */


#if defined(PELA_UNITTESTING)


#include "gtest/gtest.h"

#include "Exception/Exception.h"


using namespace PeLa::Exception;


PELA_EXCEPTION(BaseTestException);
PELA_EXCEPTION_DECL(Test1Exception, BaseTestException);
PELA_EXCEPTION_DECL(Test2Exception, BaseTestException);

TEST(Exception, create_exception) {
	Exception ex("file and pos", L"error message");

	EXPECT_STREQ("PeLa::Exception::Exception", ex.name().c_str());
	EXPECT_STREQ("file and pos", ex.location().c_str());
	EXPECT_STREQ("file and pos", ex.what());
	EXPECT_STREQ(L"error message", ex.message().c_str());
}

TEST(Exception, define_declaration) {
	BaseTestException ex1("file and pos", L"error message");

	EXPECT_STREQ("BaseTestException", ex1.name().c_str());
	EXPECT_STREQ("file and pos", ex1.location().c_str());
	EXPECT_STREQ("file and pos", ex1.what());
	EXPECT_STREQ(L"error message", ex1.message().c_str());

	Test1Exception ex2("file and pos", L"error message");

	EXPECT_STREQ("Test1Exception", ex2.name().c_str());
	EXPECT_STREQ("file and pos", ex2.location().c_str());
	EXPECT_STREQ("file and pos", ex2.what());
	EXPECT_STREQ(L"error message", ex2.message().c_str());
}

TEST(Exception, throw_me) {
	Exception exc("file and pos", L"error message");
	EXPECT_THROW(exc.throwMe(), Exception);
}

TEST(Exception, throw_exception) {
	EXPECT_THROW(PELA_THROW(Test1Exception), Test1Exception);
	EXPECT_THROW(PELA_THROW(Test1Exception), BaseTestException);
	EXPECT_THROW(PELA_THROW(Test1Exception), Exception);
	EXPECT_THROW(PELA_THROW(Test2Exception), Test2Exception);
	EXPECT_THROW(PELA_THROW(Test2Exception), BaseTestException);
	EXPECT_THROW(PELA_THROW(Test2Exception), Exception);
	EXPECT_THROW(PELA_THROW(BaseTestException), BaseTestException);
	EXPECT_THROW(PELA_THROW(BaseTestException), Exception);
}

TEST(Exception, throw_exception_if) {
	EXPECT_THROW(PELA_THROW_IF(Exception, true), Exception);
	EXPECT_NO_THROW(PELA_THROW_IF(Exception, false));
}

TEST(Exception, throw_exception_message) {
	EXPECT_THROW(PELA_THROW_MESSAGE(Exception, L"error message"), Exception);
	try {
		PELA_THROW_MESSAGE(Exception, L"error message");
	} catch (Exception exc) {
		EXPECT_STREQ(L"error message", exc.message().c_str());
	}
}

TEST(Exception, throw_exception_massge_if) {
	EXPECT_THROW(PELA_THROW_MESSAGE_IF(Exception, true, L"error message"), Exception);
	EXPECT_NO_THROW(PELA_THROW_MESSAGE_IF(Exception, false, L"error message"));
	try {
		PELA_THROW_MESSAGE_IF(Exception, true, L"error message");
	} catch (Exception exc) {
		EXPECT_STREQ(L"error message", exc.message().c_str());
	}
}


#endif //defined(PELA_UNITTESTING)
