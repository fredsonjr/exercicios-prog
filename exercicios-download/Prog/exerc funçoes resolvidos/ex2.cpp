#include <iostream>
using namespace std;

int quadrado(int x, int r);

int main()
{
    int x, r;
    cout << "ENtre com um numero:";
    cin >> x;
    cout << "O quadrado desse numero e:" << quadrado(x,r);
}
int quadrado(int x, int r)
{
    r=(x*x);
}
