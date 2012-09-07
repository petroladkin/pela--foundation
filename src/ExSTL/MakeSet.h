/**
 *		\file		MakeSet.h
 *		\author		Petro Ladkin aka peter__pan (PeLa)
 *		\date		05.01.2010-06.09.2012
 *		\version	0.2
 *
 *		\brief		Implemenataion function:
 *						make_set
 *
 *		\code
 *			Example:
 *				std::set<int> st = make_set<int>(10, 20, 30, 40);
 *		\endcode
 */


#ifndef __PELA_EXSTL_MAKE_SET_H__
#define __PELA_EXSTL_MAKE_SET_H__


#include <set>


namespace PeLa {


namespace ExSTL {


template< class TV >
std::set< TV > make_set(const TV& p_v1) {
	std::set< TV > st;
	st.insert(p_v1);
	return st;
}

template< class TV >
std::set< TV > make_set(const TV& p_v1, const TV& p_v2) {
	std::set< TV > st;
	st.insert(p_v1);
	st.insert(p_v2);
	return st;
}

template< class TV >
std::set< TV > make_set(const TV& p_v1, const TV& p_v2, const TV& p_v3) {
	std::set< TV > st;
	st.insert(p_v1);
	st.insert(p_v2);
	st.insert(p_v3);
	return st;
}

template< class TV >
std::set< TV > make_set(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4) {
	std::set< TV > st;
	st.insert(p_v1);
	st.insert(p_v2);
	st.insert(p_v3);
	st.insert(p_v4);
	return st;
}

template< class TV >
std::set< TV > make_set(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5) {
	std::set< TV > st;
	st.insert(p_v1);
	st.insert(p_v2);
	st.insert(p_v3);
	st.insert(p_v4);
	st.insert(p_v5);
	return st;
}

template< class TV >
std::set< TV > make_set(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6) {
	std::set< TV > st;
	st.insert(p_v1);
	st.insert(p_v2);
	st.insert(p_v3);
	st.insert(p_v4);
	st.insert(p_v5);
	st.insert(p_v6);
	return st;
}

template< class TV >
std::set< TV > make_set(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7) {
	std::set< TV > st;
	st.insert(p_v1);
	st.insert(p_v2);
	st.insert(p_v3);
	st.insert(p_v4);
	st.insert(p_v5);
	st.insert(p_v6);
	st.insert(p_v7);
	return st;
}

template< class TV >
std::set< TV > make_set(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8) {
	std::set< TV > st;
	st.insert(p_v1);
	st.insert(p_v2);
	st.insert(p_v3);
	st.insert(p_v4);
	st.insert(p_v5);
	st.insert(p_v6);
	st.insert(p_v7);
	st.insert(p_v8);
	return st;
}

template< class TV >
std::set< TV > make_set(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8, const TV& p_v9) {
	std::set< TV > st;
	st.insert(p_v1);
	st.insert(p_v2);
	st.insert(p_v3);
	st.insert(p_v4);
	st.insert(p_v5);
	st.insert(p_v6);
	st.insert(p_v7);
	st.insert(p_v8);
	st.insert(p_v9);
	return st;
}

template< class TV >
std::set< TV > make_set(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8, const TV& p_v9,
		const TV& p_v10) {
	std::set< TV > st;
	st.insert(p_v1);
	st.insert(p_v2);
	st.insert(p_v3);
	st.insert(p_v4);
	st.insert(p_v5);
	st.insert(p_v6);
	st.insert(p_v7);
	st.insert(p_v8);
	st.insert(p_v9);
	st.insert(p_v10);
	return st;
}


} //namespace ExSTL


} //namespace PeLa


#endif //__PELA_EXSTL_MAKE_SET_H__
