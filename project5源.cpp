#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
	double  hua = 0;
	cout << "请输入华氏温度" << endl;
	cin >> hua;
	cout << fixed << setprecision(2) << (hua - 32) / 1.8 << endl;//此处忘记怎么设置精度查资料了

	system("pause");
	return 0;
}