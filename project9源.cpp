#include<iostream>
using namespace std;

int main()
{
	char re;
	cout << "��ѡ�����㷽ʽ" << endl;
	cin >> re;
	double a;
	cout << "������ֵ1" << endl;
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
			cout << "�����Խ��и�������" << endl;
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
		cout << "������Ƿ�" << endl;
	}

	system("pause");
	return 0;
}