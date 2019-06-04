#include <iostream>
using namespace std;

int main(void)
{
	enum color
	{
		red,
		blued
	};

	enum color c1;
	c1 = red;

	cout << c1 <<endl;
	
	return 0;
}