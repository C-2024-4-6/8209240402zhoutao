#include<iostream>
using namespace std;

int main()
{
	char re ;
	cout << "ÇëÊäÈë×Ö·û" << endl;
	cin >> re;
	if (96 < int(re)&&int(re) < 123)
	{
		cout << char(int(re) -32) << endl;
	}
	else
	{
		cout <<int( re)+ 1 << endl;
	}
	system("pause");
	return 0;
}