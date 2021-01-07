#include <iostream>
using namespace std;


struct Classe{

string nome[5];
int numerom[5];
string curso[5];
};
int main()
{
Classe alunos;

for(int i=0; i<5; i++)
{
    cout << "ENtre com o nome" << endl;
    cin >> alunos.nome[i];
    cout << "ENtre com o numero da matricula" << endl;
    cin >> alunos.numerom[i];
    cout << "Entre com o curso" << endl;
    cin >>alunos.curso[i];
}


}
