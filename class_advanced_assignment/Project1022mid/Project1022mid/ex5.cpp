#include <iostream>
using namespace std;

class Circle {
private:
	static int numofCircles; //���� ��� ����
	int radius;
public:
	static int getNumofCircles() { return numofCircles; }  // ���� ����Լ�

};

int Circle::numofCircles = 1; // static ��������� �ۿ��� �� �ʱ�ȭ ���־����!

int main() {

	cout << Circle::getNumofCircles();

}
