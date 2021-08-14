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
    char s[] = "Mike";  //초기값 설정함
    bool b = false;  // 초기값 설정함
    char& loc = find(s, 'M', b);
    if (b == false) {
        cout << "M을 발견할 수 없다" << endl;
        return 0;
    }
    loc = 'm'; // 'M' 위치에 'm' 기록 
    cout << s << endl; // "mike"가 출력됨 
}
