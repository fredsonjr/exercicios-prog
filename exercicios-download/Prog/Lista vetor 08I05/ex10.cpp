#include <iostream>
using namespace std;

int main ()
{
    int x, g, contponto=0, conta=0 ;
    float aprov=0;
    char vetgab[20], vetgaluno[20] ;

    cout << "Entre com o gabarito correto" << endl;
    for(int i=0; i<20; i++)
    {
        cin >> vetgab[i];

    }

    for(int i=0; i<70; i++)
    {
        cout << "Entre com o numero do aluno" << endl;
        cin >> x;
        cout << "Entre com o seu gabarito" << endl;
        for(int i=0; i<20; i++)
        {
          cin >> vetgaluno[i];
        }
        for(int i=0; i<20; i++)
        {
          if(vetgaluno[i]==vetgab[i])
          {
              contponto++;
          }

        }
        if(contponto>=6)
          {
              cout << "Aprovado" << endl;
              conta++;
          }
          else{
            cout << "Reprovado" << endl;

          }
        cout << "A nota e - " << contponto << endl;
        contponto=0;

     }
     aprov=conta*100/70.0;
     cout << endl;
     cout << "A porcentagem de aprovacao e - " << aprov << "%";

}
