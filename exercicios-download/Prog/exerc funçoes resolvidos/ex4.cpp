#include <iostream>
using namespace std;
int maior(int x, int y);

int main()
{
    int x, y, s;
    cout << "Entre com dois numeros:";
    cin >> x >> y;
    cout << "o maior numero e:" <<endl;
    maior(x,y);

}
int maior(int x, int y)
{
    if(x>y)
        cout << x;
    else
        cout << y;
}
