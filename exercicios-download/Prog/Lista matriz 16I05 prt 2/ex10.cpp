#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int funcao(char vet[]);

int main()
{
    char vet[100];
    cout << "Entre com as letras"<< endl;
    cin >> vet;
    funcao(vet);

}
funcao(char vet[])
{
    int c=0;
    for(int i=0; i<strlen(vet); i++)
    {
        if('a'==vet[i]||'e'==vet[i]||'i'==vet[i]||'o'==vet[i]||'u'==vet[i])
        {
            c++;
        }
    }
    cout << c;
}
