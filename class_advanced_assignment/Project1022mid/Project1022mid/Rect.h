#pragma once

class Rect {
	int width;
	int height;            //1-1 멤버변수2
public:
	Rect(int w, int h);
	Rect(int n);
	Rect();                 // 1-3 생성자3
	  
	int getWidth();
	int getHeight();
	int getArea();         //1-2 멤버함수3

	~Rect();               //1-4 소멸자1

	Rect(const Rect& r);   //1-5 복사생성자1
};