#include <iostream>
using namespace std;

int main()
{
    int mat[4][4], matt[4][4], matr[4][4], vet[4], vett[4];

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin >> mat[i][j];
        }
    }
    for(int i=0; i<4; i++)
    {
        cout << endl;
        for(int j=0; j<4; j++)
        {
            cout << mat[i][j] << " ";
        }
    }
    cout <<endl;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin >> matt[i][j];
        }
    }
    for(int i=0; i<4; i++)
    {
        cout << endl;
        for(int j=0; j<4; j++)
        {
            cout << matt[i][j]<< " ";
        }
    }
    cout << endl;
    for(int i=0; i<4; i++)
    {

        for(int j=0; j<4; j++)
        {
            matr[i][j]=mat[i][j]+matt[i][j];

        }
    }
    for(int i=0; i<4; i++)
    {
        cout << endl;
        for(int j=0; j<4; j++)
        {
            cout << matr[i][j] << " ";
        }
    }
    cout << endl;
    cout << endl;
    for(int i=0; i<4; i++)
    {

        for(int j=0; j<4; j++)
        {
            if(i==j)
                {
                    vet[i]=matr[i][j];
                    cout << vet[i] << " ";
                }
        }
    }
    cout << endl;
    cout << endl;
    for(int i=0; i<4; i++)
    {

        for(int j=0; j<4; j++)
        {
            if(i+j==3)
            {
                vett[i]=matr[i][j];
                cout << vett[i] << " ";
            }


         }
    }
    cout << endl;
    for(int i=0; i<4; i++)
    {
            if(vet[i]==vett[i])
            {
                cout << "Iguais";
                break;
            }else
            cout << "Diferentes";
            break;

    }
}
