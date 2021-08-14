#include <iostream>
using namespace std;

bool isValid(double, double, double);
double getCircumference(double, double, double);


bool isValid(double length1, double length2, double length3)
{//  가장 긴 변의 길이는 다른 두변의 길이의 합보다 작아야한다.
  
    if (length1 >= length2 && length1 >= length3 && length1 < length2 + length3)
        return true;
    else if (length2 >= length3 && length2 >= length1 && length2 < length1 + length3)
        return true;
    else if (length3 >= length1 && length3 >= length2 && length3 < length1 + length2)
        return true;
    else
        return false;

    // 삼각형 구성 조건(삼각형의 두 변의 길이의 합은 나머지 한 변의 길이 보다 크다)을 판단해서 가부를 반환
}


double getCircumference(double length1, double length2, double length3)
{
    bool valid;
    valid = isValid(length1, length2, length3);

    if (valid==true)
    {
        return length1 + length2 + length3;
    }
    else
    {
        return -1;
    }
    // 삼각형 구성 조건 판단 결과에 따라,
    // 유효하면 삼각형의 둘레를 계산해서 반환하고,
    // 유효하지 않으면 삼각형의 둘레가 될 수 없는 음수를 반환
}

int main()
{
    double length1, length2, length3;
    double circumference;

    cout << "첫 번째 변의 길이를 입력하세요. : ";
    cin >> length1;

    cout << "두 번째 변의 길이를 입력하세요. : ";
    cin >> length2;

    cout << "세 번째 변의 길이를 입력하세요. : ";
    cin >> length3;

    cout << endl << "getCircumference()" << endl;

    circumference = getCircumference(length1, length2, length3);

    if (circumference > 0)  // 삼각형의 둘레가 양의 정수면 둘레를 출력하고,
    {
        cout << "변의 길이 = " << length1 << ", " << length2 << ", " << length3 << endl;
        cout << "삼각형의 둘레 = " << circumference << endl;
    }
    else                    //  삼각형의 둘레가 음의 정수면 오류 메시지를 출력한다.
    {
        cout << "변의 길이 = " << length1 << ", " << length2 << ", " << length3 << endl;
        cout << "삼각형이 구성될 수 없습니다." << endl;
    }

    return 0;
}
