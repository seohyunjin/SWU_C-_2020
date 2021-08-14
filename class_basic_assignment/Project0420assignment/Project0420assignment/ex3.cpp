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


	for (int u = 1; u <= 4; u++)
	{
		for (int h = 0; h <= u - 1; h++)
		{
			cout << " ";
		}

		for (int p = 4 - (u - 1); p >= 1; p--)
		{
			cout << p;
		}

		for (int n = 2; n <= 4 - (u - 1); n++)
		{
			cout << n;
		}

		cout << endl;

	}

	return 0;
}