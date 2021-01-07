#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int **m= new int*[3];

    for(int j=0; j<3; j++)
    {
        m[j]=new int[3];
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            m[i][j]=rand()%10;

        }
    }
    for(int i=0; i<3; i++)
    {
        cout << endl;
        for(int j=0; j<3; j++)
        {
            cout << &m[i][j]<< " ";
        }
    }




}
