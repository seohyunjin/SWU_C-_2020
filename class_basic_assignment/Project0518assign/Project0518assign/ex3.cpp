#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

void print(int s[][3], int rowSize)
{
	for (int i = 0; i < rowSize; i++)
	{
		for (int j = 0; j < 3; j++)
		{
		cout << setw(5) << s[i][j] << "\t";
		}
	cout << endl;
	}
}

// 2차원 배열을 출력하는 함수 정의

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

// 2차원 배열을 난수로 초기화하는 함수 정의

void addMatrix(int a[4][3], int b[4][3], int c[4][3], int rowSize)
{
	for (int i = 0; i < rowSize; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}


// 첫 번째, 두 번째 2차원 배열의 각 원소를 더한 결과를 세 번째 2차원 배열에 저장하는 함수 정의

int main()
{
	int x1[4][3], x2[4][3], x3[4][3];
	int rowSize = 4;

	srand((unsigned)time(0));

	randomNumbers(x1, rowSize);		// x1 배열을 임의의 수로 초기화
	randomNumbers(x2, rowSize);		// x2 배열을 임의의 수로 초기화

	addMatrix(x1, x2, x3, rowSize);	// x1 + x2

	// 출력
	print(x1, rowSize); cout << endl << "         +" << endl << endl;
	print(x2, rowSize);	cout << endl << "         =" << endl << endl;
	print(x3, rowSize);

	return 0;
}