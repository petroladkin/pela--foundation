/**
 *		\file		MakeMap.h
 *		\author		Petro Ladkin aka peter__pan (PeLa)
 *		\date		05.01.2010-06.09.2012
 *		\version	0.2
 *
 *		\brief		Implemenataion function:
 *						make_map
 *
 *		\code
 *			Example:
 *				std::map<std::string, std::string> mp = make_map<std::string, std::string>("p1", "v1", "p2", "v2");
 *		\endcode
 */


#ifndef __PELA_EXSTL_MAKE_MAP_H__
#define __PELA_EXSTL_MAKE_MAP_H__


#include <map>


namespace PeLa {


namespace ExSTL {


template< class TK, class TV >
std::map< TK, TV > make_map(const TK& p_k1, const TV& p_v1) {
	std::map< TK, TV > mp;
	mp[p_k1] = p_v1;
	return mp;
}

template< class TK, class TV >
std::map< TK, TV > make_map(const TK& p_k1, const TV& p_v1, const TK& p_k2, const TV& p_v2) {
	std::map< TK, TV > mp;
	mp[p_k1] = p_v1;
	mp[p_k2] = p_v2;
	return mp;
}

template< class TK, class TV >
std::map< TK, TV > make_map(const TK& p_k1, const TV& p_v1, const TK& p_k2, const TV& p_v2,
		const TK& p_k3, const TV& p_v3) {
	std::map< TK, TV > mp;
	mp[p_k1] = p_v1;
	mp[p_k2] = p_v2;
	mp[p_k3] = p_v3;
	return mp;
}

template< class TK, class TV >
std::map< TK, TV > make_map(const TK& p_k1, const TV& p_v1, const TK& p_k2, const TV& p_v2,
		const TK& p_k3, const TV& p_v3, const TK& p_k4, const TV& p_v4) {
	std::map< TK, TV > mp;
	mp[p_k1] = p_v1;
	mp[p_k2] = p_v2;
	mp[p_k3] = p_v3;
	mp[p_k4] = p_v4;
	return mp;
}

template< class TK, class TV >
std::map< TK, TV > make_map(const TK& p_k1, const TV& p_v1, const TK& p_k2, const TV& p_v2,
		const TK& p_k3, const TV& p_v3, const TK& p_k4, const TV& p_v4,
		const TK& p_k5, const TV& p_v5) {
	std::map< TK, TV > mp;
	mp[p_k1] = p_v1;
	mp[p_k2] = p_v2;
	mp[p_k3] = p_v3;
	mp[p_k4] = p_v4;
	mp[p_k5] = p_v5;
	return mp;
}

template< class TK, class TV >
std::map< TK, TV > make_map(const TK& p_k1, const TV& p_v1, const TK& p_k2, const TV& p_v2,
		const TK& p_k3, const TV& p_v3, const TK& p_k4, const TV& p_v4,
		const TK& p_k5, const TV& p_v5, const TK& p_k6, const TV& p_v6) {
	std::map< TK, TV > mp;
	mp[p_k1] = p_v1;
	mp[p_k2] = p_v2;
	mp[p_k3] = p_v3;
	mp[p_k4] = p_v4;
	mp[p_k5] = p_v5;
	mp[p_k6] = p_v6;
	return mp;
}

template< class TK, class TV >
std::map< TK, TV > make_map(const TK& p_k1, const TV& p_v1, const TK& p_k2, const TV& p_v2,
		const TK& p_k3, const TV& p_v3, const TK& p_k4, const TV& p_v4,
		const TK& p_k5, const TV& p_v5, const TK& p_k6, const TV& p_v6,
		const TK& p_k7, const TV& p_v7) {
	std::map< TK, TV > mp;
	mp[p_k1] = p_v1;
	mp[p_k2] = p_v2;
	mp[p_k3] = p_v3;
	mp[p_k4] = p_v4;
	mp[p_k5] = p_v5;
	mp[p_k6] = p_v6;
	mp[p_k7] = p_v7;
	return mp;
}

template< class TK, class TV >
std::map< TK, TV > make_map(const TK& p_k1, const TV& p_v1, const TK& p_k2, const TV& p_v2,
		const TK& p_k3, const TV& p_v3, const TK& p_k4, const TV& p_v4,
		const TK& p_k5, const TV& p_v5, const TK& p_k6, const TV& p_v6,
		const TK& p_k7, const TV& p_v7, const TK& p_k8, const TV& p_v8) {
	std::map< TK, TV > mp;
	mp[p_k1] = p_v1;
	mp[p_k2] = p_v2;
	mp[p_k3] = p_v3;
	mp[p_k4] = p_v4;
	mp[p_k5] = p_v5;
	mp[p_k6] = p_v6;
	mp[p_k7] = p_v7;
	mp[p_k8] = p_v8;
	return mp;
}

template< class TK, class TV >
std::map< TK, TV > make_map(const TK& p_k1, const TV& p_v1, const TK& p_k2, const TV& p_v2,
		const TK& p_k3, const TV& p_v3, const TK& p_k4, const TV& p_v4,
		const TK& p_k5, const TV& p_v5, const TK& p_k6, const TV& p_v6,
		const TK& p_k7, const TV& p_v7, const TK& p_k8, const TV& p_v8,
		const TK& p_k9, const TV& p_v9) {
	std::map< TK, TV > mp;
	mp[p_k1] = p_v1;
	mp[p_k2] = p_v2;
	mp[p_k3] = p_v3;
	mp[p_k4] = p_v4;
	mp[p_k5] = p_v5;
	mp[p_k6] = p_v6;
	mp[p_k7] = p_v7;
	mp[p_k8] = p_v8;
	mp[p_k9] = p_v9;
	return mp;
}

template< class TK, class TV >
std::map< TK, TV > make_map( const TK& p_k1, const TV& p_v1, const TK& p_k2, const TV& p_v2,
		const TK& p_k3, const TV& p_v3, const TK& p_k4, const TV& p_v4,
		const TK& p_k5, const TV& p_v5, const TK& p_k6, const TV& p_v6,
		const TK& p_k7, const TV& p_v7, const TK& p_k8, const TV& p_v8,
		const TK& p_k9, const TV& p_v9, const TK& p_k10, const TV& p_v10) {
	std::map< TK, TV > mp;
	mp[p_k1] = p_v1;
	mp[p_k2] = p_v2;
	mp[p_k3] = p_v3;
	mp[p_k4] = p_v4;
	mp[p_k5] = p_v5;
	mp[p_k6] = p_v6;
	mp[p_k7] = p_v7;
	mp[p_k8] = p_v8;
	mp[p_k9] = p_v9;
	mp[p_k10] = p_v10;
	return mp;
}


} //namespace ExSTL


} //namespace PeLa


#endif //__PELA_EXSTL_MAKE_MAP_H__
