#include <iostream>
#include <cstring>
using namespace std;
int funcao(char vet[], char x);

int main()
{
    char vet[10], x;
    cout << "Entre com 10 letras:" << endl;
    cin >> vet;
    cout << "QUantas vezes a letra apareceu:" << endl;
    cin >> x;

    funcao(vet,x);
}
funcao(char vet[], char x)
{
    int c=0;

    for(int i=0; i<10; i++)
    {
        if(x==vet[i])
        {
            c++;
        }
    }
    cout << c;
}
