#include<iostream>
using namespace std;

int main()
{
	int value1,value2,value3;

	cout << "ù��° ������ �Է��ϼ��� : ";
	cin >> value1;

	cout << "�ι�° ������ �Է��ϼ��� : ";
	cin >> value2;

	cout << "����° ������ �Է��ϼ��� : ";
	cin >> value3;

	if (value1 - value2 >= 0)
	{
		if (value1 - value3 >= 0)
			cout << "���� ū ����" << value1 << "�Դϴ�." << endl;
		else
			cout << "���� ū ����" << value3 << "�Դϴ�." << endl;
	}
	else
	{
		if (value2 - value3 >= 0)
			cout << "���� ū ����" << value2 << "�Դϴ�." << endl;
		else
			cout << "���� ū ����" << value3 << "�Դϴ�." << endl;
	}
}