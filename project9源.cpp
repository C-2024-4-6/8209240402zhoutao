#include<iostream>
using namespace std;

int main()
{
	char re;
	cout << "请选择运算方式" << endl;
	cin >> re;
	double a;
	cout << "请输入值1" << endl;
	cin >> a;
	double b;
	cin >> b;
	if (re == '+')
	{
		cout << a + b << endl;
	}
	else if (re == '/')
	{
		if (b != 0)
		{
			cout << a / b << endl;
		}
		else
		{
			cout << "不可以进行该类运算" << endl;
		}
		}
	else if (re == '*')
	{
		cout << a * b << endl;
	}
	else if (re == '-')
	{
		cout << a - b << endl;
	}
	else if (re == '%')
	{
		cout <<int( a) % int(b )<< endl;
	}
	else
	{
		cout << "运算符非法" << endl;
	}

	system("pause");
	return 0;
}