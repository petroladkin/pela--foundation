/**
 *		\file		MakeMultiSet.h
 *		\author		Petro Ladkin aka peter__pan (PeLa)
 *		\date		05.01.2010-06.09.2012
 *		\version	0.2
 *
 *		\brief		Implemenataion function:
 *						make_multiset
 *
 *		\code
 *			Example:
 *				std::multiset<int> mst = make_multiset<int>(10, 20, 20, 30);
 *		\endcode
 */


#ifndef __PELA_EXSTL_MAKE_MULTISET_H__
#define __PELA_EXSTL_MAKE_MULTISET_H__


#include <set>


namespace PeLa {


namespace ExSTL {


template< class TV >
std::multiset< TV > make_multiset(const TV& p_v1) {
	std::multiset< TV > mst;
	mst.insert(p_v1);
	return mst;
}

template< class TV >
std::multiset< TV > make_multiset(const TV& p_v1, const TV& p_v2) {
	std::multiset< TV > mst;
	mst.insert(p_v1);
	mst.insert(p_v2);
	return mst;
}

template< class TV >
std::multiset< TV > make_multiset(const TV& p_v1, const TV& p_v2, const TV& p_v3) {
	std::multiset< TV > mst;
	mst.insert(p_v1);
	mst.insert(p_v2);
	mst.insert(p_v3);
	return mst;
}

template< class TV >
std::multiset< TV > make_multiset(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4) {
	std::multiset< TV > mst;
	mst.insert(p_v1);
	mst.insert(p_v2);
	mst.insert(p_v3);
	mst.insert(p_v4);
	return mst;
}

template< class TV >
std::multiset< TV > make_multiset(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5) {
	std::multiset< TV > mst;
	mst.insert(p_v1);
	mst.insert(p_v2);
	mst.insert(p_v3);
	mst.insert(p_v4);
	mst.insert(p_v5);
	return mst;
}

template< class TV >
std::multiset< TV > make_multiset(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6) {
	std::multiset< TV > mst;
	mst.insert(p_v1);
	mst.insert(p_v2);
	mst.insert(p_v3);
	mst.insert(p_v4);
	mst.insert(p_v5);
	mst.insert(p_v6);
	return mst;
}

template< class TV >
std::multiset< TV > make_multiset(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7) {
	std::multiset< TV > mst;
	mst.insert(p_v1);
	mst.insert(p_v2);
	mst.insert(p_v3);
	mst.insert(p_v4);
	mst.insert(p_v5);
	mst.insert(p_v6);
	mst.insert(p_v7);
	return mst;
}

template< class TV >
std::multiset< TV > make_multiset(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8) {
	std::multiset< TV > mst;
	mst.insert(p_v1);
	mst.insert(p_v2);
	mst.insert(p_v3);
	mst.insert(p_v4);
	mst.insert(p_v5);
	mst.insert(p_v6);
	mst.insert(p_v7);
	mst.insert(p_v8);
	return mst;
}

template< class TV >
std::multiset< TV > make_multiset(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8, const TV& p_v9) {
	std::multiset< TV > mst;
	mst.insert(p_v1);
	mst.insert(p_v2);
	mst.insert(p_v3);
	mst.insert(p_v4);
	mst.insert(p_v5);
	mst.insert(p_v6);
	mst.insert(p_v7);
	mst.insert(p_v8);
	mst.insert(p_v9);
	return mst;
}

template< class TV >
std::multiset< TV > make_multiset(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8, const TV& p_v9,
		const TV& p_v10) {
	std::multiset< TV > mst;
	mst.insert(p_v1);
	mst.insert(p_v2);
	mst.insert(p_v3);
	mst.insert(p_v4);
	mst.insert(p_v5);
	mst.insert(p_v6);
	mst.insert(p_v7);
	mst.insert(p_v8);
	mst.insert(p_v9);
	mst.insert(p_v10);
	return mst;
}


} //namespace ExSTL


} //namespace PeLa


#endif //__PELA_EXSTL_MAKE_MULTISET_H__
