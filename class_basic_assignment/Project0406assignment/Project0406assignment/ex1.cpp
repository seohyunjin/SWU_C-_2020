#include <iostream>
using namespace std;

int main() {

	int value;

	cout << "점수(0~100)를 입력하세요 :";
	cin >> value;
	cout << "점수 : " << value << endl;
	

	if (value >= 90)
	{ 
		cout << "학점 : A \n";
	}
	else if (value >= 80)
	{
		cout << "학점 : B \n";
	}
	else if (value >= 70)
	{
		cout << "학점 : C \n";
	}
	else if (value >= 60)
	{
		cout << "학점 : D \n";
	}
	else
	{
		cout << "학점 : F \n";
	}
	
}
