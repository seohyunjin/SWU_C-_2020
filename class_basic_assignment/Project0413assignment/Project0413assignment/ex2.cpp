#include <iostream>
#include <ctime> //time(0) �� ctime�� �ֱ⶧����!
using namespace std;

int main()
{
	srand((unsigned int)time(0));  // ���α׷��� �����Ҷ����� ������ �ٲ���Ѵ�
	int	answer = 1 + rand() % 100;  //1���� ���� 100������ ������ �� ����

	int guess; int remain_tries=5;
	
	
	cout << "1 ���� 100 ������ ���� ���� ������.\n";

	do {
		
		cout << "���ڸ� ���纸����." << "(��ȸ " << remain_tries << "��)" << " : ";
		cin >> guess;
		remain_tries = remain_tries - 1;
		
		if (remain_tries!=0) 
			if (guess > answer) cout << "Wrong~ \n �� ���� ���ڸ� �Է��ϼ���.\n\n";
			else if (guess < answer) cout << "Wrong~ \n �� ū ���ڸ� �Է��ϼ���.\n\n";
			else cout << "Bingo~\n ������ : " << answer;
			
		else {
			cout << "End Game \n ������ :" << answer;
			guess = answer;
		}
	} while (guess != answer);



	return 0;
}