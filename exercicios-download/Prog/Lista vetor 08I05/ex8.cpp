#include <iostream>
using namespace std;
bool funcao(int vet[], int a, int b, int maior, int menor)
{
    for(int i=0; i<5; i++)
    {
        if(maior<b&& menor>a)
        {
            return 1;
        }else
        return 0;

}

}
int main()
{
    int vet[5], a,b, maior=-1, menor=99999;
     cout << "Entre com 5 numeros:"<< endl;
     for(int i=0; i<5; i++)
     {
         cin >> vet[i];
     }
     for(int i=0; i<5;i++)
     {
         if(vet[i]>maior)
         {
             maior=vet[i];
         }
     }
     for(int i=0; i<5; i++)
     {
         if(vet[i]<menor)
         {
             menor=vet[i];
         }
     }
     cout << "Entre com um numero A delimitando o inicio de um intervalo"<< endl;
     cin >> a;
     cout << "Entre com um numero B delimitando o final de um intervalo"<< endl;
      cin >> b;
      cout<<"1 caso verdadeiro/ 0 caso falso "<<endl<<funcao(vet,a,b,maior,menor);
}

