#include<iostream>
using namespace std;

int main()
{
	//for(int=0;i<5; i++)
	for (int i=1;i<=5;i++)  // 반복제어변수인 i 의 값을 1로 초기화 한 이유는 1번줄;즉, 편하게 줄행과 일치시키려고
	{
		//cout << i;
		for (int j = 0; j < i; j++) // 조건식을 1번 만족하면 1번 반복됨 ; 즉 2번출력
		{
			cout << j;
		}
		cout << endl;

	}

	return 0;
}