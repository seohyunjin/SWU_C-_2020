#include <iostream>

using namespace std;

void findMinMax(int inumbers[], int size)
{
	int i, max_v, min_v;

	max_v = inumbers[0];
	min_v = inumbers[0];
	// �ʿ��� ���� ����� �ʱ�ȭ
	for (i = 0; i < 8; i++)
	{
		if (inumbers[i] > max_v)
			max_v = inumbers[i];

		if (inumbers[i] < min_v)
			min_v = inumbers[i];
	}
	// �迭���� �ּҰ��� �ִ밪 ã��
	cout << "�ּҰ� : "<< min_v << ", �ִ밪 : " << max_v << endl;
	// ã�� �ּҰ��� �ִ밪�� ǥ�� ����ϱ�
}

int main()
{
	int inumbers[8] = { 1, 2, 4, 5, 10, 100, 2, -22 };

	findMinMax(inumbers, 8);

	return 0;
}