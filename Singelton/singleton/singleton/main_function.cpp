#include "Singleton.h"



int main(int argc, char* argv[])
{
	Singleton* sp1 = nullptr;

	sp1 = Singleton::instance();
	Singleton* sp2 = Singleton::instance();
	Singleton* sp3 = Singleton::instance();
	Singleton* sp4 = Singleton::instance();
	Singleton* sp5 = Singleton::instance();
	Singleton* sp6 = Singleton::instance();

	return 0;
}