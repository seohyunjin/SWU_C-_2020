#include<iostream>
using namespace std;

int main() 
{
	int answer = 59;
	int guess;
	int tries = 0;
	do 
	{
		cout<< "������ �����Ͽ� ���ÿ�:";
		cin >> guess;
		tries++;
		if (guess < answer)
		{
			cout<< "������ ������ �����ϴ�.\n";
		}
		if (guess > answer)
		{
			cout << "������ ������ �����ϴ�.\n";
		}

	} while (guess !=answer);

	cout << "�����մϴ�. �õ�Ƚ�� = " << tries << endl;

}