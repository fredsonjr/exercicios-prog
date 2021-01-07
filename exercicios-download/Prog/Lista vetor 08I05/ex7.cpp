#include <iostream>
using namespace std;

int main()
{
    int vet[5], c, n, t,x,a,y;
    char op;


    cout << "Entre com 5 numeros:" << endl;

    for(int i=0; i<5; i++)
    {
        cin >> vet[i];

    }
    while(1){

    cout << "MENU" <<endl;
    cout << "a) Saber em qual celula esta armazenado um valor qualquer no vetor" << endl;
    cout << "b) Alterar o valor de alguma celula" << endl;
    cout << "c) imprimir o vetor" << endl;
    cout << "d) Sair" << endl;

    cin >> op;

    switch(op){

    case 'a':
    {
        cout << "Entre com o elemento " << endl;
        cin >> x;
        for(int i=0; i<5; i++)
    {


        if(x==vet[i])
        {

           cout << "Celula " << i << endl;


        }

    }

    }break;

    case 'b':
        {
            cout << "Entre com a celula q deseja alterar:" << endl;
            cin >>a;

            cout <<"Entre com novo valor:" << endl;
            cin >> y;

            vet[a]=y;



           cout << endl;
           for (int i=0; i<5; i++)
           {
               cout << vet[i] << endl;

           }

            }break;


    case 'c':
    {
        for(int i=0; i<5; i++)
        {
            cout << vet[i]<< endl;
        }
}break;

    case 'd':
        {
          return 0;

        }break;

        default: cout << "Entrada invalida" << endl;

}

}

}


