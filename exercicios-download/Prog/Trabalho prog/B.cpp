#include <iostream>
using namespace std;

void maior(int x, int y, int z);

int main()
{
    int x, y, z, aux;
    cout << "Entre com 3 numeros inteiros:";
    cin >> x >> y >> z;
    maior (x, y, z);
}
void maior (int x, int y, int z)
{
    if(x>y && x> z)
        cout << "O maior numero e:" << x;
        else if (y>x && y>z)
            cout << "O maior numero e:" << y;
        else
            cout << "O maior numero e:" << z;

}
