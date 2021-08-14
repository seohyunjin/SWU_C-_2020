#include <iostream>
using namespace std;

int main()
{
	int value;
	int grade;
	
	cout << "점수(0~100)를 입력하세요 :";
	cin >> value;
	cout << "점수 : " << value << endl;

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
		cout << "학점 : A";
		break;
	case 2:
		cout << "학점 : B";
		break;
	case 3:
		cout << "학점 : C";
		break;
	case 4:
		cout << "학점 : D";
		break;
	case 5:
		cout << "학점 : F";
		break;

	}

}