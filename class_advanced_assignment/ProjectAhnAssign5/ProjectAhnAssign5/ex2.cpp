#include<iostream>
using namespace std;

void half(double& num) { // ������ ���� ȣ��
    num /= 2; // num���� �Ѿ�� ������ ���� �ٲ� 
}

int main() {
    double n = 20;
    half(n); // n�� �ݰ��� ���� n�� �ٲ۴�. 
    cout << n; // 10�� ��µȴ�. 
}
