#include <iostream>
using namespace std;

char convertCapLow(char C);   //�빮��-> �ҹ��ڷ� �ٲپ� �ִ� �Լ�
char convertLowCap(char s); // �ҹ���-> �빮�ڷ� ��ȯ
char convertChar(char q); // �ҹ��� <-> ����� // ��ҹ����Է��ϼ���

int main()
{

	char c, s;
	char C, S;
	char q, a;

	cout << "\n�ҹ��ڸ� �Է��ϼ��� :";
	cin >> s;
	c = convertLowCap(s);
	cout << "�ҹ���: " << s << "�빮��" << c << endl;

	cout << "\n�빮�ڸ� �Է��ϼ��� :";
	cin >> C;
	S = convertCapLow(C);
	cout << "�빮��: " << C << "�ҹ���" << S << endl;

	cout << "\n��/�ҹ��ڸ� �Է��ϼ��� :";
	cin >> q;
	a = convertCapLow(q);
	cout << "�Է¹���: " << q << "��ȯ����: " << a << endl;


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