#include <iostream>
using namespace std;

#include "Rect.h"

int main() {
	Rect nemo(3,4);
	Rect paper(5); 
	Rect memo;            //2-1 ��ü3


	Rect* r;
	r = & nemo;
	cout << r->getArea() << endl;

	Rect* s;           
	s = & paper;
	cout << (*s).getArea() << endl;    // 2-2 ��ü ������2


	Rect* p = new Rect;   
	Rect* q = new Rect(5,2);  
	Rect* l = new Rect(3);             // 2-3 ������ü3

	Rect* pArray = new Rect[3];  
	for (int i = 0; i < 5; i++)
		pArray[i] = i;                  //+ ���� ��ü�迭

	Rect* ppArray = pArray;

	Rect t[5] = { Rect(), Rect(2,3), Rect(3,4), Rect(4,5),Rect(5,6) }; //2-4 ��ü�迭1

	delete p;
	delete q;
	delete l;
	delete []pArray;  //��ȯ
}