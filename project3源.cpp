#include<iostream>
using namespace std;
class cft
{
private:
	double length;
	double height;
	double width;
public:
	
	void set()
	{
			cout << "Please enter the length :" << endl;
			cin >> length;
			cout << "Please enter the width :" << endl;
			cin >> width;
			cout << "Please enter the height :" << endl;
			cin >> height;
	}
	int get()
	{
		return length * width * height;
	}
};


int main()
{
	cft cft1;
	cft cft2;
	cft cft3;
	cft1.set();
	cft2.set();
	cft3.set();
	cout << "the volume of the first       " << cft1.get() << endl;
	cout << "the volume of the second        " << cft2.get() << endl;
	cout << "the volume of the third        " << cft3.get() << endl;

	return 0;
}