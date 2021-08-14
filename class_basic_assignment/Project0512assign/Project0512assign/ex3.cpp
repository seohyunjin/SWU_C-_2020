#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void randomNumbers(int inumbers[], int size);
void randomCounts(int inumbers[], int size, int counts[]);   
//ㄴ함수의 원형 정의 

int main()
{
	int i, size = 10;
	int counts[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };    // 숫자 별 개수
	int inumbers2[10];
	srand((unsigned int)time(0));

	randomNumbers(inumbers2, size);			
	randomCounts(inumbers2, size, counts);	

	// 배열 출력
	cout << "배열: ";
	for (i = 0; i < size; i++)
		cout << setw(5) << inumbers2[i];
	cout << endl << endl;

	// 숫자 별 개수 출력
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

// 난수로 배열 초기화 
void randomNumbers(int inumbers[], int size)
{

	for (int i = 0; i < size; i++)
	{
		inumbers[i] = rand() % 10;
	}
	
}

// 숫자 별 개수 계산
void randomCounts(int inumbers[], int size, int counts[])
{
	
	for (int i = 0; i < size; i++)
	{
		counts[inumbers[i]]++;
	}
	
}