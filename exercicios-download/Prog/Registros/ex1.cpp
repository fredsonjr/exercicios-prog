#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

struct Dados
{
    char n[40],e[100];
    int i;

    string nome;
    int idade;
    string endereco;
};
int main()
{
    Dados pessoa;

    cout << "Entre com o nome" << endl;
    gets(pessoa.n);
    cout << "Entre com a idade" <<endl;
    cin >> pessoa.i;
    cout << "Entre com o endereco" << endl;
    cin >> pessoa.e;
}


