#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "请输入值1" << endl;
    cin >> a;
    int b;
    cout << "请输入值2" << endl;
    cin >> b;
    int m=a;
    int n=b;
    while (n != 0)
    {
        int temp = n;
        n = m % n;
        m = temp;
    }
    cout << "最大公因数是" << m << endl;
    cout << "最小公倍数" << a * b / m << endl;

	system("pause");
	return 0;
}