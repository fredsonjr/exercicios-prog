#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int funcao(char vet[]);

int main()
{
    char vet[100];
    funcao(vet);

}
funcao(char vet[])
{
    int c=0, tam;
    cin >> vet;
    tam=strlen(vet);
    for(int i=0; i<strlen(vet); i++)
    {
        if(vet[i]==(vet[(tam-1)-i]))
           {
               c++;
           }
    }
    if(c==tam)
            cout << "PA";
    else
        cout << "N pa";
}
