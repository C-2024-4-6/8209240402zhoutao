#include<iostream>
using namespace std;

int main()
{
	int r = 0;
	cout << "ÇëÊäÈëÔ²×¶µ×µÄ°ë¾¶"<<endl;
	cin >> r;
	int h = 0;
	cout << "ÇëÊäÈëÔ²×¶µÄ×¶¸ß" << endl;
	cin >> h;
	const double pi = 3.14;
	double v = 0;
	v = (pi * r * r * h) / 3;
	cout << "Ô²×¶µÄÌå»ýÎª" << v << endl;

	




	system("pause");
	return 0;
}