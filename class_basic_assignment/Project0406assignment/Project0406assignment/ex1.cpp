#include <iostream>
using namespace std;

int main() {

	int value;

	cout << "����(0~100)�� �Է��ϼ��� :";
	cin >> value;
	cout << "���� : " << value << endl;
	

	if (value >= 90)
	{ 
		cout << "���� : A \n";
	}
	else if (value >= 80)
	{
		cout << "���� : B \n";
	}
	else if (value >= 70)
	{
		cout << "���� : C \n";
	}
	else if (value >= 60)
	{
		cout << "���� : D \n";
	}
	else
	{
		cout << "���� : F \n";
	}
	
}
