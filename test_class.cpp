#include <iostream>

using namespace std;

class Person
{
private:
	int age;
	int sex;
public:
	Person()
	{
		this->age = 1;
		this->sex = 0;
	}
	Person(int a, int s)
	{
		this->age = a;
		this->sex = s;
	}
	void set(int a, int s)
	{
		age = a;
		sex = s;
	}
	void show()
	{
		cout << "age: " << age << "\tsex: " << sex << endl;  
	}
};

class Point
{
public:
    int x;
    int y;
public:
    Point(){};
    
    Point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }

    void show();
	
};

void Point::show()
{
	cout << "x: " << this->x << "\ty: " << this->y << endl;  
}

int main(int argc, char const *argv[])
{
	Point t1;
	t1.show();
	Point t2(2,5);
	t2.show();

	// Person p1;
	// p1.show();

	// Person p2(3, 5);
	// p2.show();

	return 0;
}