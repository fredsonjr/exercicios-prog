#include <iostream>
using namespace std;

int bissexto(int x);

int main()
{
    int x;
    cout << "Entre com o ano:";
    cin >>x;
    cout << "O ano ";
    bissexto(x);
}
int bissexto(int x)
{
    if(x%4==0)
    {
        if(x%100!=0)
        {
            cout << "e bissexto";
        }
    }
    else
        cout << "nao e bissexto";
}
