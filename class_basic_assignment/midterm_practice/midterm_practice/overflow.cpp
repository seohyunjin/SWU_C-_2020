#include <iostream>
#include <climits>
using namespace std;

int main()
{
	short s_money = SHRT_MAX;
	unsigned short u_money = USHRT_MAX;

	s_money = s_money + 1;
	cout << "s_money = " << s_money << endl;

	u_money = u_money + 1;
	cout << "u_money = " << u_money << endl;

}