#include "Singleton.h"

Singleton* Singleton::m_instance = nullptr;

Singleton::Singleton()
{
}


Singleton::~Singleton()
{
	if (m_instance != nullptr)
	{
		delete m_instance;
		m_instance = nullptr;
	}
}

Singleton*
Singleton::instance()
{
	if (m_instance == nullptr)
		m_instance = new Singleton();
	else
		return m_instance;
}
