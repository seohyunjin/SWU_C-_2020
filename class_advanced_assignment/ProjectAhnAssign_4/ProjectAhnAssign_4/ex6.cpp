#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "�Ʒ� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)";

    while (true) {
        cout << endl << ">>";
        
        getline(cin, str);

        if (str == "exit")
            break;

        for (int i = str.length() - 1; i >= 0; i--)
            cout << str[i];
    }
}
