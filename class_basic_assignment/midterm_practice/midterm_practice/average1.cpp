#include<iostream>
using namespace std;

int main()
{
	float grade, average;
	float sum = 0.0;
	int count = 0;

	while (1)
	{
		cout << "�ѱ� ������ �Է��Ͻÿ� :";
		cin >> grade;

		if (grade < 0.0)
			break; 
		count++;
		sum += grade;

	}

	average = sum / count;
	cout << "�л����� ������ �����" << average << "�Դϴ�.\n";

}