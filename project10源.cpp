#include<iostream>
using namespace std;

int main()
{
	char c;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	cout << "������" << endl;
	while ((c = getchar()) != '\n')
	{
		if (isalpha(c))
		{
			letters++;
		}
		else if (isspace(c))
		{
			spaces++;
		}
		else if (isdigit(c))
		{
			digits++;
		}
		else
		{
			others++;
		}
	}
	cout << "Ӣ����ĸ����" << letters << endl;
	cout << "�ո����" << spaces << endl;
	cout << "���ָ���" << digits<<endl;
	cout << "�����ַ�����" << others << endl;

	system("pause");
	return 0;
}