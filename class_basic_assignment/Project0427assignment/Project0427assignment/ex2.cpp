#include <iostream> 

using namespace std;

char convertCapLow(char c);
char convertLowCap(char c);
char convertChar(char c);

int main()
{
    char ch;

    while (true) {
        cout << "�ҹ��ڸ� �Է��ϼ���. : ";
        cin >> ch;

        cout << "�ҹ��� : " << ch << ", �빮�� : " << convertLowCap(ch) << endl << endl;

        cout << "�빮�ڸ� �Է��ϼ���. : ";
        cin >> ch;

        cout << "�빮�� : " << ch << ", �빮�� : " << convertCapLow(ch) << endl << endl;

        cout << "��/�ҹ��ڸ� �Է��ϼ���. : ";
        cin >> ch;

        cout << "�Է� ���� : " << ch << ", ��ȯ ���� : " << convertChar(ch) << endl << endl;

        do {
            cout << "����Ͻðڽ��ϱ�? [Y/N] : ";
            cin >> ch;
        } while (ch != 'y' && ch != 'Y' && ch != 'n' && ch != 'N');

        if (ch == 'n' || ch == 'N') break;
        cout << endl;
    }

    return 0;
}


char convertCapLow(char c)
{
    if (c >= 'A' && c <= 'Z') return (c + 32);
}

char convertLowCap(char c)
{
    if (c >= 'a' && c <= 'z') return (c - 32);
}

char convertChar(char c)
{
    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') return (c ^ 32);
}
