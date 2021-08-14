#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string sent;
    int n;
    
    cout << "아래 한 줄을 입력하세요.(exit를 입력하면 종료합니다)";

    while (true) {
        
        srand((unsigned)time(0));
        
        cout << "\n>>";

        getline(cin, sent);

        if (sent == "exit") 
            break;
        
        int length = sent.length();

        while (true) {
            n = rand() % length;
            if (sent[n] != ' ')
                break;
        } // 바꾸는 문자가 공백문자가 아닐 경우만 해당하도록, 만약 공백문자이면 다시 뽑도록 설정
        // int a = rand() % 25 + 95; // 임의의 문자 하나 선택 rand() % (최댓값 - 최솟값 + 1) + (최솟값)
                                  //(95부터 119-95+1=25 이므로 최댓값은 ㅅ119) 아스키코드에서 95는 _이고 119는 w
        //따라서 대체되는 문자를 a(97)부터 z(122)로 하고싶으면 최소값을 97로 설정, 최대값을 122로 설정
        int a = rand() % 26 + 97; //('cause 122+1-97=26)

        sent[n] = (char)a; //문자형으로 바꾼 a를 삽입
        cout << sent;
    }
}
