#pragma once

class Rect {
	int width;
	int height;            //1-1 �������2
public:
	Rect(int w, int h);
	Rect(int n);
	Rect();                 // 1-3 ������3
	  
	int getWidth();
	int getHeight();
	int getArea();         //1-2 ����Լ�3

	~Rect();               //1-4 �Ҹ���1

	Rect(const Rect& r);   //1-5 ���������1
};