#include <iostream>
using namespace std;

int main()
{
    int idade, contme=0;

    for(int s=0; s<=10; s++)
    {

        cout<< "Entre com a idade:";
        cin >>idade;

        if(idade<18)
        {
            cout << "Menor de idade"<< endl;
            contme++;

        }else
        cout << "Maior de idade" << endl;
    }
    cout << "Quantidade de menores de idade:" << contme;
}
