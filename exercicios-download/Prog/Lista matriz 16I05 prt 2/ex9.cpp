#include <iostream>
#include <cstring>
using namespace std;
int funcao(char vet[], char x);

int main()
{
    char vet[10], x;
    cout << "Entre com 10 letras:" << endl;
    cin >> vet;
    cout << "Qual celula tal letra esta" << endl;
    cin >> x;

    funcao(vet,x);
}
funcao(char vet[], char x)
{

    for(int i=0; i<10; i++)
    {
        if(x==vet[i])
        {
            cout << i << endl;
        }
    }

}
