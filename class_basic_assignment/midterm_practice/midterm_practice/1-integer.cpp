#include <iostream>
using namespace std;

int main()
{
    short year = SHRT_MAX;
    int sale = INT_MAX;
    long total_sale = LONG_MAX;

    cout << "short형의 크기 = " << sizeof(short) << endl;
    cout << "int형의 크기= " << sizeof(int) << endl;
    cout << "long형의 크기 = " << sizeof(long) << endl;

    cout << "short형의 최대값 = " << year << endl;
    cout << "int형의 최대값 = " << sale << endl;
    cout << "totak_sale = " << total_sale << endl; 

    cout << "short형의 최소값" << SHRT_MIN << endl;
    cout << "int형의 최대값 = " << INT_MIN<< endl;
    cout << "totak_sale = " << LONG_MIN << endl;

}