#pragma once
class Singleton
{
public:
	~Singleton();
	static Singleton* instance();

private:
	Singleton();
	static Singleton* m_instance;
};

