#include <iostream>
#include <iomanip>

using namespace std;

void findMinMax(int inumbers[][3], int size, int min_v, int max_v)
{
	int i, j;

	// �ʿ��� ���� ����� �ʱ�ȭ
	for (i = 0; i < 4; i++)
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


	cout << "�ּҰ� : " << min_v << ", �ִ밪 : " << max_v << endl;
	// ã�� �ּҰ��� �ִ밪�� ǥ�� ����ϱ�

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout<<  setw(5) << inumbers[i][j] <<"\t";
		}
		cout << endl;
	}



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
	

	int rowSize = 4;

	int max_v = inumbers[0][0];
	int min_v = inumbers[0][0];

	findMinMax(inumbers, rowSize, min_v, max_v);


	return 0;
}