//함수 오버라이딩 FUNTION OVERLOADING

#include <iostream>
using namespace std;


int Func(int a)
{
	return a*2 ;
}
int Func(int a, int b) {

	return a + b;
}
int main()
{
	cout << Func(3) << endl; //결과 : 6
	cout << Func(4, 5) << endl; //결과: 9
	return 0;
}