#include <iostream>
#include <string>
using namespace std;

#include "Person.h"

int main() {
    string Name, Tel;
    Person* pInf = new Person[3];

    cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���\n";

    for (int i = 0; i < 3; i++) {
        cout << "��� " << i + 1 << ">> ";
        cin >> Name >> Tel;
        pInf[i].set(Name, Tel);
    }

    cout << "��� ����� �̸��� ";
    for (int i = 0; i < 3; i++) {
        cout << pInf[i].getName() << " ";
    }

    cout << endl << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
    cin >> Name;

    for (int i = 0; i < 3; i++) {

        if (Name.compare(pInf[i].getName()) == 0) {
            cout << "��ȭ ��ȣ�� " << pInf[i].getTel();
            break;
        }
    }
}

