#include<iostream>
using namespace std;

int main()
{
	double a = 0;
	cout << "请输入边长" << endl;
	cin >> a;
	double b= 0;
	cout << "请输入边长" << endl;
	cin >> b;
	double c = 0;
	cout << "请输入边长" << endl;
	cin >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "可以构成三角形" << endl;
		cout<<"   周长为" << a + b + c << endl;
		if (a == b || a == c || b == c)
		{
			cout << "这是等腰三角形" << endl;
	}
		else
		{
			cout << "这不是等腰三角形" << endl;
		}
	}
	else
	{
		cout << "这不构成三角形" << endl;
	}

	system("pause");
	return 0;
}