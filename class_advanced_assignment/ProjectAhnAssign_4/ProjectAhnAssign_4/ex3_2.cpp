#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "���ڿ� �Է�>>";
    getline(cin, str);

    int num = 0;
    int j = -1;
    while (true) {
        j = (int)str.find('a', j + 1); // index 0 ���� 'a'�� Ž�� 
        if (j == -1) break; // 'a'�� ã�� �������� break 
        num++;
    }
    cout << "���� a�� " << num << "�� �ֽ��ϴ�.";
}
