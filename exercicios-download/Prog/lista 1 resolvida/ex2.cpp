#include <iostream>
using namespace std;

int main()
{
    float r,c,a,v;

    cout << "ENtre com o raio:";
    cin >> r;

    c=(2*3.14*r);
    a=(3.14*4*(r*r));
    v=(4*3.14*(r*r*r))/3;

    cout << "O comprimento e:" << c<<endl;
    cout << "A area e:" << a<< endl;
    cout << "O volume e:"<< v;

}
