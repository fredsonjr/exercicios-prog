#include <iostream>
#include <cstring>
using namespace std;
int funcao(char mat[][3], char matt[][3]);

int main ()
{
    char mat[2][3], matt[2][3];
    funcao(mat, matt);

}
funcao(char mat[][3], char matt[][3])
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> mat[i][j];
        }
    }
    for(int i=0; i<2; i++)
    {
        cout << endl;
        for(int j=0; j<3; j++)
        {
            cout << mat[i][j]<< " ";
        }

}
cout << endl;
for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> matt[i][j];
        }

}
for(int i=0; i<2; i++)
    {
        cout << endl;
        for(int j=0; j<3; j++)
        {
            cout << matt[i][j]<< " ";
        }
    }cout << endl;
    cout << endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(mat[i][j]==matt[i][j])
            {
                cout << mat[i][j] << " ";
            }
        }
    }


}
