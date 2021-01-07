#include <iostream>
using namespace std;

int main()
{
    int x, y, z;

    cout << "Entre com 3 numeros:";
    cin >> x >> y >> z;

    if(x>y && x>z)
        cout << "O maior numero e:" << x;
    else if(y>x && y>z)
        cout << " O maior numero e:" << y;
    else
        cout << "O meior numero e:" << z;
}
