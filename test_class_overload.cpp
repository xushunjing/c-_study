// 测试函数重载

#include <iostream>

using namespace std;

class OV
{
public:
	double c;
	double k;
	double g;

public:
	OV(double l = 0.0, double w = 0.0, double h = 0): c(l), k(w), g(h) {}

	void showV()
	{
		cout << "the v = " << c * k * g << endl;
	}

	// OV operator+ (const OV& ov)
	// {
	// 	cout << "类成员函数：运算符重载，只包含一个类变量" << endl;
	// 	OV tempOv(this->c + ov.c, this->k + ov.k, this->g + ov.g);
	// 	return  tempOv;
	// }
};

OV operator+(OV one, OV two)
{
	cout << "普通函数：运算符是几元，包含几个参数" << endl;
	return OV(one.c + two.c, one.k + two.k, one.g + two.g);
}

int main()
{
	OV ov1(1.0, 2.0, 3.0);
	ov1.showV();

	OV ov2(4.0, 5.0, 6.0);
	ov2.showV();

	OV ov3 = ov1 + ov2;
	ov3.showV();

	return 0;
}