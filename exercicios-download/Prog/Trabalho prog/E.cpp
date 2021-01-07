#include <iostream>
using namespace std;
#include <iostream>

int fatorial(int n)
{
    if(n == 1)
        return 1;
    else
        return ( n * fatorial(n-1) );
}

int main()
{
    int n;
    cout<<("Digite um inteiro positivo: ");
    cin>>("%d", &n);

    cout<<("%d! = %d\n", n, fatorial(n));
}
