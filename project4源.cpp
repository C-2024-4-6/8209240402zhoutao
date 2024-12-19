#include<iostream>
using namespace std;
class student
{

public:
	int num;
	int score;
	student(int a, int b)
	{
		num = a;
		score = b;
	}
};
student max(student* p,int length)
{
	for (int i = 0; i < length-1; i++)
	{
		if (p[i].score >p[i + 1].score)
		{
			student abf= p[i];
			p[i] = p[i + 1];
			p[i + 1] = abf;
		}
	}
	return p[4];
}
int main()
{
	student shuzu[5] = { student(1,97),student(2,96),student(3,98),student(4,99),student(5,100)};
	student* ptr = shuzu;
	student adf=max(ptr, 5);
	cout << "the id number of the student is:    " << adf.num;
	cout << "the score of the student is:       " << adf.score;
	return 0;
}