#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    float x, y, z;

    cout << "Entre com os catetos:";
    cin >> y >> z;

    x=(sqrt(y*y+z*z));

    cout << "O valor da hipotenusa e:" << x;
}
