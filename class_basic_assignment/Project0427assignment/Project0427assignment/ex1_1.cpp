#include <iostream>
using namespace std;

int getMaxValue(int v1, int v2, int v3);  //�Լ� ���� ����


int main()
{
    char c;
    int v1, v2, v3 = 0;
    int v_max = 0;
   

    while(true)
    {
        cout << "ù��° ������ �Է��ϼ��� : ";
        cin >> v1;

        cout << "�ι�° ������ �Է��ϼ��� : ";
        cin >> v2;

        cout << "����° ������ �Է��ϼ��� : ";
        cin >> v3;
        

        v_max = getMaxValue(v1, v2, v3);      

        cout << "���� ū ����" << v_max << "�Դϴ�." << endl << endl;
        

        do {
            cout << " ����Ͻðڽ��ϱ�? [Y/N]: ";
            cin >> c;
        }while (c != 'y' && c != 'Y' && c != 'n' && c != 'N');
        
        if (c == 'n' || c == 'N') break;
        cout << endl;

      
    } 
    return 0;
}

int getMaxValue(int v1, int v2, int v3) 
{


    if (v1 - v2 >= 0)
    {
        if (v1 - v3 >= 0)
            return v1;
        else
            return v3;
    }
    else
    {
        if (v2 - v3 >= 0)
            return v2;
        else
            return v3;
    }


}
