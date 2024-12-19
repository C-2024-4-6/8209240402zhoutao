#include<iostream>
using namespace std;
class point
{
private:
	int x;
	int y;
public:
	point(int a, int b)
	{
		x = a;
		y = b;
	}
	void setpoint(int i,int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}
};
int main()
{
	int m;
	cout << "please enter i:" << endl;
	cin >> m;
	int n;
	cout << "please enter j:" << endl;
	cin >> n;
	point point1(60, 80);
	point1.setpoint(m, n);
	point1.display();
	return 0;
}