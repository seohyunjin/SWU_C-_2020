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

// 2���� �迭�� ����ϴ� �Լ� ����

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

// 2���� �迭�� ������ �ʱ�ȭ�ϴ� �Լ� ����

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


// ù ��°, �� ��° 2���� �迭�� �� ���Ҹ� ���� ����� �� ��° 2���� �迭�� �����ϴ� �Լ� ����

int main()
{
	int x1[4][3], x2[4][3], x3[4][3];
	int rowSize = 4;

	srand((unsigned)time(0));

	randomNumbers(x1, rowSize);		// x1 �迭�� ������ ���� �ʱ�ȭ
	randomNumbers(x2, rowSize);		// x2 �迭�� ������ ���� �ʱ�ȭ

	addMatrix(x1, x2, x3, rowSize);	// x1 + x2

	// ���
	print(x1, rowSize); cout << endl << "         +" << endl << endl;
	print(x2, rowSize);	cout << endl << "         =" << endl << endl;
	print(x3, rowSize);

	return 0;
}