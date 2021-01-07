#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
    int mat[6][3], maior=0, maiorl=0, maiorc=0, menor=0, menorl=0, menorc=0;

    for(int i=0; i<6; i++)
    {
        for(int j=0; j<3; j++)
        {
            mat[i][j]=rand()%100;
        }
    }
     for(int i=0; i<6; i++)
    {
        cout << endl;
        for(int j=0; j<3; j++)
        {
            cout << mat[i][j] << " ";

        }
    }
     for(int i=0; i<6; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(mat[i][j]>maior)
            {
                maior=mat[i][j];

            }




        }



    }
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(maior==mat[i][j])
            {
                maiorc=j;
                maiorl=i;
            }
        }
    }
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(mat[i][j]<menor)
            {
                menor=mat[i][j];
            }
        }
    }
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(menor==mat[i][j])
            {
                menorl=i;
                menorc=j;
            }
        }
    }
    cout << endl;
    cout << "Maior elemento da matriz - " <<maior<< endl;
    cout << "Poicao linha - " << maiorl<< endl;
    cout << "Posicao coluna -" <<maiorc<< endl;
    cout << "Menor elemento da matriz - "<< menor << endl;
    cout << "Posicao linha - " << menorl << endl;
    cout << "Posicao coluna - " << menorc << endl;
}
