#include <iostream>
using namespace std;

typedef int * pint;
#define PINT int *

int main(void)
{
	int i = 1;
	int j = 2;

	//const int *p = &i;
	//int const *p = &i;
	const pint p = &i;
	const PINT q = &i;
	q = &j;

	cout << "i = " << i << endl;
	cout << "*p = " << *p << endl;
	cout << "j = " << i << endl;
	cout << "*q = " << *q << endl;

	return 0;
}