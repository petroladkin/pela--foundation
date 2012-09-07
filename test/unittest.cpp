/**
 *		\file		unittest.h
 *		\author		Petro Ladkin  aka  peter__pan  (http://pela.com.ua)
 *		\date		05.09.2012-06.09.2012
 *		\version	0.1
 *
 *		\brief		implementation main() function for unit-tests
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


#if defined(PELA_UNITTESTING)


#include "gtest/gtest.h"


GTEST_API_ int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
} 


#endif