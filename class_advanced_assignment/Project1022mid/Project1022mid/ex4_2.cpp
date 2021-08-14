//디폴트 매개변수 DEFAULT PARAMETER

#include <iostream>
using namespace std;


int Func(int a, int b = 1, int c =0)
{
	return a+b+c;
}
int main()
{
	cout << Func(0) << endl; //결과: 1
	cout << Func(3, 2) << endl; //결과: 5
	cout << Func(3, 3, 3) << endl; //결과: 9
	return 0;
}