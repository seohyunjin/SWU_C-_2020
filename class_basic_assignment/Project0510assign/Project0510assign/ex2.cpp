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

	cout << "첫 번째 정수를 입력하세요. :";
	cin >> value1;

	cout << "두 번째 정수를 입력하세요.: ";
	cin >> value2;

	gcd = findGCD(value1, value2);

	cout << value1 << "과 " << value2 << "의 최대공약수 = " << gcd;

}

