#include <iostream>
using namespace std;

int main()
{
    int a,x;

    cout << "Entre com o angulo:";
    cin >>a;
    x=(a%360);

    if(x>=0&&x<90||x>=-360&&x<-270)
        cout << "Primeiro quadrante";
    else if(x>=180&&x<270||x>=-270&&x<-180)
        cout << "segundo quadrante";
    else if(x>=180&&x<270||x>=-180&&x<-90)
        cout << "Terceiro quadrante";
    else
        cout<< "Quarto quadrante";

}
