/**
 *		\file		Event.h
 *		\author		Petro Ladkin aka peter__pan (PeLa)
 *		\date		07.06.2007-06.09.2012
 *		\version	0.3
 *
 *		\brief		Implemenataion class Event
 *
 *		\code
 *			Example:
 *				void fun(int p_i, bool p_b, const std::string& p_s) {
 *					cout << "fun: i = " << p_i << ", b = " << p_b << ", s = " << p_s;
 *				}
 *
 *				class test {
 *				public:
 *					static void onSMethod(int p_i, bool p_b, const std::string& p_s) {
 *						cout << "smtd: i = " << p_i << ", b = " << p_b << ", s = " << p_s;
 *					}
 *
 *					void onMethod(int p_i, bool p_b, const std::string& p_s) {
 *						cout << "mtd: i = " << p_i << ", b = " << p_b << ", s = " << p_s;
 *					}
 *
 *					void operator()(int p_i, bool p_b, const std::string& p_s) {
 *						cout << "opr: i = " << p_i << ", b = " << p_b << ", s = " << p_s;
 *					}
 *				};
 *
 *				void main(int argc, char **argv) {
 *					Event<int, bool, const std::string&> theEvent;
 *					
 *					test tst;
 *					
 *					theEvent.connect(&fun);
 *					theEvent.connect(&test::onSMethod);
 *					theEvent.connect(&tst);
 *					theEvent.connect(&tst, &test::onMethod);
 *					
 *					theEvent(10, true, "hello world");
 *				}
 *		\endcode
 */


#ifndef __PELA_EVENT_EVENT_H__
#define __PELA_EVENT_EVENT_H__


#if defined(WIN32) || defined(_WIN32_WCE)
#	include <windows.h>
#	include <winbase.h>
#	ifndef _WIN32_WCE
#		include <errno.h>
#	endif
#else
#	include <errno.h>
#	include <pthread.h>
#endif

#include <list>


namespace PeLa {


namespace Event {


namespace Private {


//=======================================================================================
//
//	NT
//
//=======================================================================================

class NT {
};


//=======================================================================================
//
//	IDelegateBase
//
//=======================================================================================

class IDelegateBase {
public:
	virtual ~IDelegateBase() {}
	virtual IDelegateBase* DoClone() const = 0;
	virtual bool operator==(const IDelegateBase& p_d) = 0;

	template <class TClass>
	static TClass* Clone(TClass* p_pObj) {
		if (!p_pObj) return 0;
		TClass* pClone = static_cast<TClass*>(p_pObj->DoClone());
		if(typeid(*pClone) != typeid(*p_pObj)) return 0;
		return pClone;
	}
};


//=======================================================================================
//
//	IDelegate
//
//=======================================================================================

template< class T1 = NT, class T2 = NT, class T3 = NT, class T4 = NT, class T5 = NT,
		class T6 = NT, class T7 = NT, class T8 = NT, class T9 = NT, class T10 = NT >

class IDelegate : public IDelegateBase {
public:
	virtual void operator()(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10) = 0;
};

template< class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8,
		class T9 >

class IDelegate< T1, T2, T3, T4, T5, T6, T7, T8, T9 > : public IDelegateBase {
public:
	virtual void operator()(T1, T2, T3, T4, T5, T6, T7, T8, T9) = 0;
};

template< class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8 >
class IDelegate< T1, T2, T3, T4, T5, T6, T7, T8 > : public IDelegateBase {
public:
	virtual void operator()(T1, T2, T3, T4, T5, T6, T7, T8) = 0;
};

template< class T1, class T2, class T3, class T4, class T5, class T6, class T7 >
class IDelegate< T1, T2, T3, T4, T5, T6, T7 > : public IDelegateBase {
public:
	virtual void operator()(T1, T2, T3, T4, T5, T6, T7) = 0;
};

template< class T1, class T2, class T3, class T4, class T5, class T6 >
class IDelegate< T1, T2, T3, T4, T5, T6 > : public IDelegateBase {
public:
	virtual void operator()(T1, T2, T3, T4, T5, T6) = 0;
};

template< class T1, class T2, class T3, class T4, class T5 >
class IDelegate< T1, T2, T3, T4, T5 > : public IDelegateBase {
public:
	virtual void operator()(T1, T2, T3, T4, T5) = 0;
};

template< class T1, class T2, class T3, class T4 >
class IDelegate< T1, T2, T3, T4 > : public IDelegateBase {
public:
	virtual void operator()(T1, T2, T3, T4) = 0;
};

template< class T1, class T2, class T3 >
class IDelegate< T1, T2, T3 > : public IDelegateBase {
public:
	virtual void operator()(T1, T2, T3) = 0;
};

template< class T1, class T2 >
class IDelegate< T1, T2 > : public IDelegateBase {
public:
	virtual void operator()(T1, T2) = 0;
};

template< class T1 >
class IDelegate< T1 > : public IDelegateBase
{
	public:
		virtual void operator()(T1) = 0;
};

template< >
class IDelegate< > : public IDelegateBase
{
	public:
		virtual void operator()() = 0;
};


//=======================================================================================
//
//	MDelegate
//
//=======================================================================================

template< class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8,
		class T9, class T10, class TO, typename TMF >

class MDelegate : public IDelegate<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> {
public:
	typedef MDelegate< T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, TO, TMF >	TMDelegate;

