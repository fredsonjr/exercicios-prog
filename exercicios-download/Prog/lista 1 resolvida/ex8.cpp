#include <iostream>
using namespace std;

int main()
{
    int mx,my,mz;

    cout << "Entre com a medida de dois angulos:";
    cin >> mx >> my;

    mz=180-(my+mx);

    cout << "O valor do angulo e:" << mz;


}
