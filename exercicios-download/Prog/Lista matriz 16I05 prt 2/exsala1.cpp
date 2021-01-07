#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int mat[5][5], matt[5][5], mat3[5][5], maior=-1;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            mat[i][j]=rand()%10;

        }

    }
    for(int i=0; i<5; i++)
    {
        cout << endl;
        for(int j=0; j<5; j++)
        {
            cout << mat[i][j] << " ";

        }
    }
    cout << endl << endl;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            matt[i][j]=rand()%10;
        }
    }
    for(int i=0; i<5; i++)
    {
        cout << endl;
        for(int j=0; j<5; j++)
        {
            cout << matt[i][j] << " ";
        }
    }
    cout << endl << endl;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(mat[i][j]>matt[i][j])
            {
                mat3[i][j]=mat[i][j];
            }
            else
            {
                mat3[i][j]=matt[i][j];
            }
        }
    }
    for(int i=0; i<5; i++)
    {
        cout << endl;
        for(int j=0; j<5; j++)
        {
            cout << mat3[i][j] << " ";
        }
    }




}
