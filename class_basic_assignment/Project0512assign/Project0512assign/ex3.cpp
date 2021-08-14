#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void randomNumbers(int inumbers[], int size);
void randomCounts(int inumbers[], int size, int counts[]);   
//���Լ��� ���� ���� 

int main()
{
	int i, size = 10;
	int counts[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };    // ���� �� ����
	int inumbers2[10];
	srand((unsigned int)time(0));

	randomNumbers(inumbers2, size);			
	randomCounts(inumbers2, size, counts);	

	// �迭 ���
	cout << "�迭: ";
	for (i = 0; i < size; i++)
		cout << setw(5) << inumbers2[i];
	cout << endl << endl;

	// ���� �� ���� ���
	cout << "����: ";
	for (i = 0; i < size; i++)
		cout << setw(5) << i;
	cout << endl;

	cout << "����: ";
	for (i = 0; i < size; i++)
		cout << setw(5) << counts[i];
	cout << endl << endl;

	return 0;
}

// ������ �迭 �ʱ�ȭ 
void randomNumbers(int inumbers[], int size)
{

	for (int i = 0; i < size; i++)
	{
		inumbers[i] = rand() % 10;
	}
	
}

// ���� �� ���� ���
void randomCounts(int inumbers[], int size, int counts[])
{
	
	for (int i = 0; i < size; i++)
	{
		counts[inumbers[i]]++;
	}
	
}