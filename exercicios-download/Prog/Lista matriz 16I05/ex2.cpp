#include <iostream>
using namespace std;

int main ()
{
    int mat[2][4], cont1=0, cont2=0, contp=0;
    float media=0, mediatotal=0;

    for(int i=0; i<2; i++)
    {
        for (int j=0; j<4; j++)
        {
            cin >> mat[i][j];

        }
    }
    for(int i=0; i<2 ; i++)
    {
        cout << endl;
        for(int j=0; j<4; j++)
        {
            cout << mat[i][j]<< " ";
        }
    }
    cout << endl;
    for(int i=0; i<1; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(mat[i][j]>=12 && mat[i][j]<=20)
            {
                cont1++;
            }
        }
    }
    for(int i=1; i<2; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(mat[i][j]>=12 && mat[i][j]<=20)
            {
                cont2++;
            }
        }
    }
     for(int i=0; i<2; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(mat[i][j]%2==0)
            {
              contp++;
              media= media+mat[i][j];
            }
        }
    }
    mediatotal=media/contp;

    cout << "A quantidade de elementos entre 12 e 20 na linha 1: " << cont1 << endl;
    cout << "A quantidade de elementros entre 12 e 20 na linha 2: " << cont2 << endl;
    cout << "A media dos elementos pares da matriz e: " << mediatotal;
}

