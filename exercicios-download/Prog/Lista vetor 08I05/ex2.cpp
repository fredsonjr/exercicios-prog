#include <iostream>
using namespace std;

int main()
{
    int vet[7];
    cout << "Entre com 7 numeros inteiros:"<< endl;
    for(int i=0; i<=6; i++)
    {
        cin >> vet[i];

        if(vet[i]%2==0&& vet[i]%3==0)
        cout << vet[i] << " - Multiplo de 2 e 3" << endl;

        else if(vet[i]%2==0)
            cout << vet[i] << " - Multiplo de 2" << endl;
        else if(vet[i]%3==0)
            cout << vet[i] << " - Multiplo de 3" << endl;
        else
            cout << "Error" << endl;

    }
}
