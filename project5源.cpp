#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
	double  hua = 0;
	cout << "�����뻪���¶�" << endl;
	cin >> hua;
	cout << fixed << setprecision(2) << (hua - 32) / 1.8 << endl;//�˴�������ô���þ��Ȳ�������

	system("pause");
	return 0;
}