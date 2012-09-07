/**
 *		\file		Exception.h
 *		\author		Petro Ladkin  aka  peter__pan  (http://pela.com.ua)
 *		\date		22.06.2009-06.09.2012
 *		\version	0.3
 *
 *		\brief		implemenataion Exception class
 *
 *		\todo
 *			- fix bug on PELA_SRC_POS for OSX and Linux
 *
 *		\code
 *			Example:
 *				PELA_EXCEPTION(BaseTestException);
 *				
 *				PELA_EXCEPTION_DECL(Test1Exception, BaseTestException);
 *				PELA_EXCEPTION_DECL(Test2Exception, BaseTestException);
 *				PELA_EXCEPTION_DECL(Test3Exception, BaseTestException);
 *				
 *				void main(int argc, char **argv) {
 *					try {
 *						PELA_THROW(Test1Exception);
 *					} catch (BaseTestException exc) {
 *						count << exc.what() << std::endl;
 *						count << exc.name() << std::endl;
 *						count << exc.location() << std::endl;
 *						wcount << exc.message() << std::endl;
 *					}
 *					try {
 *						PELA_THROW_MESSAGE(Test2Exception, "Error message");
 *					} catch (BaseTestException exc) {
 *						count << exc.what() << std::endl;
 *						count << exc.name() << std::endl;
 *						count << exc.location() << std::endl;
 *						wcount << exc.message() << std::endl;
 *					}
 *					try {
 *						PELA_THROW_MESSAGE_IF(Test3Exception, true, "Error message");
 *					} catch (BaseTestException exc) {
 *						count << exc.what() << std::endl;
 *						count << exc.name() << std::endl;
 *						count << exc.location() << std::endl;
 *						wcount << exc.message() << std::endl;
 *					}
 *				}
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


#ifndef __PELA_EVENT_EXCEPTION_H__
#define __PELA_EVENT_EXCEPTION_H__


#include <exception>
#include <string>


#define PELA_SRC_POS ""
//#define PELA_SRC_POS	PeLa::Exception::SrcPositonString("", "", "").c_str()
//#define PELA_SRC_POS	PeLa::Exception::SrcPositonString(__FILE__, #__LINE__, __FUNCTION__).c_str()
//#define PELA_SRC_POS	PELA_STRING_CAT_5(PELA_FILE, " (", PELA_SLINE, "): ", PELA_FUNCTION)


#define PELA_THROW(Exept)									throw Exept(PELA_SRC_POS, L"")
#define PELA_THROW_MESSAGE(Exept, message)					throw Exept(PELA_SRC_POS, message)

#define PELA_THROW_IF(Exept, condition)						do { if (condition) throw Exept(PELA_SRC_POS, L""); } while (false)
#define PELA_THROW_MESSAGE_IF(Exept, condition, message)	do { if (condition) throw Exept(PELA_SRC_POS, message); } while (false)


#define PELA_EXCEPTION_DECL(Name, Base)											\
	class Name : public Base {													\
	public:																		\
		Name(const std::string& p_sLocation, const std::wstring& p_sMessage)	\
			: Base(p_sLocation, p_sMessage) {}									\
		virtual void throwMe() const { throw *this; }							\
		virtual const std::string name() const { return #Name; }				\
	}

#define PELA_EXCEPTION_NODECL(dummy) //
#define PELA_EXCEPTION(Name) PELA_EXCEPTION_DECL(Name, PeLa::Exception::Exception)


namespace PeLa {


namespace Exception {
    
    
class Exception : public std::exception {
public:
	Exception(const std::string& p_sl, const std::wstring& p_sm)
		: m_sl(p_sl)
		, m_sm(p_sm) {
	}

	Exception(const Exception& p_e) {
		m_sl = p_e.m_sl;
		m_sm = p_e.m_sm;
	}

	virtual ~Exception() throw() {}

	virtual const char* what() const throw() {
		return m_sl.c_str();
	}

	virtual const std::string& location() const {
		return m_sl;
	}

	virtual const std::wstring& message() const {
		return m_sm;
	}

	virtual const std::string name() const {
		return "PeLa::Exception::Exception";
	}

	virtual void throwMe() const {
		throw *this;
	}

protected:
	std::string		m_sl;
	std::wstring	m_sm;
};


} //namespace Exception


} //namespace PeLa


#endif //__PELA_EVENT_EXCEPTION_H__
