#include <iostream>
using namespace std;

#include "Rect.h"

int main() {
	Rect nemo(3,4);
	Rect paper(5); 
	Rect memo;            //2-1 °´Ã¼3


	Rect* r;
	r = & nemo;
	cout << r->getArea() << endl;

	Rect* s;           
	s = & paper;
	cout << (*s).getArea() << endl;    // 2-2 °´Ã¼ Æ÷ÀÎÅÍ2


	Rect* p = new Rect;   
	Rect* q = new Rect(5,2);  
	Rect* l = new Rect(3);             // 2-3 µ¿Àû°´Ã¼3

	Rect* pArray = new Rect[3];  
	for (int i = 0; i < 5; i++)
		pArray[i] = i;                  //+ µ¿Àû °´Ã¼¹è¿­

	Rect* ppArray = pArray;

	Rect t[5] = { Rect(), Rect(2,3), Rect(3,4), Rect(4,5),Rect(5,6) }; //2-4 °´Ã¼¹è¿­1

	delete p;
	delete q;
	delete l;
	delete []pArray;  //¹ÝÈ¯
}