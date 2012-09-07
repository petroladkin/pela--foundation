/**
 *		\file		MakeStack.h
 *		\author		Petro Ladkin aka peter__pan (PeLa)
 *		\date		05.01.2010-06.09.2012
 *		\version	0.2
 *
 *		\brief		Implemenataion function:
 *						make_stack
 *
 *		\code
 *			Example:
 *				std::stack<int> stk = make_stack<int>(10, 20, 30, 40);
 *		\endcode
 */


#ifndef __PELA_EXSTL_MAKE_STACK_H__
#define __PELA_EXSTL_MAKE_STACK_H__


#include <stack>


namespace PeLa {


namespace ExSTL {


template< class TV >
std::stack< TV > make_stack(const TV& p_v1) {
	std::stack< TV > stk;
	stk.push(p_v1);
	return stk;
}

template< class TV >
std::stack< TV > make_stack(const TV& p_v1, const TV& p_v2) {
	std::stack< TV > stk;
	stk.push(p_v1);
	stk.push(p_v2);
	return stk;
}

template< class TV >
std::stack< TV > make_stack(const TV& p_v1, const TV& p_v2, const TV& p_v3) {
	std::stack< TV > stk;
	stk.push(p_v1);
	stk.push(p_v2);
	stk.push(p_v3);
	return stk;
}

template< class TV >
std::stack< TV > make_stack(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4) {
	std::stack< TV > stk;
	stk.push(p_v1);
	stk.push(p_v2);
	stk.push(p_v3);
	stk.push(p_v4);
	return stk;
}

template< class TV >
std::stack< TV > make_stack(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5) {
	std::stack< TV > stk;
	stk.push(p_v1);
	stk.push(p_v2);
	stk.push(p_v3);
	stk.push(p_v4);
	stk.push(p_v5);
	return stk;
}

template< class TV >
std::stack< TV > make_stack(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6) {
	std::stack< TV > stk;
	stk.push(p_v1);
	stk.push(p_v2);
	stk.push(p_v3);
	stk.push(p_v4);
	stk.push(p_v5);
	stk.push(p_v6);
	return stk;
}

template< class TV >
std::stack< TV > make_stack(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7) {
	std::stack< TV > stk;
	stk.push(p_v1);
	stk.push(p_v2);
	stk.push(p_v3);
	stk.push(p_v4);
	stk.push(p_v5);
	stk.push(p_v6);
	stk.push(p_v7);
	return stk;
}

template< class TV >
std::stack< TV > make_stack(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8) {
	std::stack< TV > stk;
	stk.push(p_v1);
	stk.push(p_v2);
	stk.push(p_v3);
	stk.push(p_v4);
	stk.push(p_v5);
	stk.push(p_v6);
	stk.push(p_v7);
	stk.push(p_v8);
	return stk;
}

template< class TV >
std::stack< TV > make_stack(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8, const TV& p_v9) {
	std::stack< TV > stk;
	stk.push(p_v1);
	stk.push(p_v2);
	stk.push(p_v3);
	stk.push(p_v4);
	stk.push(p_v5);
	stk.push(p_v6);
	stk.push(p_v7);
	stk.push(p_v8);
	stk.push(p_v9);
	return stk;
}

template< class TV >
std::stack< TV > make_stack(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8, const TV& p_v9,
		const TV& p_v10) {
	std::stack< TV > stk;
	stk.push(p_v1);
	stk.push(p_v2);
	stk.push(p_v3);
	stk.push(p_v4);
	stk.push(p_v5);
	stk.push(p_v6);
	stk.push(p_v7);
	stk.push(p_v8);
	stk.push(p_v9);
	stk.push(p_v10);
	return stk;
}


} //namespace ExSTL


} //namespace PeLa


#endif //__PELA_EXSTL_MAKE_STACK_H__
