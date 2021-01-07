#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int mat1[3][8], mat2[3][8], matresul[3][8],matsub[3][8];

    for(int i=0; i<3; i++)
    {

        for(int j=0; j<8; j++)
        {
            mat1[i][j]=rand()%10;

        }
    }
    for(int i=0; i<3; i++)
    {
        cout << endl;
        for(int j=0; j<8; j++)
        {
            cout << mat1[i][j] << " ";


        }
    }
    cout << endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<8; j++)
        {
            mat2[i][j]=rand()%10;
        }
    }
    for(int i=0; i<3; i++)
    {
        cout << endl;
        for(int j=0; j<8; j++)
        {
            cout << mat2[i][j] << " ";

        }
    }
    cout << endl;
    for(int i=0; i<3; i++)
    {

        for(int j=0; j<8; j++)
        {
           matresul[i][j]=mat1[i][j]+mat2[i][j];
        }
    }

    for(int i=0; i<3; i++)
    {
        cout << endl;
        for(int j=0; j<8; j++)
        {
            cout << matresul[i][j]<< " ";

        }
    }
    cout << endl;
    for(int i=0; i<3; i++)
    {

        for(int j=0; j<8; j++)
        {
            matsub[i][j]=mat1[i][j]-mat2[i][j];
        }
    }
    for(int i=0; i<3; i++)
    {
        cout << endl;
        for(int j=0; j<8; j++)
        {
            cout << matsub[i][j]<< " ";

        }
    }



}
