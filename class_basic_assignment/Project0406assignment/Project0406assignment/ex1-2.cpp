#include <iostream>
using namespace std;

int main()
{
	int value;
	int grade;
	
	cout << "����(0~100)�� �Է��ϼ��� :";
	cin >> value;
	cout << "���� : " << value << endl;

	if (value >= 90)
		grade = 1;

	else if (value >= 80)
		grade = 2;

	else if (value >= 70)
		grade = 3;

	else if (value >= 60)
		grade = 4;

	else 
		grade = 5;

	switch (grade)
	{
	case 1:
		cout << "���� : A";
		break;
	case 2:
		cout << "���� : B";
		break;
	case 3:
		cout << "���� : C";
		break;
	case 4:
		cout << "���� : D";
		break;
	case 5:
		cout << "���� : F";
		break;

	}

}