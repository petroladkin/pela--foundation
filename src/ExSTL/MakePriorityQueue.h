/**
 *		\file		MakePriorityQueue.h
 *		\author		Petro Ladkin aka peter__pan (PeLa)
 *		\date		05.01.2010-06.09.2012
 *		\version	0.2
 *
 *		\brief		Implemenataion function:
 *						make_priority_queue
 *
 *		\code
 *			Example:
 *				std::priority_queue<int> pq = make_priority_queue<int>(10, 20, 30, 40);
 *		\endcode
 */


#ifndef __PELA_EXSTL_MAKE_PRIORITYQUEUE_H__
#define __PELA_EXSTL_MAKE_PRIORITYQUEUE_H__


#include <queue>


namespace PeLa {


namespace ExSTL {


template< class TV >
std::priority_queue< TV > make_priority_queue(const TV& p_v1) {
	std::priority_queue< TV > q;
	q.push(p_v1);
	return q;
}

template< class TV >
std::priority_queue< TV > make_priority_queue(const TV& p_v1, const TV& p_v2) {
	std::priority_queue< TV > q;
	q.push(p_v1);
	q.push(p_v2);
	return q;
}

template< class TV >
std::priority_queue< TV > make_priority_queue(const TV& p_v1, const TV& p_v2, const TV& p_v3) {
	std::priority_queue< TV > q;
	q.push(p_v1);
	q.push(p_v2);
	q.push(p_v3);
	return q;
}

template< class TV >
std::priority_queue< TV > make_priority_queue(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4) {
	std::priority_queue< TV > q;
	q.push(p_v1);
	q.push(p_v2);
	q.push(p_v3);
	q.push(p_v4);
	return q;
}

template< class TV >
std::priority_queue< TV > make_priority_queue(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5) {
	std::priority_queue< TV > q;
	q.push(p_v1);
	q.push(p_v2);
	q.push(p_v3);
	q.push(p_v4);
	q.push(p_v5);
	return q;
}

template< class TV >
std::priority_queue< TV > make_priority_queue(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6) {
	std::priority_queue< TV > q;
	q.push(p_v1);
	q.push(p_v2);
	q.push(p_v3);
	q.push(p_v4);
	q.push(p_v5);
	q.push(p_v6);
	return q;
}

template< class TV >
std::priority_queue< TV > make_priority_queue(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7) {
	std::priority_queue< TV > q;
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
std::priority_queue< TV > make_priority_queue(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8) {
	std::priority_queue< TV > q;
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
std::priority_queue< TV > make_priority_queue(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8, const TV& p_v9) {
	std::priority_queue< TV > q;
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
std::priority_queue< TV > make_priority_queue(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8, const TV& p_v9,
		const TV& p_v10) {
	std::priority_queue< TV > q;
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


#endif //__PELA_EXSTL_MAKE_PRIORITYQUEUE_H__
