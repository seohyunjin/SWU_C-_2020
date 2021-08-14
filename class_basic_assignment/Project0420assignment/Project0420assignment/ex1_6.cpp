#include<iostream>
using namespace std;

int main()
{

	for (int i = 1; i <=5; i++) 
	{
		for (int k = 0; k < i-1; k++)
		{
			cout << " ";
		}


		for (int j = 5-(i-1); j >= 1; j--)
		{
			cout << j;
		}

		cout << endl;

	}

	return 0;
}