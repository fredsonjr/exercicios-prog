#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
    int mat[4][4];

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            mat[i][j]=rand()%20;
        }
    }
     for(int i=0; i<4; i++)
    { cout << endl;
        for(int j=0; j<4; j++)
        {
            cout << mat[i][j] << " ";
        }
    }
     for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(j>i)
            {
                mat[i][j]=0;
            }
        }
    }
    cout << endl;
    cout << endl;
    for(int i=0; i<4; i++)
    {
        cout << endl;
        for(int j=0; j<4; j++)
        {
            cout << mat[i][j] << " ";
        }
    }

}
