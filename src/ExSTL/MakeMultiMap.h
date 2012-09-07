/**
 *		\file		MakeMultiMap.h
 *		\author		Petro Ladkin  aka  peter__pan  (http://pela.com.ua)
 *		\date		05.01.2010-06.09.2012
 *		\version	0.2
 *
 *		\brief		implemenataion make_multimap function						
 *
 *		\code
 *			Example:
 *				std::multimap<std::string, std::string> mmp = make_multimap<std::string, std::string>("p1", "v1", "p2", "v2");
 *		\endcode
 *
 *		\section COPYRIGHT
 *
 *          Copyright (c) 2006-2012
 *          Petro Ladkin  aka  peter__pan  (http://pela.com.ua)
 *
 *		\section LICENSE
 *
 *          This material is provided "as is", with absolutely no warranty expressed
 *          or implied. Any use is at your own risk.
 *
 *          Permission to use or copy this software for any purpose is hereby granted 
 *          without fee, provided the above notices are retained on all copies.
 *          Permission to modify the code and to distribute modified code is granted,
 *          provided the above notices are retained, and a notice that the code was
 *          modified is included with the above copyright notice.
 */


#ifndef __PELA_EXSTL_MAKE_MULTIMAP_H__
#define __PELA_EXSTL_MAKE_MULTIMAP_H__


#include <map>


