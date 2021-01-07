#include <iostream>
using namespace std;

int main()
{
    int n, vet[10000];
    cout << "Entre com o n:" << endl;
    cin >>n;
    cout << endl;
    for(int i=0; i<n; i++)
    {
        cin >> vet[i];

    }
    cout << endl;
    for(int i=n-1; i>=0; i--)
    {
         cout << vet[i] << endl;
    }

}