	MDelegate(TO* p_o, TMF p_m) : m_o(p_o), m_m(p_m) {}

    virtual IDelegateBase* DoClone() const {
		return new TMDelegate(m_o, m_m);
	}

	bool operator==(const IDelegateBase& p_d) {
		TMDelegate* md = dynamic_cast<TMDelegate*>((IDelegateBase*) &p_d);
		return (md != 0) && (md->m_o == m_o) && (md->m_m == m_m);
	}

	void operator()() {
		(m_o->*m_m)();
	}

	void operator()(T1 p_p1) {
		(m_o->*m_m)(p_p1);
	}

	void operator()(T1 p_p1, T2 p_p2) {
		(m_o->*m_m)(p_p1, p_p2);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3) {
		(m_o->*m_m)(p_p1, p_p2, p_p3);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4) {
		(m_o->*m_m)(p_p1, p_p2, p_p3, p_p4);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5) {
		(m_o->*m_m)(p_p1, p_p2, p_p3, p_p4, p_p5);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6) {
		(m_o->*m_m)(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6, T7 p_p7) {
		(m_o->*m_m)(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6, p_p7);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6, T7 p_p7,
			T8 p_p8) {
		(m_o->*m_m)(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6, p_p7, p_p8);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6, T7 p_p7,
			T8 p_p8, T9 p_p9) {
		(m_o->*m_m)(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6, p_p7, p_p8, p_p9);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6, T7 p_p7,
			T8 p_p8, T9 p_p9, T10 p_p10) {
		(m_o->*m_m)(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6, p_p7, p_p8, p_p9, p_p10);
	}

protected:
	TO*		m_o;
	TMF		m_m;
};


//=======================================================================================
//
//	FDelegate
//
//=======================================================================================

template< class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8,
		class T9, class T10, typename TF >

class FDelegate 
	: public IDelegate<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>
{
public:
	typedef FDelegate< T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, TF >	TFDelegate;

	FDelegate(TF* p_f) : m_f(p_f) {}

    virtual IDelegateBase* DoClone() const {
		return new TFDelegate(m_f);
	}

	bool operator==(const IDelegateBase& p_d) {
		TFDelegate* d = dynamic_cast<TFDelegate*>((IDelegateBase*) &p_d);
		return (d != NULL) && (d->m_f == m_f);
	}

	void operator()() {
		(*m_f)();
	}

	void operator()(T1 p_p1) {
		(*m_f)(p_p1);
	}

	void operator()(T1 p_p1, T2 p_p2) {
		(*m_f)(p_p1, p_p2);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3) {
		(*m_f)(p_p1, p_p2, p_p3);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4) {
		(*m_f)(p_p1, p_p2, p_p3, p_p4);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5) {
		(*m_f)(p_p1, p_p2, p_p3, p_p4, p_p5);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6) {
		(*m_f)(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6, T7 p_p7) {
		(*m_f)(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6, p_p7);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6, T7 p_p7,
			T8 p_p8) {
		(*m_f)(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6, p_p7, p_p8);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6,
			T7 p_p7, T8 p_p8, T9 p_p9) {
		(*m_f)(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6, p_p7, p_p8, p_p9);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6, T7 p_p7,
			T8 p_p8, T9 p_p9, T10 p_p10) {
		(*m_f)(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6, p_p7, p_p8, p_p9, p_p10);
	}

protected:
	TF*		m_f;
};


//=======================================================================================
//
//	Delegate
//
//=======================================================================================

template< class T1 = NT, class T2 = NT, class T3 = NT, class T4 = NT, class T5 = NT,
		class T6 = NT, class T7 = NT, class T8 = NT, class T9 = NT, class T10 = NT >

class Delegate {
public:
	typedef IDelegate< T1, T2, T3, T4, T5, T6, T7, T8, T9, T10 >	TIDelegate;
	typedef Delegate< T1, T2, T3, T4, T5, T6, T7, T8, T9, T10 >		TDelegate;

	Delegate() {}
	Delegate(const Delegate& p_d) : m_p(IDelegateBase::Clone(p_d.m_p.get())) {}

	Delegate(std::auto_ptr<TIDelegate> p_p) :m_p(p_p) {}

	template< class Functor >
	Delegate(Functor* p_f) {
		m_p.reset(new FDelegate<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, Functor>(p_f));
	}

	template< class TO, typename TMF >
	Delegate(TO* p_o, TMF p_m)
	{
		m_p.reset(new MDelegate<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, TO, TMF> (p_o, p_m));
	}

	Delegate& operator=(const Delegate& p_d) {
		return *this;
	}

	bool operator==(const Delegate& p_d) {
		return (*(p_d.m_p)) == (*m_p);
	}

	void operator()() {
		(*m_p)();
	}

	void operator()(T1 p_p1) {
		(*m_p)(p_p1);
	}

	void operator()(T1 p_p1, T2 p_p2) {
		(*m_p)(p_p1, p_p2);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3) {
		(*m_p)(p_p1, p_p2, p_p3);
	}

	void operator()(T1 p_p1, T2 p_p2,	T3 p_p3, T4 p_p4) {
		(*m_p)(p_p1, p_p2, p_p3, p_p4);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5) {
		(*m_p)(p_p1, p_p2, p_p3, p_p4, p_p5);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6) {
		(*m_p)(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6, T7 p_p7) {
		(*m_p)(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6, p_p7);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6, T7 p_p7,
			T8 p_p8) {
		(*m_p)(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6, p_p7, p_p8);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6, T7 p_p7,
		T8 p_p8, T9 p_p9) {
		(*m_p)(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6, p_p7, p_p8, p_p9);
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6, T7 p_p7,
		T8 p_p8, T9 p_p9, T10 p_p10) {
		(*m_p)(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6, p_p7, p_p8, p_p9, p_p10);
	}

protected:
	std::auto_ptr<TIDelegate>	m_p;
};


//=======================================================================================
//
//	EventMutex
//
//=======================================================================================

class EventMutex {
public:
	EventMutex() {
#if defined(WIN32) || defined(_WIN32_WCE)
		InitializeCriticalSection(&m_c);
#else
		pthread_mutexattr_t attr;
		pthread_mutexattr_init(&attr);
		pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE);
		pthread_mutex_init(&m_m, &attr);
		pthread_mutexattr_destroy(&attr);
#endif
	}

	virtual ~EventMutex() {
#if defined(WIN32) || defined(_WIN32_WCE)
		DeleteCriticalSection(&m_c);
#else
		pthread_mutex_unlock(&m_m);
		pthread_mutex_destroy(&m_m);
#endif
	}

	int Lock() const {
#if defined(WIN32) || defined(_WIN32_WCE)
		EnterCriticalSection(&m_c);
		return 0;
#else
		return pthread_mutex_lock(&m_m);
#endif
	}

	int Unlock() const {
#if defined(WIN32) || defined(_WIN32_WCE)
		LeaveCriticalSection(&m_c);
		return 0;
#else
		pthread_mutex_unlock(&m_m);
        return 0;
#endif
	}

protected:
	void operator=(EventMutex&) {}
	EventMutex(const EventMutex&) {}

#if defined(WIN32) || defined(_WIN32_WCE)
	mutable CRITICAL_SECTION m_c;
#else
	mutable pthread_mutex_t m_m;
#endif
};


//=======================================================================================
//
//	EventLock
//
//=======================================================================================

class EventLock {
public:
	EventLock(EventMutex &p_m) : m_m(p_m) {
		m_m.Lock();
	}

	~EventLock() {
		m_m.Unlock();
	}

protected:
	EventMutex&	m_m;
};


} //namespace Private


using namespace Private;

//=======================================================================================
//
//	Event
//
//=======================================================================================

template< class T1 = NT, class T2 = NT, class T3 = NT, class T4 = NT, class T5 = NT,
		class T6 = NT, class T7 = NT, class T8 = NT, class T9 = NT, class T10 = NT >

class Event {
public:
	typedef Delegate< T1, T2, T3, T4, T5, T6, T7, T8, T9, T10 >	TDelegate;
	typedef Event< T1, T2, T3, T4, T5, T6, T7, T8, T9, T10 >	TEvent;
	typedef std::list< TDelegate* >								TDelegateList;

