#include <iostream>
#include <string>
using namespace std;

#include "Person.h"

int main() {
    string Name, Tel;
    Person* pInf = new Person[3];

    cout << "이름과 전화 번호를 입력해 주세요\n";

    for (int i = 0; i < 3; i++) {
        cout << "사람 " << i + 1 << ">> ";
        cin >> Name >> Tel;
        pInf[i].set(Name, Tel);
    }

    cout << "모든 사람의 이름은 ";
    for (int i = 0; i < 3; i++) {
        cout << pInf[i].getName() << " ";
    }

    cout << endl << "전화번호 검색합니다. 이름을 입력하세요>>";
    cin >> Name;

    for (int i = 0; i < 3; i++) {

        if (Name.compare(pInf[i].getName()) == 0) {
            cout << "전화 번호는 " << pInf[i].getTel();
            break;
        }
    }
}

