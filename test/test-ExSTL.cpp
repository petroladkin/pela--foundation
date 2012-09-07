/**
 *		\file		test-ExSTL.h
 *		\author		Petro Ladkin aka peter__pan (PeLa)
 *		\date		05.09.2012-06.09.2012
 *		\version	0.1
 *
 *		\brief		Unit testing for:
 *						make_set
 *						make_map
 *						make_list
 *						make_queue
 *						make_stack
 *						make_vector
 *						make_multiset
 *						make_multimap
 *						make_priority_queue
 */


#if defined(PELA_UNITTESTING)


#include "gtest/gtest.h"

#include "ExSTL/MakeSet.h"
#include "ExSTL/MakeMap.h"
#include "ExSTL/MakeList.h"
#include "ExSTL/MakeQueue.h"
#include "ExSTL/MakeStack.h"
#include "ExSTL/MakeVector.h"
#include "ExSTL/MakeMultiSet.h"
#include "ExSTL/MakeMultiMap.h"
#include "ExSTL/MakePriorityQueue.h"


using namespace PeLa::ExSTL;


//=======================================================================================
//
// make_set
//
//=======================================================================================

TEST(MakeSet, make_set_1) {
	std::set<int> st = make_set<int>(1);

	ASSERT_EQ(1, st.size());
	std::set<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
}

TEST(MakeSet, make_set_2) {
	std::set<int> st = make_set<int>(1, 2);

	ASSERT_EQ(2, st.size());
	std::set<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
}

TEST(MakeSet, make_set_3) {
	std::set<int> st = make_set<int>(1, 2, 3);

	ASSERT_EQ(3, st.size());
	std::set<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
}

TEST(MakeSet, make_set_4) {
	std::set<int> st = make_set<int>(1, 2, 3, 4);

	ASSERT_EQ(4, st.size());
	std::set<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
}

TEST(MakeSet, make_set_5) {
	std::set<int> st = make_set<int>(1, 2, 3, 4, 5);

	ASSERT_EQ(5, st.size());
	std::set<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
}

TEST(MakeSet, make_set_6) {
	std::set<int> st = make_set<int>(1, 2, 3, 4, 5, 6);

	ASSERT_EQ(6, st.size());
	std::set<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
}

TEST(MakeSet, make_set_7) {
	std::set<int> st = make_set<int>(1, 2, 3, 4, 5, 6, 7);

	ASSERT_EQ(7, st.size());
	std::set<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
	EXPECT_EQ(7, *(i++));
}

TEST(MakeSet, make_set_8) {
	std::set<int> st = make_set<int>(1, 2, 3, 4, 5, 6, 7, 8);

	ASSERT_EQ(8, st.size());
	std::set<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
	EXPECT_EQ(7, *(i++));
	EXPECT_EQ(8, *(i++));
}

TEST(MakeSet, make_set_9) {
	std::set<int> st = make_set<int>(1, 2, 3, 4, 5, 6, 7, 8, 9);

	ASSERT_EQ(9, st.size());
	std::set<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
	EXPECT_EQ(7, *(i++));
	EXPECT_EQ(8, *(i++));
	EXPECT_EQ(9, *(i++));
}

