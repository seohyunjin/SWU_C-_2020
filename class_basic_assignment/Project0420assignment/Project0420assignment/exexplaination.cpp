#include<iostream>
using namespace std;

int main()
{
	//for(int=0;i<5; i++)
	for (int i=1;i<=5;i++)  // �ݺ�������� i �� ���� 1�� �ʱ�ȭ �� ������ 1����;��, ���ϰ� ����� ��ġ��Ű����
	{
		//cout << i;
		for (int j = 0; j < i; j++) // ���ǽ��� 1�� �����ϸ� 1�� �ݺ��� ; �� 2�����
		{
			cout << j;
		}
		cout << endl;

	}

	return 0;
}