#include <iostream>
using namespace std;
int sexo(float x, char s);

int main ()
{
    float x;
    char s;
    cout << "Entre com a altura:" << endl;
    cin >> x;
    cout << "Entre com o sexo:" << endl;
    cin >> s;

    cout << sexo (x,s);
}

    int sexo(float x, char s)
    {
        float y;
        if (s=='m')
        {
            y=(72.7*x)-58;
            return y;
        }else if (s=='f')
        {
            y=(62.1*x)-44.7;
            return y;
        }else
        cout << "Entrada invalida";
    }

