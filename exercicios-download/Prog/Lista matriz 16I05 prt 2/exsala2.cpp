#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
    int mat[10][10];

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            mat[i][j]=rand()%10;
        }

    }
    for(int i=0; i<10; i++)
    {
        cout << endl;
        for(int j=0; j<10; j++)
        {
            cout << mat[i][j] <<" " ;
        }
    }
    cout << endl << endl;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(i<j)
            {
                mat[i][j]=((4*i)+ (6*j)-3);
            }
        }
    }
     for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(i=j)
            {
                mat[i][j]=((2*(i*i))-3);
            }
        }
    }
     for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(i>j)
            {
                mat[i][j]=((3*(i*i*i))-((4*(j*j))+2));
            }
        }
    }
     for(int i=0; i<10; i++)
    {
        cout << endl;
        for(int j=0; j<10; j++)
        {
            cout << mat[i][j] << " ";
        }
    }


}
