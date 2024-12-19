#include<iostream>
using namespace std;
class Time           
{
private:     
	int hour;
	int minute;
	int sec;
public:
	void settime(int HOUR, int MINUTE,int SECOND)
	{
		hour = HOUR;
		minute = MINUTE;
		sec = SECOND;
	}
	void setout()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;    
	int a, b, c;
	cout << "Please enter the hour:"<<endl;
	cin >> a;
	cout << "Please enter the minute:"<<endl;
	cin >> b;
	cout << "Please enter the second" << endl;;
	cin >> c;
	t1.settime(a, b, c);
	t1.setout();

	return 0;
}
