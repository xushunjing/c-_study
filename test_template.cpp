#include <iostream>

template <typename X>
X max(X a, X b)
{
	return a > b?a:b;
}

template <class C>
class Point 
{
private:
	C x;
	C y;
public:
	Point(C a = 0, C b = 0): x(a), y(b){}
	C show();
	void show()
	{
		std::cout << "x: " << this->x << "\t y:" << this->y << std::endl;
	}	
};


int main()
{
	std::cout << max(1, 3) << std::endl;
	std::cout << max(1.1, 1.3) << std::endl;

	Point<int> p1(100, 200);
	p1.show();

	return 0;
}