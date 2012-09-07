/**
 *		\file		MakeList.h
 *		\author		Petro Ladkin aka peter__pan (PeLa)
 *		\date		05.01.2010-06.09.2012
 *		\version	0.2
 *
 *		\brief		Implemenataion function:
 *						make_list
 *
 *		\code
 *			Example:
 *				std::list<int> lst = make_list<int>(10, 20, 30, 40, 50);
 *		\endcode
 */


#ifndef __PELA_EXSTL_MAKE_LIST_H__
#define __PELA_EXSTL_MAKE_LIST_H__


#include <list>


namespace PeLa {


namespace ExSTL {


template< class TV >
std::list< TV > make_list(const TV& p_v1) {
	std::list< TV > lst;
	lst.push_back(p_v1);
	return lst;
}

template< class TV >
std::list< TV > make_list(const TV& p_v1, const TV& p_v2) {
	std::list< TV > lst;
	lst.push_back(p_v1);
	lst.push_back(p_v2);
	return lst;
}

template< class TV >
std::list< TV > make_list(const TV& p_v1, const TV& p_v2, const TV& p_v3) {
	std::list< TV > lst;
	lst.push_back(p_v1);
	lst.push_back(p_v2);
	lst.push_back(p_v3);
	return lst;
}

template< class TV >
std::list< TV > make_list(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4) {
	std::list< TV > lst;
	lst.push_back(p_v1);
	lst.push_back(p_v2);
	lst.push_back(p_v3);
	lst.push_back(p_v4);
	return lst;
}

template< class TV >
std::list< TV > make_list(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5) {
	std::list< TV > lst;
	lst.push_back(p_v1);
	lst.push_back(p_v2);
	lst.push_back(p_v3);
	lst.push_back(p_v4);
	lst.push_back(p_v5);
	return lst;
}

template< class TV >
std::list< TV > make_list(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6) {
	std::list< TV > lst;
	lst.push_back(p_v1);
	lst.push_back(p_v2);
	lst.push_back(p_v3);
	lst.push_back(p_v4);
	lst.push_back(p_v5);
	lst.push_back(p_v6);
	return lst;
}

template< class TV >
std::list< TV > make_list(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7) {
	std::list< TV > lst;
	lst.push_back(p_v1);
	lst.push_back(p_v2);
	lst.push_back(p_v3);
	lst.push_back(p_v4);
	lst.push_back(p_v5);
	lst.push_back(p_v6);
	lst.push_back(p_v7);
	return lst;
}

template< class TV >
std::list< TV > make_list(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8) {
	std::list< TV > lst;
	lst.push_back(p_v1);
	lst.push_back(p_v2);
	lst.push_back(p_v3);
	lst.push_back(p_v4);
	lst.push_back(p_v5);
	lst.push_back(p_v6);
	lst.push_back(p_v7);
	lst.push_back(p_v8);
	return lst;
}

template< class TV >
std::list< TV > make_list(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8, const TV& p_v9) {
	std::list< TV > lst;
	lst.push_back(p_v1);
	lst.push_back(p_v2);
	lst.push_back(p_v3);
	lst.push_back(p_v4);
	lst.push_back(p_v5);
	lst.push_back(p_v6);
	lst.push_back(p_v7);
	lst.push_back(p_v8);
	lst.push_back(p_v9);
	return lst;
}

template< class TV >
std::list< TV > make_list(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8, const TV& p_v9,
		const TV& p_v10) {
	std::list< TV > lst;
	lst.push_back(p_v1);
	lst.push_back(p_v2);
	lst.push_back(p_v3);
	lst.push_back(p_v4);
	lst.push_back(p_v5);
	lst.push_back(p_v6);
	lst.push_back(p_v7);
	lst.push_back(p_v8);
	lst.push_back(p_v9);
	lst.push_back(p_v10);
	return lst;
}


} //namespace ExSTL


} //namespace PeLa


#endif //__PELA_EXSTL_MAKE_LIST_H__
