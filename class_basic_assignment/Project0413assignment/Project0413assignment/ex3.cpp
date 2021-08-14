#include <iostream>
using namespace std;

int main() 
{
    int sum_p = 0; int sum_q = 0; int sum_r = 0;
   
    int tries_p=0; int tries_q = 0; int tries_r = 0;
 
    int p; int q; int r;


        for (p = 2; p <= 10; p=p+2)
        {
            tries_p = tries_p + 1;
            sum_p =sum_p +p;
        }

       cout << "2의 배수는 " << tries_p << "개이며 그 합은 " << sum_p << "입니다.\n";
       

       for (q = 3; q <= 10; q = q + 3)
       {
           tries_q = tries_q + 1;
           sum_q = sum_q + q;
       }

       cout << "3의 배수는 " << tries_q << "개이며 그 합은 " << sum_q << "입니다.\n";


       for (r = 5; r <= 10; r = r + 5)
       {
           tries_r = tries_r + 1;
           sum_r = sum_r + r;
       }

       cout << "5의 배수는 " << tries_r << "개이며 그 합은 " << sum_r << "입니다.\n";

    

}