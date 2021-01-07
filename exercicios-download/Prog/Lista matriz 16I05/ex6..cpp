#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
    int mat[4][6], mat2[6][4], soma=0, vet[4],soma2=0,vet2[6], vetgg[4];

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<6; j++)
        {
            mat[i][j]=rand()%10;
        }
    }
     for(int i=0; i<6; i++)
    {
        for(int j=0; j<4; j++)
        {
            mat2[i][j]=rand()%10;
        }
    }
     for(int i=0; i<4; i++)
    {
        cout << endl;
        for(int j=0; j<6; j++)
        {
            cout << mat[i][j]<< " ";
        }
    }
    cout << endl;
     for(int i=0; i<6; i++)
    {
        cout << endl;
        for(int j=0; j<4; j++)
        {
            cout << mat2[i][j]<< " ";
        }
    }
     for(int i=0; i<4; i++)
    {
        for(int j=0; j<6; j++)
        {
            soma= soma+mat[i][j];
        }
        vet[i]=soma;
        soma=0;

    }
    cout << endl;
    cout << endl;
    for(int i=0; i<4; i++)
    {
      cout << vet[i]<<endl;
    }
    cout << endl;


    for(int j=0; j<4; j++)
    {
        for(int i=0; i<6; i++)
        {
            soma2=soma2+mat2[i][j];
            vet2[j]=soma2;

        }



        soma2=0;
    }
    for(int i=0; i<4; i++)
    {
        cout << vet2[i]<< endl;
    }
    cout << endl;
    for(int i=0; i<4; i++)
    {
        vetgg[i]=vet[i]+vet2[i];
        cout << vetgg[i] << endl;

    }
}
