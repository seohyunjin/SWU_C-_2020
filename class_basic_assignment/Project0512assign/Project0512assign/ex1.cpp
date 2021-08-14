#include <iostream>

using namespace std;

void findMinMax(int inumbers[], int size)
{
	int i, max_v, min_v;

	max_v = inumbers[0];
	min_v = inumbers[0];
	// 필요한 변수 선언과 초기화
	for (i = 0; i < 8; i++)
	{
		if (inumbers[i] > max_v)
			max_v = inumbers[i];

		if (inumbers[i] < min_v)
			min_v = inumbers[i];
	}
	// 배열에서 최소값과 최대값 찾기
	cout << "최소값 : "<< min_v << ", 최대값 : " << max_v << endl;
	// 찾은 최소값과 최대값을 표준 출력하기
}

int main()
{
	int inumbers[8] = { 1, 2, 4, 5, 10, 100, 2, -22 };

	findMinMax(inumbers, 8);

	return 0;
}