#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int main (){

int mat1 [10][10];

for (int i=0; i<10; i++) //preenche 1
    {
        cout<<"|";

    for(int j=0; j<10; j++)
        {

        mat1[i][j]= rand ()%10;
        cout<<mat1 [i][j]<<"|";
        }
        cout<<endl;
    }

    cout<<endl<<endl;

    for (int i=0; i<10; i++)
        {
        for(int j=0; j<10; j++)
            {
                if(i<j)
                {
                    mat1[i][j]=(4*1)+(6*j)-3;
                }
                else if(i=j)
                {
                    mat1 [i][j]=(2*(i*i))-3;
                }
                else
                {
                    mat1[i][j]=(3*(i*i*i))-(4*(j*j))+2;
                }
            }
        }

        cout<<endl<<endl;

for (int i=0; i<10; i++)
    {
        cout <<endl;

    for(int j=0; j<10; j++)
        {
            cout<<mat1 [i][j]<<"|";
        }
            cout<<endl;
    }
}
