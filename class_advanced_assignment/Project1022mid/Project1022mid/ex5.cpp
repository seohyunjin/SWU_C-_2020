#include <iostream>
using namespace std;

class Circle {
private:
	static int numofCircles; //정적 멤버 변수
	int radius;
public:
	static int getNumofCircles() { return numofCircles; }  // 정적 멤버함수

};

int Circle::numofCircles = 1; // static 멤버변수는 밖에서 꼭 초기화 해주어야함!

int main() {

	cout << Circle::getNumofCircles();

}
