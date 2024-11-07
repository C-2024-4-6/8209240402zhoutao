#include<iostream>
using namespace std;

int main()
{
	double x = 0;
	cout << "ÇëÊäÈëxµÄÖµ" << endl;
	cin >> x;
	double y = 0;
	if (0 < x &&x< 1)
	{
		y = 3 - 2 * x;
		cout << "y=" << y << endl;
	}
	else if (x >= 1 && x < 5)
	{
		y = 2 / (4 * x) + 1;
		cout << y << endl;
	}
	else if (x >= 5 && x < 10)
	{
		y = x * x;
		cout << y << endl;
	}


	system("pause");
	return 0;
}