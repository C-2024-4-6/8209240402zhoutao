#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "������ֵ1" << endl;
    cin >> a;
    int b;
    cout << "������ֵ2" << endl;
    cin >> b;
    int m=a;
    int n=b;
    while (n != 0)
    {
        int temp = n;
        n = m % n;
        m = temp;
    }
    cout << "���������" << m << endl;
    cout << "��С������" << a * b / m << endl;

	system("pause");
	return 0;
}