#include<iostream>
using namespace std;

char& find(char a[], char c, bool& success) {
    int len = sizeof(a);
    for (int i = 0; i < len; i++) {
        if (a[i] == c) {
            success = true;
            return a[i];
        }
    }
}

int main() {
    char s[] = "Mike";  //�ʱⰪ ������
    bool b = false;  // �ʱⰪ ������
    char& loc = find(s, 'M', b);
    if (b == false) {
        cout << "M�� �߰��� �� ����" << endl;
        return 0;
    }
    loc = 'm'; // 'M' ��ġ�� 'm' ��� 
    cout << s << endl; // "mike"�� ��µ� 
}
