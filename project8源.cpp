#include<iostream>
using namespace std;

int main()
{
	double a = 0;
	cout << "������߳�" << endl;
	cin >> a;
	double b= 0;
	cout << "������߳�" << endl;
	cin >> b;
	double c = 0;
	cout << "������߳�" << endl;
	cin >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "���Թ���������" << endl;
		cout<<"   �ܳ�Ϊ" << a + b + c << endl;
		if (a == b || a == c || b == c)
		{
			cout << "���ǵ���������" << endl;
	}
		else
		{
			cout << "�ⲻ�ǵ���������" << endl;
		}
	}
	else
	{
		cout << "�ⲻ����������" << endl;
	}

	system("pause");
	return 0;
}