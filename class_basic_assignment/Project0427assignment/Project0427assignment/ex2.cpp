#include <iostream> 

using namespace std;

char convertCapLow(char c);
char convertLowCap(char c);
char convertChar(char c);

int main()
{
    char ch;

    while (true) {
        cout << "소문자를 입력하세요. : ";
        cin >> ch;

        cout << "소문자 : " << ch << ", 대문자 : " << convertLowCap(ch) << endl << endl;

        cout << "대문자를 입력하세요. : ";
        cin >> ch;

        cout << "대문자 : " << ch << ", 대문자 : " << convertCapLow(ch) << endl << endl;

        cout << "대/소문자를 입력하세요. : ";
        cin >> ch;

        cout << "입력 문자 : " << ch << ", 변환 문자 : " << convertChar(ch) << endl << endl;

        do {
            cout << "계속하시겠습니까? [Y/N] : ";
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
