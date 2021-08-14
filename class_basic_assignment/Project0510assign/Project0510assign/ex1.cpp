#include <iostream>
using namespace std;

bool isValid(double, double, double);
double getCircumference(double, double, double);


bool isValid(double length1, double length2, double length3)
{//  ���� �� ���� ���̴� �ٸ� �κ��� ������ �պ��� �۾ƾ��Ѵ�.
  
    if (length1 >= length2 && length1 >= length3 && length1 < length2 + length3)
        return true;
    else if (length2 >= length3 && length2 >= length1 && length2 < length1 + length3)
        return true;
    else if (length3 >= length1 && length3 >= length2 && length3 < length1 + length2)
        return true;
    else
        return false;

    // �ﰢ�� ���� ����(�ﰢ���� �� ���� ������ ���� ������ �� ���� ���� ���� ũ��)�� �Ǵ��ؼ� ���θ� ��ȯ
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
    // �ﰢ�� ���� ���� �Ǵ� ����� ����,
    // ��ȿ�ϸ� �ﰢ���� �ѷ��� ����ؼ� ��ȯ�ϰ�,
    // ��ȿ���� ������ �ﰢ���� �ѷ��� �� �� ���� ������ ��ȯ
}

int main()
{
    double length1, length2, length3;
    double circumference;

    cout << "ù ��° ���� ���̸� �Է��ϼ���. : ";
    cin >> length1;

    cout << "�� ��° ���� ���̸� �Է��ϼ���. : ";
    cin >> length2;

    cout << "�� ��° ���� ���̸� �Է��ϼ���. : ";
    cin >> length3;

    cout << endl << "getCircumference()" << endl;

    circumference = getCircumference(length1, length2, length3);

    if (circumference > 0)  // �ﰢ���� �ѷ��� ���� ������ �ѷ��� ����ϰ�,
    {
        cout << "���� ���� = " << length1 << ", " << length2 << ", " << length3 << endl;
        cout << "�ﰢ���� �ѷ� = " << circumference << endl;
    }
    else                    //  �ﰢ���� �ѷ��� ���� ������ ���� �޽����� ����Ѵ�.
    {
        cout << "���� ���� = " << length1 << ", " << length2 << ", " << length3 << endl;
        cout << "�ﰢ���� ������ �� �����ϴ�." << endl;
    }

    return 0;
}
