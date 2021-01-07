#include <iostream>
using namespace std;
int funcao(int x, int y, int z);

int main()
{
    int x, y, z;
    cout << "ENtre com dois numeros inteiros:";
    cin >> x >>y;
    cout << "O resultado e:" << funcao(x, y, z);

}
int funcao(int x, int y, int z)
{
    z=(x*x+y*y);

}
