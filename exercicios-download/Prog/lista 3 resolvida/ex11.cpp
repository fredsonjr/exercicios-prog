#include <iostream>
using namespace std;

int main()
{
    float h,pi;
    char s;


    cout << "Entre com a altura:";
    cin >> h;
    cout << "Entre com o sexo:";
    cin >> s;

    if(s=='m')
    {
        pi=(72.7*h)-58;
        cout << "O peso ideal e:"<<pi<<"Kg";
    }else if(s=='f')
    {
        pi=(62.1*h)-44.7;
        cout << "o peso ideal e:"<<pi<<"kg";
    }
}
