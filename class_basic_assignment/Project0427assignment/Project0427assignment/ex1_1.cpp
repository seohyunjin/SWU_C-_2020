#include <iostream>
using namespace std;

int getMaxValue(int v1, int v2, int v3);  //함수 원형 정의


int main()
{
    char c;
    int v1, v2, v3 = 0;
    int v_max = 0;
   

    while(true)
    {
        cout << "첫번째 정수를 입력하세요 : ";
        cin >> v1;

        cout << "두번째 정수를 입력하세요 : ";
        cin >> v2;

        cout << "세번째 정수를 입력하세요 : ";
        cin >> v3;
        

        v_max = getMaxValue(v1, v2, v3);      

        cout << "가장 큰 값은" << v_max << "입니다." << endl << endl;
        

        do {
            cout << " 계속하시겠습니까? [Y/N]: ";
            cin >> c;
        }while (c != 'y' && c != 'Y' && c != 'n' && c != 'N');
        
        if (c == 'n' || c == 'N') break;
        cout << endl;

      
    } 
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
            return v2;
        else
            return v3;
    }


}
