#include <iostream>
using namespace std;

int main()
{

    float altura, peso, mediaa=0, mediai=0, idadec=0, alturat=0;
    int idade, conti=0;
    char op;

    for (int j=1; j<=6; j++)
    {

    cout << "Time" << j << endl;
    for(int i=1; i<=3; i++)
    {
        cout << "Entre com a idade: ";
        cin >> idade;
        idadec=idadec+idade;
        mediai=idadec/i;


        if(idade<18)
    {
        conti++;
    }


        cout << "Entre com o peso:";
        cin >> peso;

        cout << "Entre com a altura:";
        cin >> altura;
        alturat=alturat+altura;
        mediaa=alturat/i;



    }
    cout << "Menores de idade:" << conti<< endl;



    cout << "Media de idade:" << mediai<< endl;

    cout << "Media das alturas de todos os jogadores:" << mediaa<<endl;





    }



}
