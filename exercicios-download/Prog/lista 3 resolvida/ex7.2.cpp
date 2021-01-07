#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Entre com o preco:";
    cin >>x;
    cout << "ENtre com o codigo:";
    cin >>y;

    if(y==1)
        cout << "sul";
    else if(y==2)
        cout << "norte";
    else if(y==3)
        cout << "leste";
    else if(y==4)
        cout << "oeste";
    else if(y==5||y==6)
        cout << "Nordeste";
    else if(y==7||y==8||y==9)
        cout << "SUdeste";
    else if(y>=10&&y<=20)
        cout << "Centro oeste";
    else if(y>=21&&y<=30)
        cout << "nordeste";
    else
        cout <<"entrada invalida";



}
