#include <iostream>
#include <ctime> //time(0) 이 ctime에 있기때문에!
using namespace std;

int main()
{
	srand((unsigned int)time(0));  // 프로그램을 실행할때마다 정답이 바뀌도록한다
	int	answer = 1 + rand() % 100;  //1에서 부터 100사이의 임의의 수 설정

	int guess; int remain_tries=5;
	
	
	cout << "1 부터 100 사이의 값을 맞춰 보세요.\n";

	do {
		
		cout << "숫자를 맞춰보세요." << "(기회 " << remain_tries << "번)" << " : ";
		cin >> guess;
		remain_tries = remain_tries - 1;
		
		if (remain_tries!=0) 
			if (guess > answer) cout << "Wrong~ \n 더 작은 숫자를 입력하세요.\n\n";
			else if (guess < answer) cout << "Wrong~ \n 더 큰 숫자를 입력하세요.\n\n";
			else cout << "Bingo~\n 정답은 : " << answer;
			
		else {
			cout << "End Game \n 정답은 :" << answer;
			guess = answer;
		}
	} while (guess != answer);



	return 0;
}