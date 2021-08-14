#include <iostream>
using namespace std;

int getMaxValue(int v1, int v2, int v3);


int main()
{
    char c; 
    int v1, v2, v3 = 0;
    int v_max = 0;
    // 필요한 변수들 선언 및 초기화
    do
    {
        cout << "\n첫번째 정수를 입력하세요 : ";
        cin >> v1;

        cout << "두번째 정수를 입력하세요 : ";
        cin >> v2;

        cout << "세번째 정수를 입력하세요 : ";
        cin >> v3;
        // 정수 3개 표준 입력

        v_max = getMaxValue(v1, v2, v3);
        // 함수 호출

        cout << "가장 큰 값은" << v_max << "입니다." << endl;
        // 결과 출력

        cout << "\n 계속하시겠습니까? [Y/N]: ";
        cin >> c;
        // 계속 실행 여부 확인
    } while (c != 'y' && c != 'Y' && c != 'n' && c != 'N');

    return 0;
}

int getMaxValue(int v1, int v2, int v3)
{
  

    if (v1 - v2 >= 0)
    {
        if (v1 - v3 >= 0)
            return v1;
        else
            return v3;
    }
    else
    {
        if (v2 - v3 >= 0)
            return v2 ;
        else
            return v3 ;
    }
    
  
    // 여기에 getMaxValue 함수 구현
}
