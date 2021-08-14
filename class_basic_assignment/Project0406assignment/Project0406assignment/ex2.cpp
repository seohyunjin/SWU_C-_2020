#include<iostream>
using namespace std;

int main()
{
	int value1,value2,value3;

	cout << "첫번째 정수를 입력하세요 : ";
	cin >> value1;

	cout << "두번째 정수를 입력하세요 : ";
	cin >> value2;

	cout << "세번째 정수를 입력하세요 : ";
	cin >> value3;

	if (value1 - value2 >= 0)
	{
		if (value1 - value3 >= 0)
			cout << "가장 큰 값은" << value1 << "입니다." << endl;
		else
			cout << "가장 큰 값은" << value3 << "입니다." << endl;
	}
	else
	{
		if (value2 - value3 >= 0)
			cout << "가장 큰 값은" << value2 << "입니다." << endl;
		else
			cout << "가장 큰 값은" << value3 << "입니다." << endl;
	}
}