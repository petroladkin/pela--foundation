/**
 *		\file		MakeVector.h
 *		\author		Petro Ladkin aka peter__pan (PeLa)
 *		\date		05.01.2010-06.09.2012
 *		\version	0.2
 *
 *		\brief		Implemenataion function:
 *						make_vector
 *
 *		\code
 *			Example:
 *				std::vector<int> vec = make_vector<int>(10, 20, 30, 40);
 *		\endcode
 */


#ifndef __PELA_EXSTL_MAKE_VECTOR_H__
#define __PELA_EXSTL_MAKE_VECTOR_H__


#include <vector>


namespace PeLa {


namespace ExSTL {


template< class TV >
std::vector< TV > make_vector(const TV& p_v1) {
	std::vector< TV > vec;
	vec.push_back(p_v1);
	return vec;
}

template< class TV >
std::vector< TV > make_vector(const TV& p_v1, const TV& p_v2) {
	std::vector< TV > vec;
	vec.reserve(2);
	vec.push_back(p_v1);
	vec.push_back(p_v2);
	return vec;
}

template< class TV >
std::vector< TV > make_vector(const TV& p_v1, const TV& p_v2, const TV& p_v3) {
	std::vector< TV > vec;
	vec.reserve(3);
	vec.push_back(p_v1);
	vec.push_back(p_v2);
	vec.push_back(p_v3);
	return vec;
}

template< class TV >
std::vector< TV > make_vector(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4) {
	std::vector< TV > vec;
	vec.reserve(4);
	vec.push_back(p_v1);
	vec.push_back(p_v2);
	vec.push_back(p_v3);
	vec.push_back(p_v4);
	return vec;
}

template< class TV >
std::vector< TV > make_vector(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5) {
	std::vector< TV > vec;
	vec.reserve(5);
	vec.push_back(p_v1);
	vec.push_back(p_v2);
	vec.push_back(p_v3);
	vec.push_back(p_v4);
	vec.push_back(p_v5);
	return vec;
}

template< class TV >
std::vector< TV > make_vector(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6) {
	std::vector< TV > vec;
	vec.reserve(6);
	vec.push_back(p_v1);
	vec.push_back(p_v2);
	vec.push_back(p_v3);
	vec.push_back(p_v4);
	vec.push_back(p_v5);
	vec.push_back(p_v6);
	return vec;
}

template< class TV >
std::vector< TV > make_vector(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7) {
	std::vector< TV > vec;
	vec.reserve(7);
	vec.push_back(p_v1);
	vec.push_back(p_v2);
	vec.push_back(p_v3);
	vec.push_back(p_v4);
	vec.push_back(p_v5);
	vec.push_back(p_v6);
	vec.push_back(p_v7);
	return vec;
}

template< class TV >
std::vector< TV > make_vector(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8) {
	std::vector< TV > vec;
	vec.reserve(8);
	vec.push_back(p_v1);
	vec.push_back(p_v2);
	vec.push_back(p_v3);
	vec.push_back(p_v4);
	vec.push_back(p_v5);
	vec.push_back(p_v6);
	vec.push_back(p_v7);
	vec.push_back(p_v8);
	return vec;
}

template< class TV >
std::vector< TV > make_vector(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8, const TV& p_v9)	{
	std::vector< TV > vec;
	vec.reserve(9);
	vec.push_back(p_v1);
	vec.push_back(p_v2);
	vec.push_back(p_v3);
	vec.push_back(p_v4);
	vec.push_back(p_v5);
	vec.push_back(p_v6);
	vec.push_back(p_v7);
	vec.push_back(p_v8);
	vec.push_back(p_v9);
	return vec;
}

template< class TV >
std::vector< TV > make_vector(const TV& p_v1, const TV& p_v2, const TV& p_v3, const TV& p_v4,
		const TV& p_v5, const TV& p_v6, const TV& p_v7, const TV& p_v8, const TV& p_v9,
		const TV& p_v10) {
	std::vector< TV > vec;
	vec.reserve(10);
	vec.push_back(p_v1);
	vec.push_back(p_v2);
	vec.push_back(p_v3);
	vec.push_back(p_v4);
	vec.push_back(p_v5);
	vec.push_back(p_v6);
	vec.push_back(p_v7);
	vec.push_back(p_v8);
	vec.push_back(p_v9);
	vec.push_back(p_v10);
	return vec;
}


} //namespace ExSTL


} //namespace PeLa


#endif //__PELA_EXSTL_MAKE_VECTOR_H__
