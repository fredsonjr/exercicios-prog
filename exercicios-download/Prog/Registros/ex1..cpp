#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

struct Dados
{
    string nome;
    int idade;
    string endereco;
};
int main()
{


    Dados pessoa;

    cout << "Entre com o nome" << endl;
    cin >>(pessoa.nome);
    cout << "Entre com a idade" <<endl;
    cin >> pessoa.idade;
    cout << "Entre com o endereco" << endl;
    cin >> pessoa.endereco;
}
