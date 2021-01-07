#include <iostream>
using namespace std;

int main()
{
    int x, y, r;
    char op;

    cin>>x >>op>>y;

    if(op=='+')
    {
        r=x+y;
        cout << "ovalor da soma e:"<<r;
    }else if(op=='-')
    {
        r=x-y;
        cout << "O valor da subtracao e:"<<r;

    }else if(op=='/')
             {
                 r=x/y;
                 cout << "A divisao e:"<<r;
             }
             else if(op=='*')
             {
                 r=x*y;
                 cout << "A multiplicacao e:"<<r;
             }else
             cout << "ENtrada invalida";

}