	Event() : m_enabled(true) {
	}

	template< class Functor >
	Event(Functor* p_ftor) : m_enabled(true) {
		add(new TDelegate(p_ftor));
	}

	template< class TO, typename TMF >
	Event(TO* p_o, TMF p_m) : m_enabled(true) {
		add(new TDelegate(p_o, p_m));
	}

	~Event() {
		removeAll();
	}

	template< class Functor >
	void connect(Functor* p_f) {
		EventLock lock(m_mutex);
		add(new TDelegate(p_f));
	}

	template< class TO, typename TMF >
	void connect(TO* p_o, TMF p_m) {
		EventLock lock(m_mutex);
		add(new TDelegate(p_o, p_m));
	}

	template< class Functor >
	void disconnect(Functor* p_f) {
		EventLock lock(m_mutex);
		remove(new TDelegate(p_f));
	}

	template< class TO, typename TMF >
	void disconnect(TO* p_o, TMF p_m) {
		EventLock lock(m_mutex);
		remove(new TDelegate(p_o, p_m));
	}

	void disconnectAll() {
		EventLock lock(m_mutex);
		removeAll();
	}

	bool isNull() {
		return (m_listDelegate.empty());
	}

	bool isEnabled() {
		return m_enabled;
	}

	void enable() {
		m_enabled = true;
	}

