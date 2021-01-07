#include <iostream >>
using namespace std;

int main ()
{
    int vet[15];
    cout << "Entre com 15 numeros inteiros:"<< endl;

    for(int i=0; i<=14; i++)
    {
        cin >> vet[i];
    }
    for(int i=0; i<=14; i++)
    {
        if(vet[i]%2==0)
            cout << "Par posicao:" << i+1 <<endl;
        else
            cout << "Impar posicao:" << i+1 << endl;
    }
}
