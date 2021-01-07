#include<iostream>

using namespace std;

int main (){

int tam, par=0, impar=0;
    cin >> tam;
        int *v = new int [tam];

for (int i=0; i<tam; i++)
    {
        cin>> v[i];
    }
    for (int i=0; i<tam; i++)
    {

        if(v[i]%2==0)
            par++;
        else
            impar++;

    }
    cout <<par<<endl<<impar;

    delete v;
}
