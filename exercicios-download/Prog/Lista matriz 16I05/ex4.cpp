#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int mat[15][5];
    float mediat=0,media=0, mediaclasse=0, mediaclasset=0;

    for(int i=0; i<15;i++)
    {
        for(int j=0; j<5; j++)
        {
            mat[i][j]=rand()%10;
        }
    }
    for(int i=0; i<15;i++)
    {
        cout << endl;
        for(int j=0; j<5; j++)
        {
            cout << mat[i][j] << " ";
        }

    }
    cout << endl;
    cout << endl;
    for(int i=0; i<15;i++)
    {
        for(int j=0; j<5; j++)
        {
            media=media+mat[i][j];
            mediaclasse=mediaclasse+mat[i][j];


        }
        mediat= media/5;
        mediaclasset=mediaclasse/75;
        cout << "Media " << i << " - "<< mediat << endl;

        if(mediat>=6)
        {
            cout << "Aluno "<< i << " - Aprovado"<< endl;
        }else if(mediat< 3)
        {
            cout << "Aluno "<< i << " - Reprovado" << endl;
        }else if(mediat>=3 && mediat<6)
        {
            cout << "Aluno " << i << " - Exame" << endl;
        }
        media=0;
        mediat=0;
    }

    cout << endl;
    cout << "Media da classe: " << mediaclasset;



}
