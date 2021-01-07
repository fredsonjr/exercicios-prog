#include <iostream>
using namespace std;

int main()
{
    int n, s=0;
    cout << "Entre com um numero:";
    cin >> n;

    cout << "Os numeros divisores sao:";
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            s=(n%i);
            cout <<i<<endl;
        }
    }
}
