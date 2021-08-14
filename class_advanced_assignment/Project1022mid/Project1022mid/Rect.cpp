#include <iostream>
using namespace std;

#include "Rect.h"

Rect::Rect(int n) {  // 가로 세로 다 n 으로 하는 생성자
	width = n; 
	height = n;

};
Rect::Rect(int w, int h) {  //가로 w, 세로h로 하는 생성자
	width = w;
	height = h;
};
Rect::Rect() {  // 기본생성자
	width = 1;
	height = 1;
};

Rect::~Rect() {}  //소멸자

Rect::Rect(const Rect& r)  //복사생성자
{
	width = r.width;
	height = r.height;
};

int Rect::getWidth() {
	return width;
};

int Rect::getHeight() {
	return height;
};
int Rect::getArea() {
	return width * height;
};

