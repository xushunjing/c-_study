#include <iostream>
#include "test_extern_2.h"

extern void Func2();

int main(void)
{
	int i = 123;
	std::cout << "i = " << i << std::endl;

	extern int F2;
	std::cout << "F2 = " << F2 << std::endl;

	Func2();

	return 0;
}