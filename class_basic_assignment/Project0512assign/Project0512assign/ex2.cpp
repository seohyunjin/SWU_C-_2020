#include <iostream>
#include <iomanip>

using namespace std;

void reverse(int inumbers[], int size);

int main()
{
	int inumbers4[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	cout << "���� �迭: " << endl;
	for (int i = 0; i < 8; i++)
		cout << setw(5) << inumbers4[i];
	cout << endl;

	reverse(inumbers4, 8);
	//  �迭�� �������� ����� �Լ� ȣ�⹮ 

	cout << "���� �迭: " << endl;
	for (int i = 0; i < 8; i++)
		cout << setw(5) << inumbers4[i];
	cout << endl;

	return 0;
}

void reverse(int inumbers[], int size)
{
	int order;
	for (int i = 0; i < size / 2; i++)
	{
		order = inumbers[i];
		inumbers[i] = inumbers[size - i - 1];
		inumbers[size - i - 1] = order;

	}
	
}