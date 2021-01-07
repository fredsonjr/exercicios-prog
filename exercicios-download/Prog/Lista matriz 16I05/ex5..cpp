#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int mat[20][10], soma=0, somat=0, resul=0, vet[20],matr[20][10];

    for(int i=0; i<20; i++)
    {
        for(int j=0; j<10; j++)
        {
            mat[i][j]=rand()%10;
        }
    }
    for(int i=0; i<20; i++)
    {
        cout << endl;
        for(int j=0; j<10; j++)
        {
            cout << mat[i][j]<< " ";

        }
    }
    cout << endl;
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<10; j++)
        {
            soma=soma+mat[i][j];
            vet[i]=soma;

        }
        cout << vet[i]<<endl;
        soma=0;

    }
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<10; j++)
        {
            matr[i][j]=mat[i][j]*vet[i];

        }
    }
    for(int i=0; i<20; i++)
    {
        cout << endl;
        for(int j=0; j<10; j++)
        {
            cout << matr[i][j]<< " ";
        }
    }
}
