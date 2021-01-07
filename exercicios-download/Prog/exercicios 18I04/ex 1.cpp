#include <iostream>
using namespace std;

int main()
{
    int idade, idadem, idadeac=0, cont=0, pess=0, quant=0;
    float peso, pesom=0, pesoac=0, altura, alturam=0, alturaac=0, porc=0;

    for(int i=1; i<=5; i++)
    {
        cout << "Entre com a altura:";
        cin >> altura;

        alturaac=alturaac+altura;
        alturam=alturaac/5;

        cout << "Entre com a idade:";
        cin >> idade;
        if(idade>35)
        {
            cont++;
        }

        idadeac=idadeac+idade;
        idadem=idadeac/5;

        cout << "Entre com o peso:";
        cin >> peso;
        quant++;

        pesoac= pesoac+peso;
        pesom=pesoac/5;

        if(peso<60)
        {
            pess++;
        }




    }
    cout << "A altura media e:" << alturam <<"m"<< endl;
    cout << "A idade media e:" << idadem<<"anos"<< endl;
    cout << "O peso medio e:" << pesom<<"Kg"<< endl;
    cout << "Quantidade de pessoas com idade superior a 35 anos:" << cont << endl;


            porc=(pess*100)/quant;

    cout << "A porcentagem de pessoas com peso inferior a 60 kg:" << porc << "%" <<endl;
}
