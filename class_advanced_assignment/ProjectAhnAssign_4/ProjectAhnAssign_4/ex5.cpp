#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string sent;
    int n;
    
    cout << "�Ʒ� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)";

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
        } // �ٲٴ� ���ڰ� ���鹮�ڰ� �ƴ� ��츸 �ش��ϵ���, ���� ���鹮���̸� �ٽ� �̵��� ����
        // int a = rand() % 25 + 95; // ������ ���� �ϳ� ���� rand() % (�ִ� - �ּڰ� + 1) + (�ּڰ�)
                                  //(95���� 119-95+1=25 �̹Ƿ� �ִ��� ��119) �ƽ�Ű�ڵ忡�� 95�� _�̰� 119�� w
        //���� ��ü�Ǵ� ���ڸ� a(97)���� z(122)�� �ϰ������ �ּҰ��� 97�� ����, �ִ밪�� 122�� ����
        int a = rand() % 26 + 97; //('cause 122+1-97=26)

        sent[n] = (char)a; //���������� �ٲ� a�� ����
        cout << sent;
    }
}
