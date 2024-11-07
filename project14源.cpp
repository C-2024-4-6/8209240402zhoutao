#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a = 0.8;
	int b = 2;
	double sum = 1;
	int num;
	for (int i = 1;; i++)
	{
		if (sum *2<= 100)
		{
			sum *= 2;
		}
		else
		{
			num = i - 1;
			break;
		}
		
	}
	int sumnum = 0;
	for (int k = 1; k < num + 1; k++)
	{
		sumnum += pow(2,k);
	}
	cout << "每天花了  " << a * sumnum / num << "元" << endl;
	system("pause");
	return 0;
}