	void disable() {
		m_enabled = false;
	}

	void operator()() {
		if (!m_enabled) return;
		EventLock lock(m_mutex);
		typename TDelegateList::const_iterator it;
		for(it = m_listDelegate.begin(); it != m_listDelegate.end(); ++it) {
			(*(*it))();
		}
	}

	void operator()(T1 p_p1) {
		if (!m_enabled) return;
		EventLock lock(m_mutex);
		typename TDelegateList::const_iterator it;
		for(it = m_listDelegate.begin(); it != m_listDelegate.end(); ++it) {
			(*(*it))(p_p1);
		}
	}

	void operator()(T1 p_p1, T2 p_p2) {
		if (!m_enabled) return;
		EventLock lock(m_mutex);
		typename TDelegateList::const_iterator it;
		for(it = m_listDelegate.begin(); it != m_listDelegate.end(); ++it) {
			(*(*it))(p_p1, p_p2);
		}
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3) {
		if (!m_enabled) return;
		EventLock lock(m_mutex);
		typename TDelegateList::const_iterator it;
		for(it = m_listDelegate.begin(); it != m_listDelegate.end(); ++it) {
			(*(*it))(p_p1, p_p2, p_p3);
		}
	}

	void operator()(T1 p_p1, T2 p_p2,	T3 p_p3, T4 p_p4) {
		if (!m_enabled) return;
		EventLock lock(m_mutex);
		typename TDelegateList::const_iterator it;
		for(it = m_listDelegate.begin(); it != m_listDelegate.end(); ++it) {
			(*(*it))(p_p1, p_p2, p_p3, p_p4);
		}
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5) {
		if (!m_enabled) return;
		EventLock lock(m_mutex);
		typename TDelegateList::const_iterator it;
		for(it = m_listDelegate.begin(); it != m_listDelegate.end(); ++it) {
			(*(*it))(p_p1, p_p2, p_p3, p_p4, p_p5);
		}
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6) {
		if (!m_enabled) return;
		EventLock lock(m_mutex);
		typename TDelegateList::const_iterator it;
		for(it = m_listDelegate.begin(); it != m_listDelegate.end(); ++it) {
			(*(*it))(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6);
		}
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6, T7 p_p7) {
		if (!m_enabled) return;
		EventLock lock(m_mutex);
		typename TDelegateList::const_iterator it;
		for(it = m_listDelegate.begin(); it != m_listDelegate.end(); ++it) {
			(*(*it))(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6, p_p7);
		}
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6, T7 p_p7,
			T8 p_p8) {
		if (!m_enabled) return;
		EventLock lock(m_mutex);
		typename TDelegateList::const_iterator it;
		for(it = m_listDelegate.begin(); it != m_listDelegate.end(); ++it) {
			(*(*it))(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6, p_p7, p_p8);
		}
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6, T7 p_p7,
			T8 p_p8, T9 p_p9) {
		if (!m_enabled) return;
		EventLock lock(m_mutex);
		typename TDelegateList::const_iterator it;
		for(it = m_listDelegate.begin(); it != m_listDelegate.end(); ++it) {
			(*(*it))(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6, p_p7, p_p8, p_p9);
		}
	}

