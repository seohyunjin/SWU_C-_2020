#include <iostream>
using namespace std;

int main()
{
    double v;

    while (1)
    {
        cout << "�Ǽ����� �Է��Ͻÿ�: ";
        cin >> v;

        if (v < 0.0)
            break;

        cout << v << "�� ��������" << sqrt(v) << "�Դϴ�.\n";

    }
}