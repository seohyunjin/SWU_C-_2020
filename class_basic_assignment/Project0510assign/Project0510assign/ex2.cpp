#include <iostream>
using namespace std;

int findGCD(int , int);

int findGCD(int value1, int value2)
{

	if (value2 == 0)
	{
		return value1;
	}
	else
	{
		return findGCD(value2, value1 % value2);
	}
}


int main() 
{
	int value1=0 , value2=0 ;
	int gcd;

	cout << "ù ��° ������ �Է��ϼ���. :";
	cin >> value1;

	cout << "�� ��° ������ �Է��ϼ���.: ";
	cin >> value2;

	gcd = findGCD(value1, value2);

	cout << value1 << "�� " << value2 << "�� �ִ����� = " << gcd;

}

