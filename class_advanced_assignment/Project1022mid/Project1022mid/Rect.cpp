#include <iostream>
using namespace std;

#include "Rect.h"

Rect::Rect(int n) {  // ���� ���� �� n ���� �ϴ� ������
	width = n; 
	height = n;

};
Rect::Rect(int w, int h) {  //���� w, ����h�� �ϴ� ������
	width = w;
	height = h;
};
Rect::Rect() {  // �⺻������
	width = 1;
	height = 1;
};

Rect::~Rect() {}  //�Ҹ���

Rect::Rect(const Rect& r)  //���������
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