namespace PeLa {


namespace ExSTL {


template< class TK, class TV >
std::multimap< TK, TV > make_multimap(const TK& p_k1, const TV& p_v1) {
	std::multimap< TK, TV > mmp;
	mmp.insert(std::pair< TK, TV >(p_k1, p_v1));
	return mmp;
}

template< class TK, class TV >
std::multimap< TK, TV > make_multimap(const TK& p_k1, const TV& p_v1, const TK& p_k2, const TV& p_v2) {
	std::multimap< TK, TV > mmp;
	mmp.insert(std::pair< TK, TV >(p_k1, p_v1));
	mmp.insert(std::pair< TK, TV >(p_k2, p_v2));
	return mmp;
}

template< class TK, class TV >
std::multimap< TK, TV > make_multimap(const TK& p_k1, const TV& p_v1, const TK& p_k2, const TV& p_v2,
		const TK& p_k3, const TV& p_v3) {
	std::multimap< TK, TV > mmp;
	mmp.insert(std::pair< TK, TV >(p_k1, p_v1));
	mmp.insert(std::pair< TK, TV >(p_k2, p_v2));
	mmp.insert(std::pair< TK, TV >(p_k3, p_v3));
	return mmp;
}

template< class TK, class TV >
std::multimap< TK, TV > make_multimap(const TK& p_k1, const TV& p_v1, const TK& p_k2, const TV& p_v2,
		const TK& p_k3, const TV& p_v3, const TK& p_k4, const TV& p_v4) {
	std::multimap< TK, TV > mmp;
	mmp.insert(std::pair< TK, TV >(p_k1, p_v1));
	mmp.insert(std::pair< TK, TV >(p_k2, p_v2));
	mmp.insert(std::pair< TK, TV >(p_k3, p_v3));
	mmp.insert(std::pair< TK, TV >(p_k4, p_v4));
	return mmp;
}

template< class TK, class TV >
std::multimap< TK, TV > make_multimap(const TK& p_k1, const TV& p_v1, const TK& p_k2, const TV& p_v2,
		const TK& p_k3, const TV& p_v3, const TK& p_k4, const TV& p_v4,
		const TK& p_k5, const TV& p_v5) {
	std::multimap< TK, TV > mmp;
	mmp.insert(std::pair< TK, TV >(p_k1, p_v1));
	mmp.insert(std::pair< TK, TV >(p_k2, p_v2));
	mmp.insert(std::pair< TK, TV >(p_k3, p_v3));
	mmp.insert(std::pair< TK, TV >(p_k4, p_v4));
	mmp.insert(std::pair< TK, TV >(p_k5, p_v5));
	return mmp;
}

template< class TK, class TV >
std::multimap< TK, TV > make_multimap(const TK& p_k1, const TV& p_v1, const TK& p_k2, const TV& p_v2,
		const TK& p_k3, const TV& p_v3, const TK& p_k4, const TV& p_v4,
		const TK& p_k5, const TV& p_v5, const TK& p_k6, const TV& p_v6) {
	std::multimap< TK, TV > mmp;
	mmp.insert(std::pair< TK, TV >(p_k1, p_v1));
	mmp.insert(std::pair< TK, TV >(p_k2, p_v2));
	mmp.insert(std::pair< TK, TV >(p_k3, p_v3));
	mmp.insert(std::pair< TK, TV >(p_k4, p_v4));
	mmp.insert(std::pair< TK, TV >(p_k5, p_v5));
	mmp.insert(std::pair< TK, TV >(p_k6, p_v6));
	return mmp;
}

template< class TK, class TV >
std::multimap< TK, TV > make_multimap(const TK& p_k1, const TV& p_v1, const TK& p_k2, const TV& p_v2,
		const TK& p_k3, const TV& p_v3, const TK& p_k4, const TV& p_v4,
		const TK& p_k5, const TV& p_v5, const TK& p_k6, const TV& p_v6,
		const TK& p_k7, const TV& p_v7) {
	std::multimap< TK, TV > mmp;
	mmp.insert(std::pair< TK, TV >(p_k1, p_v1));
	mmp.insert(std::pair< TK, TV >(p_k2, p_v2));
	mmp.insert(std::pair< TK, TV >(p_k3, p_v3));
	mmp.insert(std::pair< TK, TV >(p_k4, p_v4));
	mmp.insert(std::pair< TK, TV >(p_k5, p_v5));
	mmp.insert(std::pair< TK, TV >(p_k6, p_v6));
	mmp.insert(std::pair< TK, TV >(p_k7, p_v7));
	return mmp;
}

template< class TK, class TV >
std::multimap< TK, TV > make_multimap(const TK& p_k1, const TV& p_v1, const TK& p_k2, const TV& p_v2,
		const TK& p_k3, const TV& p_v3, const TK& p_k4, const TV& p_v4,
		const TK& p_k5, const TV& p_v5, const TK& p_k6, const TV& p_v6,
		const TK& p_k7, const TV& p_v7, const TK& p_k8, const TV& p_v8) {
	std::multimap< TK, TV > mmp;
	mmp.insert(std::pair< TK, TV >(p_k1, p_v1));
	mmp.insert(std::pair< TK, TV >(p_k2, p_v2));
	mmp.insert(std::pair< TK, TV >(p_k3, p_v3));
	mmp.insert(std::pair< TK, TV >(p_k4, p_v4));
	mmp.insert(std::pair< TK, TV >(p_k5, p_v5));
	mmp.insert(std::pair< TK, TV >(p_k6, p_v6));
	mmp.insert(std::pair< TK, TV >(p_k7, p_v7));
	mmp.insert(std::pair< TK, TV >(p_k8, p_v8));
	return mmp;
}

template< class TK, class TV >
std::multimap< TK, TV > make_multimap(const TK& p_k1, const TV& p_v1, const TK& p_k2, const TV& p_v2,
		const TK& p_k3, const TV& p_v3, const TK& p_k4, const TV& p_v4,
		const TK& p_k5, const TV& p_v5, const TK& p_k6, const TV& p_v6,
		const TK& p_k7, const TV& p_v7, const TK& p_k8, const TV& p_v8,
		const TK& p_k9, const TV& p_v9) {
	std::multimap< TK, TV > mmp;
	mmp.insert(std::pair< TK, TV >(p_k1, p_v1));
	mmp.insert(std::pair< TK, TV >(p_k2, p_v2));
	mmp.insert(std::pair< TK, TV >(p_k3, p_v3));
	mmp.insert(std::pair< TK, TV >(p_k4, p_v4));
	mmp.insert(std::pair< TK, TV >(p_k5, p_v5));
	mmp.insert(std::pair< TK, TV >(p_k6, p_v6));
	mmp.insert(std::pair< TK, TV >(p_k7, p_v7));
	mmp.insert(std::pair< TK, TV >(p_k8, p_v8));
	mmp.insert(std::pair< TK, TV >(p_k9, p_v9));
	return mmp;
}

template< class TK, class TV >
std::multimap< TK, TV > make_multimap( const TK& p_k1, const TV& p_v1, const TK& p_k2, const TV& p_v2,
		const TK& p_k3, const TV& p_v3, const TK& p_k4, const TV& p_v4,
		const TK& p_k5, const TV& p_v5, const TK& p_k6, const TV& p_v6,
		const TK& p_k7, const TV& p_v7, const TK& p_k8, const TV& p_v8,
		const TK& p_k9, const TV& p_v9, const TK& p_k10, const TV& p_v10) {
	std::multimap< TK, TV > mmp;
	mmp.insert(std::pair< TK, TV >(p_k1, p_v1));
	mmp.insert(std::pair< TK, TV >(p_k2, p_v2));
	mmp.insert(std::pair< TK, TV >(p_k3, p_v3));
	mmp.insert(std::pair< TK, TV >(p_k4, p_v4));
	mmp.insert(std::pair< TK, TV >(p_k5, p_v5));
	mmp.insert(std::pair< TK, TV >(p_k6, p_v6));
	mmp.insert(std::pair< TK, TV >(p_k7, p_v7));
	mmp.insert(std::pair< TK, TV >(p_k8, p_v8));
	mmp.insert(std::pair< TK, TV >(p_k9, p_v9));
	mmp.insert(std::pair< TK, TV >(p_k10, p_v10));
	return mmp;
}


} //namespace ExSTL


} //namespace PeLa


#endif //__PELA_EXSTL_MAKE_MULTIMAP_H__
