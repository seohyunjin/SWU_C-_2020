#include<iostream>
using namespace std;

int main()
{

	for (int i = 1; i <= 5; i++)
	{
		for (int k = 0; k < 5 - i; k++)
		{
			cout << " ";
		}

		for (int j = i; j >= 1; j--)
		{
			cout << j;
		}

		for (int m = 2; m <= i; m++)
		{
			cout << m;
		}


		cout << endl;

	}

	return 0;
}