TEST(MakeSet, make_set_10) {
	std::set<int> st = make_set<int>(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

	ASSERT_EQ(10, st.size());
	std::set<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
	EXPECT_EQ(7, *(i++));
	EXPECT_EQ(8, *(i++));
	EXPECT_EQ(9, *(i++));
	EXPECT_EQ(10, *(i++));
}


//=======================================================================================
//
// make_map
//
//=======================================================================================

TEST(MakeMap, make_map_1) {
	std::map<int, int> mp = make_map<int, int>(1, 11);

	ASSERT_EQ(1, mp.size());
	std::map<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
}

TEST(MakeMap, make_map_2) {
	std::map<int, int> mp = make_map<int, int>(1, 11, 2, 12);

	ASSERT_EQ(2, mp.size());
	std::map<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
	EXPECT_EQ(2, i->first);
	EXPECT_EQ(12, (i++)->second);
}

TEST(MakeMap, make_map_3) {
	std::map<int, int> mp = make_map<int, int>(1, 11, 2, 12, 3, 13);

	ASSERT_EQ(3, mp.size());
	std::map<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
	EXPECT_EQ(2, i->first);
	EXPECT_EQ(12, (i++)->second);
	EXPECT_EQ(3, i->first);
	EXPECT_EQ(13, (i++)->second);
}

TEST(MakeMap, make_map_4) {
	std::map<int, int> mp = make_map<int, int>(1, 11, 2, 12, 3, 13, 4, 14);

	ASSERT_EQ(4, mp.size());
	std::map<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
	EXPECT_EQ(2, i->first);
	EXPECT_EQ(12, (i++)->second);
	EXPECT_EQ(3, i->first);
	EXPECT_EQ(13, (i++)->second);
	EXPECT_EQ(4, i->first);
	EXPECT_EQ(14, (i++)->second);
}

TEST(MakeMap, make_map_5) {
	std::map<int, int> mp = make_map<int, int>(1, 11, 2, 12, 3, 13, 4, 14, 5, 15);

	ASSERT_EQ(5, mp.size());
	std::map<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
	EXPECT_EQ(2, i->first);
	EXPECT_EQ(12, (i++)->second);
	EXPECT_EQ(3, i->first);
	EXPECT_EQ(13, (i++)->second);
	EXPECT_EQ(4, i->first);
	EXPECT_EQ(14, (i++)->second);
	EXPECT_EQ(5, i->first);
	EXPECT_EQ(15, (i++)->second);
}

TEST(MakeMap, make_map_6) {
	std::map<int, int> mp = make_map<int, int>(1, 11, 2, 12, 3, 13,
					4, 14, 5, 15, 6, 16);

	ASSERT_EQ(6, mp.size());
	std::map<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
	EXPECT_EQ(2, i->first);
	EXPECT_EQ(12, (i++)->second);
	EXPECT_EQ(3, i->first);
	EXPECT_EQ(13, (i++)->second);
	EXPECT_EQ(4, i->first);
	EXPECT_EQ(14, (i++)->second);
	EXPECT_EQ(5, i->first);
	EXPECT_EQ(15, (i++)->second);
	EXPECT_EQ(6, i->first);
	EXPECT_EQ(16, (i++)->second);
}

TEST(MakeMap, make_map_7) {
	std::map<int, int> mp = make_map<int, int>(1, 11, 2, 12, 3, 13,
					4, 14, 5, 15, 6, 16, 7, 17);

	ASSERT_EQ(7, mp.size());
	std::map<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
	EXPECT_EQ(2, i->first);
	EXPECT_EQ(12, (i++)->second);
	EXPECT_EQ(3, i->first);
	EXPECT_EQ(13, (i++)->second);
	EXPECT_EQ(4, i->first);
	EXPECT_EQ(14, (i++)->second);
	EXPECT_EQ(5, i->first);
	EXPECT_EQ(15, (i++)->second);
	EXPECT_EQ(6, i->first);
	EXPECT_EQ(16, (i++)->second);
	EXPECT_EQ(7, i->first);
	EXPECT_EQ(17, (i++)->second);
}

TEST(MakeMap, make_map_8) {
	std::map<int, int> mp = make_map<int, int>(1, 11, 2, 12, 3, 13,
					4, 14, 5, 15, 6, 16, 7, 17, 8, 18);

	ASSERT_EQ(8, mp.size());
	std::map<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
	EXPECT_EQ(2, i->first);
	EXPECT_EQ(12, (i++)->second);
	EXPECT_EQ(3, i->first);
	EXPECT_EQ(13, (i++)->second);
	EXPECT_EQ(4, i->first);
	EXPECT_EQ(14, (i++)->second);
	EXPECT_EQ(5, i->first);
	EXPECT_EQ(15, (i++)->second);
	EXPECT_EQ(6, i->first);
	EXPECT_EQ(16, (i++)->second);
	EXPECT_EQ(7, i->first);
	EXPECT_EQ(17, (i++)->second);
	EXPECT_EQ(8, i->first);
	EXPECT_EQ(18, (i++)->second);
}

TEST(MakeMap, make_map_9) {
	std::map<int, int> mp = make_map<int, int>(1, 11, 2, 12, 3, 13,
					4, 14, 5, 15, 6, 16, 7, 17, 8, 18, 9, 19);

	ASSERT_EQ(9, mp.size());
	std::map<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
	EXPECT_EQ(2, i->first);
	EXPECT_EQ(12, (i++)->second);
	EXPECT_EQ(3, i->first);
	EXPECT_EQ(13, (i++)->second);
	EXPECT_EQ(4, i->first);
	EXPECT_EQ(14, (i++)->second);
	EXPECT_EQ(5, i->first);
	EXPECT_EQ(15, (i++)->second);
	EXPECT_EQ(6, i->first);
	EXPECT_EQ(16, (i++)->second);
	EXPECT_EQ(7, i->first);
	EXPECT_EQ(17, (i++)->second);
	EXPECT_EQ(8, i->first);
	EXPECT_EQ(18, (i++)->second);
	EXPECT_EQ(9, i->first);
	EXPECT_EQ(19, (i++)->second);
}

TEST(MakeMap, make_map_10) {
	std::map<int, int> mp = make_map<int, int>(1, 11, 2, 12, 3, 13,
					4, 14, 5, 15, 6, 16, 7, 17, 8, 18, 9, 19, 10, 20);

	ASSERT_EQ(10, mp.size());
	std::map<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
	EXPECT_EQ(2, i->first);
	EXPECT_EQ(12, (i++)->second);
	EXPECT_EQ(3, i->first);
	EXPECT_EQ(13, (i++)->second);
	EXPECT_EQ(4, i->first);
	EXPECT_EQ(14, (i++)->second);
	EXPECT_EQ(5, i->first);
	EXPECT_EQ(15, (i++)->second);
	EXPECT_EQ(6, i->first);
	EXPECT_EQ(16, (i++)->second);
	EXPECT_EQ(7, i->first);
	EXPECT_EQ(17, (i++)->second);
	EXPECT_EQ(8, i->first);
	EXPECT_EQ(18, (i++)->second);
	EXPECT_EQ(9, i->first);
	EXPECT_EQ(19, (i++)->second);
	EXPECT_EQ(10, i->first);
	EXPECT_EQ(20, (i++)->second);
}


//=======================================================================================
//
// make_list
//
//=======================================================================================

TEST(MakeList, make_list_1) {
	std::list<int> lst = make_list<int>(1);

	ASSERT_EQ(1, lst.size());
	std::list<int>::iterator i = lst.begin();
	EXPECT_EQ(1, *(i++));
}

TEST(MakeList, make_list_2) {
	std::list<int> lst = make_list<int>(1, 2);

	ASSERT_EQ(2, lst.size());
	std::list<int>::iterator i = lst.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
}

TEST(MakeList, make_list_3) {
	std::list<int> lst = make_list<int>(1, 2, 3);

	ASSERT_EQ(3, lst.size());
	std::list<int>::iterator i = lst.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
}

TEST(MakeList, make_list_4) {
	std::list<int> lst = make_list<int>(1, 2, 3, 4);

	ASSERT_EQ(4, lst.size());
	std::list<int>::iterator i = lst.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
}

TEST(MakeList, make_list_5) {
	std::list<int> lst = make_list<int>(1, 2, 3, 4, 5);

	ASSERT_EQ(5, lst.size());
	std::list<int>::iterator i = lst.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
}

TEST(MakeList, make_list_6) {
	std::list<int> lst = make_list<int>(1, 2, 3, 4, 5, 6);

	ASSERT_EQ(6, lst.size());
	std::list<int>::iterator i = lst.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
}

TEST(MakeList, make_list_7) {
	std::list<int> lst = make_list<int>(1, 2, 3, 4, 5, 6, 7);

	ASSERT_EQ(7, lst.size());
	std::list<int>::iterator i = lst.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
	EXPECT_EQ(7, *(i++));
}

TEST(MakeList, make_list_8) {
	std::list<int> lst = make_list<int>(1, 2, 3, 4, 5, 6, 7, 8);

	ASSERT_EQ(8, lst.size());
	std::list<int>::iterator i = lst.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
	EXPECT_EQ(7, *(i++));
	EXPECT_EQ(8, *(i++));
}

TEST(MakeList, make_list_9) {
	std::list<int> lst = make_list<int>(1, 2, 3, 4, 5, 6, 7, 8, 9);

	ASSERT_EQ(9, lst.size());
	std::list<int>::iterator i = lst.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
	EXPECT_EQ(7, *(i++));
	EXPECT_EQ(8, *(i++));
	EXPECT_EQ(9, *(i++));
}

TEST(MakeList, make_list_10) {
	std::list<int> lst = make_list<int>(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

	ASSERT_EQ(10, lst.size());
	std::list<int>::iterator i = lst.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
	EXPECT_EQ(7, *(i++));
	EXPECT_EQ(8, *(i++));
	EXPECT_EQ(9, *(i++));
	EXPECT_EQ(10, *(i++));
}


//=======================================================================================
//
// make_queue
//
//=======================================================================================

TEST(MakeQueue, make_queue_1) {
	std::queue<int> q = make_queue<int>(1);

	ASSERT_EQ(1, q.size());
	EXPECT_EQ(1, q.front());
}

TEST(MakeQueue, make_queue_2) {
	std::queue<int> q = make_queue<int>(1, 2);

	ASSERT_EQ(2, q.size());
	EXPECT_EQ(1, q.front());
	q.pop();
	EXPECT_EQ(2, q.front());
}

TEST(MakeQueue, make_queue_3) {
	std::queue<int> q = make_queue<int>(1, 2, 3);

	ASSERT_EQ(3, q.size());
	EXPECT_EQ(1, q.front());
	q.pop();
	EXPECT_EQ(2, q.front());
	q.pop();
	EXPECT_EQ(3, q.front());
}

TEST(MakeQueue, make_queue_4) {
	std::queue<int> q = make_queue<int>(1, 2, 3, 4);

	ASSERT_EQ(4, q.size());
	EXPECT_EQ(1, q.front());
	q.pop();
	EXPECT_EQ(2, q.front());
	q.pop();
	EXPECT_EQ(3, q.front());
	q.pop();
	EXPECT_EQ(4, q.front());
}

TEST(MakeQueue, make_queue_5) {
	std::queue<int> q = make_queue<int>(1, 2, 3, 4, 5);

	ASSERT_EQ(5, q.size());
	EXPECT_EQ(1, q.front());
	q.pop();
	EXPECT_EQ(2, q.front());
	q.pop();
	EXPECT_EQ(3, q.front());
	q.pop();
	EXPECT_EQ(4, q.front());
	q.pop();
	EXPECT_EQ(5, q.front());
}

TEST(MakeQueue, make_queue_6) {
	std::queue<int> q = make_queue<int>(1, 2, 3, 4, 5, 6);

	ASSERT_EQ(6, q.size());
	EXPECT_EQ(1, q.front());
	q.pop();
	EXPECT_EQ(2, q.front());
	q.pop();
	EXPECT_EQ(3, q.front());
	q.pop();
	EXPECT_EQ(4, q.front());
	q.pop();
	EXPECT_EQ(5, q.front());
	q.pop();
	EXPECT_EQ(6, q.front());
}

TEST(MakeQueue, make_queue_7) {
	std::queue<int> q = make_queue<int>(1, 2, 3, 4, 5, 6, 7);

	ASSERT_EQ(7, q.size());
	EXPECT_EQ(1, q.front());
	q.pop();
	EXPECT_EQ(2, q.front());
	q.pop();
	EXPECT_EQ(3, q.front());
	q.pop();
	EXPECT_EQ(4, q.front());
	q.pop();
	EXPECT_EQ(5, q.front());
	q.pop();
	EXPECT_EQ(6, q.front());
	q.pop();
	EXPECT_EQ(7, q.front());
}

TEST(MakeQueue, make_queue_8) {
	std::queue<int> q = make_queue<int>(1, 2, 3, 4, 5, 6, 7, 8);

	ASSERT_EQ(8, q.size());
	EXPECT_EQ(1, q.front());
	q.pop();
	EXPECT_EQ(2, q.front());
	q.pop();
	EXPECT_EQ(3, q.front());
	q.pop();
	EXPECT_EQ(4, q.front());
	q.pop();
	EXPECT_EQ(5, q.front());
	q.pop();
	EXPECT_EQ(6, q.front());
	q.pop();
	EXPECT_EQ(7, q.front());
	q.pop();
	EXPECT_EQ(8, q.front());
}

TEST(MakeQueue, make_queue_9) {
	std::queue<int> q = make_queue<int>(1, 2, 3, 4, 5, 6, 7, 8, 9);

	ASSERT_EQ(9, q.size());
	EXPECT_EQ(1, q.front());
	q.pop();
	EXPECT_EQ(2, q.front());
	q.pop();
	EXPECT_EQ(3, q.front());
	q.pop();
	EXPECT_EQ(4, q.front());
	q.pop();
	EXPECT_EQ(5, q.front());
	q.pop();
	EXPECT_EQ(6, q.front());
	q.pop();
	EXPECT_EQ(7, q.front());
	q.pop();
	EXPECT_EQ(8, q.front());
	q.pop();
	EXPECT_EQ(9, q.front());
}

TEST(MakeQueue, make_queue_10) {
	std::queue<int> q = make_queue<int>(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

	ASSERT_EQ(10, q.size());
	EXPECT_EQ(1, q.front());
	q.pop();
	EXPECT_EQ(2, q.front());
	q.pop();
	EXPECT_EQ(3, q.front());
	q.pop();
	EXPECT_EQ(4, q.front());
	q.pop();
	EXPECT_EQ(5, q.front());
	q.pop();
	EXPECT_EQ(6, q.front());
	q.pop();
	EXPECT_EQ(7, q.front());
	q.pop();
	EXPECT_EQ(8, q.front());
	q.pop();
	EXPECT_EQ(9, q.front());
	q.pop();
	EXPECT_EQ(10, q.front());
}


//=======================================================================================
//
// make_stack
//
//=======================================================================================

TEST(MakeStack, make_stack_1) {
	std::stack<int> st = make_stack<int>(1);

	ASSERT_EQ(1, st.size());
	EXPECT_EQ(1, st.top());
}

TEST(MakeStack, make_stack_2) {
	std::stack<int> st = make_stack<int>(1, 2);

	ASSERT_EQ(2, st.size());
	EXPECT_EQ(2, st.top());
	st.pop();
	EXPECT_EQ(1, st.top());
}

TEST(MakeStack, make_stack_3) {
	std::stack<int> st = make_stack<int>(1, 2, 3);

	ASSERT_EQ(3, st.size());
	EXPECT_EQ(3, st.top());
	st.pop();
	EXPECT_EQ(2, st.top());
	st.pop();
	EXPECT_EQ(1, st.top());
}

TEST(MakeStack, make_stack_4) {
	std::stack<int> st = make_stack<int>(1, 2, 3, 4);

	ASSERT_EQ(4, st.size());
	EXPECT_EQ(4, st.top());
	st.pop();
	EXPECT_EQ(3, st.top());
	st.pop();
	EXPECT_EQ(2, st.top());
	st.pop();
	EXPECT_EQ(1, st.top());
}

TEST(MakeStack, make_stack_5) {
	std::stack<int> st = make_stack<int>(1, 2, 3, 4, 5);

	ASSERT_EQ(5, st.size());
	EXPECT_EQ(5, st.top());
	st.pop();
	EXPECT_EQ(4, st.top());
	st.pop();
	EXPECT_EQ(3, st.top());
	st.pop();
	EXPECT_EQ(2, st.top());
	st.pop();
	EXPECT_EQ(1, st.top());
}

TEST(MakeStack, make_stack_6) {
	std::stack<int> st = make_stack<int>(1, 2, 3, 4, 5, 6);

	ASSERT_EQ(6, st.size());
	EXPECT_EQ(6, st.top());
	st.pop();
	EXPECT_EQ(5, st.top());
	st.pop();
	EXPECT_EQ(4, st.top());
	st.pop();
	EXPECT_EQ(3, st.top());
	st.pop();
	EXPECT_EQ(2, st.top());
	st.pop();
	EXPECT_EQ(1, st.top());
}

TEST(MakeStack, make_stack_7) {
	std::stack<int> st = make_stack<int>(1, 2, 3, 4, 5, 6, 7);

	ASSERT_EQ(7, st.size());
	EXPECT_EQ(7, st.top());
	st.pop();
	EXPECT_EQ(6, st.top());
	st.pop();
	EXPECT_EQ(5, st.top());
	st.pop();
	EXPECT_EQ(4, st.top());
	st.pop();
	EXPECT_EQ(3, st.top());
	st.pop();
	EXPECT_EQ(2, st.top());
	st.pop();
	EXPECT_EQ(1, st.top());
}

TEST(MakeStack, make_stack_8) {
	std::stack<int> st = make_stack<int>(1, 2, 3, 4, 5, 6, 7, 8);

	ASSERT_EQ(8, st.size());
	EXPECT_EQ(8, st.top());
	st.pop();
	EXPECT_EQ(7, st.top());
	st.pop();
	EXPECT_EQ(6, st.top());
	st.pop();
	EXPECT_EQ(5, st.top());
	st.pop();
	EXPECT_EQ(4, st.top());
	st.pop();
	EXPECT_EQ(3, st.top());
	st.pop();
	EXPECT_EQ(2, st.top());
	st.pop();
	EXPECT_EQ(1, st.top());
}

TEST(MakeStack, make_stack_9) {
	std::stack<int> st = make_stack<int>(1, 2, 3, 4, 5, 6, 7, 8, 9);

	ASSERT_EQ(9, st.size());
	EXPECT_EQ(9, st.top());
	st.pop();
	EXPECT_EQ(8, st.top());
	st.pop();
	EXPECT_EQ(7, st.top());
	st.pop();
	EXPECT_EQ(6, st.top());
	st.pop();
	EXPECT_EQ(5, st.top());
	st.pop();
	EXPECT_EQ(4, st.top());
	st.pop();
	EXPECT_EQ(3, st.top());
	st.pop();
	EXPECT_EQ(2, st.top());
	st.pop();
	EXPECT_EQ(1, st.top());
}

TEST(MakeStack, make_stack_10) {
	std::stack<int> st = make_stack<int>(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

	ASSERT_EQ(10, st.size());
	EXPECT_EQ(10, st.top());
	st.pop();
	EXPECT_EQ(9, st.top());
	st.pop();
	EXPECT_EQ(8, st.top());
	st.pop();
	EXPECT_EQ(7, st.top());
	st.pop();
	EXPECT_EQ(6, st.top());
	st.pop();
	EXPECT_EQ(5, st.top());
	st.pop();
	EXPECT_EQ(4, st.top());
	st.pop();
	EXPECT_EQ(3, st.top());
	st.pop();
	EXPECT_EQ(2, st.top());
	st.pop();
	EXPECT_EQ(1, st.top());
}



//=======================================================================================
//
// make_vector
//
//=======================================================================================

TEST(MakeVector, make_vector_1) {
	std::vector<int> vec = make_vector<int>(1);

	ASSERT_EQ(1, vec.size());
	std::vector<int>::iterator i = vec.begin();
	EXPECT_EQ(1, *(i++));
}

TEST(MakeVector, make_vector_2) {
	std::vector<int> vec = make_vector<int>(1, 2);

	ASSERT_EQ(2, vec.size());
	std::vector<int>::iterator i = vec.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
}

TEST(MakeVector, make_vector_3) {
	std::vector<int> vec = make_vector<int>(1, 2, 3);

	ASSERT_EQ(3, vec.size());
	std::vector<int>::iterator i = vec.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
}

TEST(MakeVector, make_vector_4) {
	std::vector<int> vec = make_vector<int>(1, 2, 3, 4);

	ASSERT_EQ(4, vec.size());
	std::vector<int>::iterator i = vec.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
}

TEST(MakeVector, make_vector_5) {
	std::vector<int> vec = make_vector<int>(1, 2, 3, 4, 5);

	ASSERT_EQ(5, vec.size());
	std::vector<int>::iterator i = vec.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
}

TEST(MakeVector, make_vector_6) {
	std::vector<int> vec = make_vector<int>(1, 2, 3, 4, 5, 6);

	ASSERT_EQ(6, vec.size());
	std::vector<int>::iterator i = vec.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
}

TEST(MakeVector, make_vector_7) {
	std::vector<int> vec = make_vector<int>(1, 2, 3, 4, 5, 6, 7);

	ASSERT_EQ(7, vec.size());
	std::vector<int>::iterator i = vec.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
	EXPECT_EQ(7, *(i++));
}

TEST(MakeVector, make_vector_8) {
	std::vector<int> vec = make_vector<int>(1, 2, 3, 4, 5, 6, 7, 8);

	ASSERT_EQ(8, vec.size());
	std::vector<int>::iterator i = vec.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
	EXPECT_EQ(7, *(i++));
	EXPECT_EQ(8, *(i++));
}

TEST(MakeVector, make_vector_9) {
	std::vector<int> vec = make_vector<int>(1, 2, 3, 4, 5, 6, 7, 8, 9);

	ASSERT_EQ(9, vec.size());
	std::vector<int>::iterator i = vec.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
	EXPECT_EQ(7, *(i++));
	EXPECT_EQ(8, *(i++));
	EXPECT_EQ(9, *(i++));
}
TEST(MakeVector, make_vector_10) {
	std::vector<int> vec = make_vector<int>(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

	ASSERT_EQ(10, vec.size());
	std::vector<int>::iterator i = vec.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
	EXPECT_EQ(7, *(i++));
	EXPECT_EQ(8, *(i++));
	EXPECT_EQ(9, *(i++));
	EXPECT_EQ(10, *(i++));
}


//=======================================================================================
//
// make_multiset
//
//=======================================================================================

TEST(MakeMultiSet, make_multiset_1) {
	std::multiset<int> st = make_multiset<int>(1);

	ASSERT_EQ(1, st.size());
	std::multiset<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
}

TEST(MakeMultiSet, make_multiset_2) {
	std::multiset<int> st = make_multiset<int>(1, 2);

	ASSERT_EQ(2, st.size());
	std::multiset<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
}

TEST(MakeMultiSet, make_multiset_3) {
	std::multiset<int> st = make_multiset<int>(1, 2, 3);

	ASSERT_EQ(3, st.size());
	std::multiset<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
}

TEST(MakeMultiSet, make_multiset_4) {
	std::multiset<int> st = make_multiset<int>(1, 2, 3, 4);

	ASSERT_EQ(4, st.size());
	std::multiset<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
}

TEST(MakeMultiSet, make_multiset_5) {
	std::multiset<int> st = make_multiset<int>(1, 2, 3, 4, 5);

	ASSERT_EQ(5, st.size());
	std::multiset<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
}

TEST(MakeMultiSet, make_multiset_6) {
	std::multiset<int> st = make_multiset<int>(1, 2, 3, 4, 5, 6);

	ASSERT_EQ(6, st.size());
	std::multiset<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
}

TEST(MakeMultiSet, make_multiset_7) {
	std::multiset<int> st = make_multiset<int>(1, 2, 3, 4, 5, 6, 7);

	ASSERT_EQ(7, st.size());
	std::multiset<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
	EXPECT_EQ(7, *(i++));
}

TEST(MakeMultiSet, make_multiset_8) {
	std::multiset<int> st = make_multiset<int>(1, 2, 3, 4, 5, 6, 7, 8);

	ASSERT_EQ(8, st.size());
	std::multiset<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
	EXPECT_EQ(7, *(i++));
	EXPECT_EQ(8, *(i++));
}

TEST(MakeMultiSet, make_multiset_9) {
	std::multiset<int> st = make_multiset<int>(1, 2, 3, 4, 5, 6, 7, 8, 9);

	ASSERT_EQ(9, st.size());
	std::multiset<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
	EXPECT_EQ(7, *(i++));
	EXPECT_EQ(8, *(i++));
	EXPECT_EQ(9, *(i++));
}

TEST(MakeMultiSet, make_multiset_10) {
	std::multiset<int> st = make_multiset<int>(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

	ASSERT_EQ(10, st.size());
	std::multiset<int>::iterator i = st.begin();
	EXPECT_EQ(1, *(i++));
	EXPECT_EQ(2, *(i++));
	EXPECT_EQ(3, *(i++));
	EXPECT_EQ(4, *(i++));
	EXPECT_EQ(5, *(i++));
	EXPECT_EQ(6, *(i++));
	EXPECT_EQ(7, *(i++));
	EXPECT_EQ(8, *(i++));
	EXPECT_EQ(9, *(i++));
	EXPECT_EQ(10, *(i++));
}


//=======================================================================================
//
// make_multimap
//
//=======================================================================================

TEST(MakeMultiMap, make_multimap_1) {
	std::multimap<int, int> mp = make_multimap<int, int>(1, 11);

	ASSERT_EQ(1, mp.size());
	std::multimap<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
}

TEST(MakeMultiMap, make_multimap_2) {
	std::multimap<int, int> mp = make_multimap<int, int>(1, 11, 2, 12);

	ASSERT_EQ(2, mp.size());
	std::multimap<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
	EXPECT_EQ(2, i->first);
	EXPECT_EQ(12, (i++)->second);
}

TEST(MakeMultiMap, make_multimap_3) {
	std::multimap<int, int> mp = make_multimap<int, int>(1, 11, 2, 12, 3, 13);

	ASSERT_EQ(3, mp.size());
	std::multimap<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
	EXPECT_EQ(2, i->first);
	EXPECT_EQ(12, (i++)->second);
	EXPECT_EQ(3, i->first);
	EXPECT_EQ(13, (i++)->second);
}

TEST(MakeMultiMap, make_multimap_4) {
	std::multimap<int, int> mp = make_multimap<int, int>(1, 11, 2, 12, 3, 13, 4, 14);

	ASSERT_EQ(4, mp.size());
	std::multimap<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
	EXPECT_EQ(2, i->first);
	EXPECT_EQ(12, (i++)->second);
	EXPECT_EQ(3, i->first);
	EXPECT_EQ(13, (i++)->second);
	EXPECT_EQ(4, i->first);
	EXPECT_EQ(14, (i++)->second);
}

TEST(MakeMultiMap, make_multimap_5) {
	std::multimap<int, int> mp = make_multimap<int, int>(1, 11, 2, 12, 3, 13, 4, 14, 5, 15);

	ASSERT_EQ(5, mp.size());
	std::multimap<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
	EXPECT_EQ(2, i->first);
	EXPECT_EQ(12, (i++)->second);
	EXPECT_EQ(3, i->first);
	EXPECT_EQ(13, (i++)->second);
	EXPECT_EQ(4, i->first);
	EXPECT_EQ(14, (i++)->second);
	EXPECT_EQ(5, i->first);
	EXPECT_EQ(15, (i++)->second);
}

TEST(MakeMultiMap, make_multimap_6) {
	std::multimap<int, int> mp = make_multimap<int, int>(1, 11, 2, 12, 3, 13,
					4, 14, 5, 15, 6, 16);

	ASSERT_EQ(6, mp.size());
	std::multimap<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
	EXPECT_EQ(2, i->first);
	EXPECT_EQ(12, (i++)->second);
	EXPECT_EQ(3, i->first);
	EXPECT_EQ(13, (i++)->second);
	EXPECT_EQ(4, i->first);
	EXPECT_EQ(14, (i++)->second);
	EXPECT_EQ(5, i->first);
	EXPECT_EQ(15, (i++)->second);
	EXPECT_EQ(6, i->first);
	EXPECT_EQ(16, (i++)->second);
}

TEST(MakeMultiMap, make_multimap_7) {
	std::multimap<int, int> mp = make_multimap<int, int>(1, 11, 2, 12, 3, 13,
					4, 14, 5, 15, 6, 16, 7, 17);

	ASSERT_EQ(7, mp.size());
	std::multimap<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
	EXPECT_EQ(2, i->first);
	EXPECT_EQ(12, (i++)->second);
	EXPECT_EQ(3, i->first);
	EXPECT_EQ(13, (i++)->second);
	EXPECT_EQ(4, i->first);
	EXPECT_EQ(14, (i++)->second);
	EXPECT_EQ(5, i->first);
	EXPECT_EQ(15, (i++)->second);
	EXPECT_EQ(6, i->first);
	EXPECT_EQ(16, (i++)->second);
	EXPECT_EQ(7, i->first);
	EXPECT_EQ(17, (i++)->second);
}

TEST(MakeMultiMap, make_multimap_8) {
	std::multimap<int, int> mp = make_multimap<int, int>(1, 11, 2, 12, 3, 13,
					4, 14, 5, 15, 6, 16, 7, 17, 8, 18);

	ASSERT_EQ(8, mp.size());
	std::multimap<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
	EXPECT_EQ(2, i->first);
	EXPECT_EQ(12, (i++)->second);
	EXPECT_EQ(3, i->first);
	EXPECT_EQ(13, (i++)->second);
	EXPECT_EQ(4, i->first);
	EXPECT_EQ(14, (i++)->second);
	EXPECT_EQ(5, i->first);
	EXPECT_EQ(15, (i++)->second);
	EXPECT_EQ(6, i->first);
	EXPECT_EQ(16, (i++)->second);
	EXPECT_EQ(7, i->first);
	EXPECT_EQ(17, (i++)->second);
	EXPECT_EQ(8, i->first);
	EXPECT_EQ(18, (i++)->second);
}

TEST(MakeMultiMap, make_multimap_9) {
	std::multimap<int, int> mp = make_multimap<int, int>(1, 11, 2, 12, 3, 13,
					4, 14, 5, 15, 6, 16, 7, 17, 8, 18, 9, 19);

	ASSERT_EQ(9, mp.size());
	std::multimap<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
	EXPECT_EQ(2, i->first);
	EXPECT_EQ(12, (i++)->second);
	EXPECT_EQ(3, i->first);
	EXPECT_EQ(13, (i++)->second);
	EXPECT_EQ(4, i->first);
	EXPECT_EQ(14, (i++)->second);
	EXPECT_EQ(5, i->first);
	EXPECT_EQ(15, (i++)->second);
	EXPECT_EQ(6, i->first);
	EXPECT_EQ(16, (i++)->second);
	EXPECT_EQ(7, i->first);
	EXPECT_EQ(17, (i++)->second);
	EXPECT_EQ(8, i->first);
	EXPECT_EQ(18, (i++)->second);
	EXPECT_EQ(9, i->first);
	EXPECT_EQ(19, (i++)->second);
}

TEST(MakeMultiMap, make_multimap_10) {
	std::multimap<int, int> mp = make_multimap<int, int>(1, 11, 2, 12, 3, 13,
					4, 14, 5, 15, 6, 16, 7, 17, 8, 18, 9, 19, 10, 20);

	ASSERT_EQ(10, mp.size());
	std::multimap<int, int>::iterator i = mp.begin();
	EXPECT_EQ(1, i->first);
	EXPECT_EQ(11, (i++)->second);
	EXPECT_EQ(2, i->first);
	EXPECT_EQ(12, (i++)->second);
	EXPECT_EQ(3, i->first);
	EXPECT_EQ(13, (i++)->second);
	EXPECT_EQ(4, i->first);
	EXPECT_EQ(14, (i++)->second);
	EXPECT_EQ(5, i->first);
	EXPECT_EQ(15, (i++)->second);
	EXPECT_EQ(6, i->first);
	EXPECT_EQ(16, (i++)->second);
	EXPECT_EQ(7, i->first);
	EXPECT_EQ(17, (i++)->second);
	EXPECT_EQ(8, i->first);
	EXPECT_EQ(18, (i++)->second);
	EXPECT_EQ(9, i->first);
	EXPECT_EQ(19, (i++)->second);
	EXPECT_EQ(10, i->first);
	EXPECT_EQ(20, (i++)->second);
}


//=======================================================================================
//
// make_prioreti_queue
//
//=======================================================================================

TEST(MakePriorityQueue, make_priority_queue_1) {
	std::priority_queue<int> q = make_priority_queue<int>(1);

	ASSERT_EQ(1, q.size());
	EXPECT_EQ(1, q.top());
}

TEST(MakePriorityQueue, make_priority_queue_2) {
	std::priority_queue<int> q = make_priority_queue<int>(1, 2);

	ASSERT_EQ(2, q.size());
	EXPECT_EQ(2, q.top());
	q.pop();
	EXPECT_EQ(1, q.top());
}

TEST(MakePriorityQueue, make_priority_queue_3) {
	std::priority_queue<int> q = make_priority_queue<int>(1, 2, 3);

	ASSERT_EQ(3, q.size());
	EXPECT_EQ(3, q.top());
	q.pop();
	EXPECT_EQ(2, q.top());
	q.pop();
	EXPECT_EQ(1, q.top());
}

TEST(MakePriorityQueue, make_priority_queue_4) {
	std::priority_queue<int> q = make_priority_queue<int>(1, 2, 3, 4);

	ASSERT_EQ(4, q.size());
	EXPECT_EQ(4, q.top());
	q.pop();
	EXPECT_EQ(3, q.top());
	q.pop();
	EXPECT_EQ(2, q.top());
	q.pop();
	EXPECT_EQ(1, q.top());
}

TEST(MakePriorityQueue, make_priority_queue_5) {
	std::priority_queue<int> q = make_priority_queue<int>(1, 2, 3, 4, 5);

	ASSERT_EQ(5, q.size());
	EXPECT_EQ(5, q.top());
	q.pop();
	EXPECT_EQ(4, q.top());
	q.pop();
	EXPECT_EQ(3, q.top());
	q.pop();
	EXPECT_EQ(2, q.top());
	q.pop();
	EXPECT_EQ(1, q.top());
}

TEST(MakePriorityQueue, make_priority_queue_6) {
	std::priority_queue<int> q = make_priority_queue<int>(1, 2, 3, 4, 5, 6);

	ASSERT_EQ(6, q.size());
	EXPECT_EQ(6, q.top());
	q.pop();
	EXPECT_EQ(5, q.top());
	q.pop();
	EXPECT_EQ(4, q.top());
	q.pop();
	EXPECT_EQ(3, q.top());
	q.pop();
	EXPECT_EQ(2, q.top());
	q.pop();
	EXPECT_EQ(1, q.top());
}

TEST(MakePriorityQueue, make_priority_queue_7) {
	std::priority_queue<int> q = make_priority_queue<int>(1, 2, 3, 4, 5, 6, 7);

	ASSERT_EQ(7, q.size());
	EXPECT_EQ(7, q.top());
	q.pop();
	EXPECT_EQ(6, q.top());
	q.pop();
	EXPECT_EQ(5, q.top());
	q.pop();
	EXPECT_EQ(4, q.top());
	q.pop();
	EXPECT_EQ(3, q.top());
	q.pop();
	EXPECT_EQ(2, q.top());
	q.pop();
	EXPECT_EQ(1, q.top());
}

TEST(MakePriorityQueue, make_priority_queue_8) {
	std::priority_queue<int> q = make_priority_queue<int>(1, 2, 3, 4, 5, 6, 7, 8);

	ASSERT_EQ(8, q.size());
	EXPECT_EQ(8, q.top());
	q.pop();
	EXPECT_EQ(7, q.top());
	q.pop();
	EXPECT_EQ(6, q.top());
	q.pop();
	EXPECT_EQ(5, q.top());
	q.pop();
	EXPECT_EQ(4, q.top());
	q.pop();
	EXPECT_EQ(3, q.top());
	q.pop();
	EXPECT_EQ(2, q.top());
	q.pop();
	EXPECT_EQ(1, q.top());
}

TEST(MakePriorityQueue, make_priority_queue_9) {
	std::priority_queue<int> q = make_priority_queue<int>(1, 2, 3, 4, 5, 6, 7, 8, 9);

	ASSERT_EQ(9, q.size());
	EXPECT_EQ(9, q.top());
	q.pop();
	EXPECT_EQ(8, q.top());
	q.pop();
	EXPECT_EQ(7, q.top());
	q.pop();
	EXPECT_EQ(6, q.top());
	q.pop();
	EXPECT_EQ(5, q.top());
	q.pop();
	EXPECT_EQ(4, q.top());
	q.pop();
	EXPECT_EQ(3, q.top());
	q.pop();
	EXPECT_EQ(2, q.top());
	q.pop();
	EXPECT_EQ(1, q.top());
}

TEST(MakePriorityQueue, make_priority_queue_10) {
	std::priority_queue<int> q = make_priority_queue<int>(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

	ASSERT_EQ(10, q.size());
	EXPECT_EQ(10, q.top());
	q.pop();
	EXPECT_EQ(9, q.top());
	q.pop();
	EXPECT_EQ(8, q.top());
	q.pop();
	EXPECT_EQ(7, q.top());
	q.pop();
	EXPECT_EQ(6, q.top());
	q.pop();
	EXPECT_EQ(5, q.top());
	q.pop();
	EXPECT_EQ(4, q.top());
	q.pop();
	EXPECT_EQ(3, q.top());
	q.pop();
	EXPECT_EQ(2, q.top());
	q.pop();
	EXPECT_EQ(1, q.top());
}


#endif //defined(PELA_UNITTESTING)
