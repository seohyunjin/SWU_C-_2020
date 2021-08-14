#include<iostream>
using namespace std;

int main()
{
	float grade, average;
	float sum = 0.0;
	int count = 0;

	while (1)
	{
		cout << "한국 성적을 입력하시오 :";
		cin >> grade;

		if (grade < 0.0)
			break; 
		count++;
		sum += grade;

	}

	average = sum / count;
	cout << "학생들의 성적의 평균은" << average << "입니다.\n";

}