#include <iostream>
using namespace std;

int main()
{
    short year = SHRT_MAX;
    int sale = INT_MAX;
    long total_sale = LONG_MAX;

    cout << "short���� ũ�� = " << sizeof(short) << endl;
    cout << "int���� ũ��= " << sizeof(int) << endl;
    cout << "long���� ũ�� = " << sizeof(long) << endl;

    cout << "short���� �ִ밪 = " << year << endl;
    cout << "int���� �ִ밪 = " << sale << endl;
    cout << "totak_sale = " << total_sale << endl; 

    cout << "short���� �ּҰ�" << SHRT_MIN << endl;
    cout << "int���� �ִ밪 = " << INT_MIN<< endl;
    cout << "totak_sale = " << LONG_MIN << endl;

}