/**
 *		\file		MakeQueue.h
 *		\author		Petro Ladkin  aka  peter__pan  (http://pela.com.ua)
 *		\date		05.01.2010-06.09.2012
 *		\version	0.2
 *
 *		\brief		implemenataion make_queue function
 *
 *		\code
 *			Example:
 *				std::queue<int> q = make_queue<int>(10, 20, 30, 40);
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


#ifndef __PELA_EXSTL_MAKE_QUEUE_H__
#define __PELA_EXSTL_MAKE_QUEUE_H__


#include <queue>


namespace PeLa {


namespace ExSTL {


template< class TV >
std::queue< TV > make_queue(const TV& p_v1) {
	std::queue< TV > q;
	q.push(p_v1);
	return q;
}

template< class TV >
std::queue< TV > make_queue(const TV& p_v1, const TV& p_v2) {
	std::queue< TV > q;
	q.push(p_v1);
	q.push(p_v2);
	return q;
}

template< class TV >
std::queue< TV > make_queue(const TV& p_v1, const TV& p_v2, const TV& p_v3) {
	std::queue< TV > q;
	q.push(p_v1);
	q.push(p_v2);
	q.push(p_v3);
	return q;
}

template< class TV >
std::queue< TV > make_queue(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4) {
	std::queue< TV > q;
	q.push(p_v1);
	q.push(p_v2);
	q.push(p_v3);
	q.push(p_v4);
	return q;
}

template< class TV >
std::queue< TV > make_queue(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5) {
	std::queue< TV > q;
	q.push(p_v1);
	q.push(p_v2);
	q.push(p_v3);
	q.push(p_v4);
	q.push(p_v5);
	return q;
}

template< class TV >
std::queue< TV > make_queue(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6) {
	std::queue< TV > q;
	q.push(p_v1);
	q.push(p_v2);
	q.push(p_v3);
	q.push(p_v4);
	q.push(p_v5);
	q.push(p_v6);
	return q;
}

template< class TV >
std::queue< TV > make_queue(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7) {
	std::queue< TV > q;
	q.push(p_v1);
	q.push(p_v2);
	q.push(p_v3);
	q.push(p_v4);
	q.push(p_v5);
	q.push(p_v6);
	q.push(p_v7);
	return q;
}

template< class TV >
std::queue< TV > make_queue(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8) {
	std::queue< TV > q;
	q.push(p_v1);
	q.push(p_v2);
	q.push(p_v3);
	q.push(p_v4);
	q.push(p_v5);
	q.push(p_v6);
	q.push(p_v7);
	q.push(p_v8);
	return q;
}

template< class TV >
std::queue< TV > make_queue(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8, const TV& p_v9) {
	std::queue< TV > q;
	q.push(p_v1);
	q.push(p_v2);
	q.push(p_v3);
	q.push(p_v4);
	q.push(p_v5);
	q.push(p_v6);
	q.push(p_v7);
	q.push(p_v8);
	q.push(p_v9);
	return q;
}

template< class TV >
std::queue< TV > make_queue(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8, const TV& p_v9,
		const TV& p_v10) {
	std::queue< TV > q;
	q.push(p_v1);
	q.push(p_v2);
	q.push(p_v3);
	q.push(p_v4);
	q.push(p_v5);
	q.push(p_v6);
	q.push(p_v7);
	q.push(p_v8);
	q.push(p_v9);
	q.push(p_v10);
	return q;
}


} //namespace ExSTL


} //namespace PeLa


#endif //__PELA_EXSTL_MAKE_QUEUE_H__
