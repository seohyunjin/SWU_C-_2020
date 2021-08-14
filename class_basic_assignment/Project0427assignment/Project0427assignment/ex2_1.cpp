#include <iostream>
using namespace std;

char convertCapLow(char C);   //대문자-> 소문자로 바꾸어 주는 함수
char convertLowCap(char s); // 소문자-> 대문자로 변환
char convertChar(char q); // 소문자 <-> 대분자 // 대소문자입력하세요

int main()
{

	char c, s;
	char C, S;
	char q, a;

	cout << "\n소문자를 입력하세요 :";
	cin >> s;
	c = convertLowCap(s);
	cout << "소문자: " << s << "대문자" << c << endl;

	cout << "\n대문자를 입력하세요 :";
	cin >> C;
	S = convertCapLow(C);
	cout << "대문자: " << C << "소문자" << S << endl;

	cout << "\n대/소문자를 입력하세요 :";
	cin >> q;
	a = convertCapLow(q);
	cout << "입력문자: " << q << "변환문자: " << a << endl;


}

char convertLowCap(char s)
{
	if (s >= 'a' && s <= 'z')
		return s - 32;
	return 0;
}


char convertCapLow(char C)
{
	if (C >= 'A' && C <= 'Z')
		return C + 32;
	return 0;
}


char convertChar(char q)
{
	if (q >= 'a' && q <= 'z')
		return q - 32;
	else if (q >= 'A' && q <= 'Z')
		return q + 32;

	return 0;
}