	void operator()(T1 p_p1, T2 p_p2, T3 p_p3, T4 p_p4, T5 p_p5, T6 p_p6, T7 p_p7,
			T8 p_p8, T9 p_p9, T10 p_p10) {
		if (!m_enabled) return;
		EventLock lock(m_mutex);
		typename TDelegateList::const_iterator it;
		for(it = m_listDelegate.begin(); it != m_listDelegate.end(); ++it) {
			(*(*it))(p_p1, p_p2, p_p3, p_p4, p_p5, p_p6, p_p7, p_p8, p_p9, p_p10);
		}
	}

protected:
	Event(const TEvent&);
	TEvent& operator=(const TEvent&);

	void add(TDelegate* p_d) {
		if(p_d != NULL) {
			m_listDelegate.push_back(p_d);
		}
	}

	void remove(TDelegate* p_d) {
		typename TDelegateList::iterator it;
		for(it = m_listDelegate.begin(); it != m_listDelegate.end(); ++it) {
			if((*(*it)) == (*p_d)) {
				delete (*it);
				m_listDelegate.erase(it);
				break;
			}
		}
		delete p_d;
	}

	void removeAll() {
		typename TDelegateList::iterator it;
		for(it = m_listDelegate.begin(); it != m_listDelegate.end(); ++it) {
			delete (*it);
		}
		m_listDelegate.clear();
	}


	TDelegateList	m_listDelegate;
	bool			m_enabled;
	EventMutex		m_mutex;
};


} //namespace Event


} //namespace PeLa


#endif // __PELA_EVENT_EVENT_H__
