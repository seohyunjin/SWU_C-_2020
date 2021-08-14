#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void randomNumbers(int inumbers[][3], int rowSize);
void randomCounts(int inumbers[][3], int size, int counts[]);


int main()
{
	int size = 10;
	int counts[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };    // 숫자 별 개수
	int inumbers2[5][3];
	int rowSize = 5;
	srand((unsigned int)time(0));

	randomNumbers(inumbers2, rowSize);
	randomCounts(inumbers2, rowSize, counts);

	
	int i, j;
	cout << "배열: \n";
	for (i = 0; i < rowSize; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << setw(5) << inumbers2[i][j] << "\t";
		}
	cout << endl;
	}

	cout << endl;

	
	cout << "난수: ";
	for (i = 0; i < size; i++)
		cout << setw(5) << i;
	cout << endl;

	cout << "개수: ";
	for (i = 0; i < size; i++)
		cout << setw(5) << counts[i];
	cout << endl << endl;

	return 0;
}

 
void randomNumbers(int inumbers[][3], int rowSize)
{

	for (int i = 0; i < rowSize; i++)
	{
		for (int j = 0; j < 3; j++)
		{
		inumbers[i][j] = rand() % 10;
		}
	}
}


void randomCounts(int inumbers[][3], int size, int counts[])
{

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			counts[inumbers[i][j]]++;
		}
	}


}