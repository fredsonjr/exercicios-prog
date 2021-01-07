#include <iostream>
using namespace std;
void teste(int x);
void media(int x1, int x2, int x3, int x4, int x5);

int main()
{
    int x1, x2, x3, x4, x5;
    cout << "Entre com 5 idades:";
    cin >> x1>> x2>> x3>> x4>> x5;
    teste(x1);
    teste(x2);
    teste(x3);
    teste(x4);
    teste(x5);
    media(x1, x2, x3, x4, x5);
}
void teste(int x)
{
    if (x<18)
        cout<<"menor de idade "<<endl;
        else cout<<"maior de idade "<<endl;
}
void media(int x1, int x2, int x3, int x4, int x5)
{
    int x=0;
    x=(x1+x2+x3+x4+x5)/5;
    cout << "O valor da media e:" << x;
}
