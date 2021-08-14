#include <iostream>
#include <iomanip>

using namespace std;

const int rowSize = 4;

void findMinMax(int inumbers[][3], int rowSize);


void findMinMax(int inumbers[][3], int rowSize)
{
	int i, j;
	int max_v = inumbers[0][0];
	int min_v = inumbers[0][0];

	
	for (i = 0; i < rowSize; i++)
	{
		for (j = 0; j < 3; j++)
		{

			if (inumbers[i][j] > max_v)
				max_v = inumbers[i][j];

			if (inumbers[i][j] < min_v)
				min_v = inumbers[i][j];
		}
		cout << endl;
	}


	cout << "최소값 : " << min_v << ", 최대값 : " << max_v << endl;


}


int main()
{
	int inumbers[4][3] =
	{
		{1, 2, 4},
		{5, 10, 100},
		{2, -22 , 22},
		{-123, 33, 44}
	};

	findMinMax(inumbers, rowSize);


	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << setw(5) << inumbers[i][j] << "\t";
		}
		cout << endl;
	}

}