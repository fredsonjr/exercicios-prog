#include <iostream>
using namespace std;

int main()
{
    int vet[6], conti=0, contp=0, i=0;

    for(int i=0; i<=5; i++)
    {
        cin >> vet[i];

        if(vet[i]%2==0)
        {
            contp++;
            cout << "Par:" << vet[i] << endl;


        }
        else
        {
            conti++;
            cout << "Impar:" << vet[i] <<endl;
        }
    } cout << "Quantidade de numeros pares:" << contp << endl;
      cout << "Quantidade de numeros impares:" << conti << endl;


}

