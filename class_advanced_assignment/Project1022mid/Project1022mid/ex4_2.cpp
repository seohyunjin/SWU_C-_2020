//����Ʈ �Ű����� DEFAULT PARAMETER

#include <iostream>
using namespace std;


int Func(int a, int b = 1, int c =0)
{
	return a+b+c;
}
int main()
{
	cout << Func(0) << endl; //���: 1
	cout << Func(3, 2) << endl; //���: 5
	cout << Func(3, 3, 3) << endl; //���: 9
	return 0;
}