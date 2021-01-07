#include <iostream>
using namespace std;

int main()
{
    float n1, n2,m,df,p,n,d;
    char op;

    cout << "Entre com duas notas:";
    cin >> n1 >> n2;
    cout << "Entre com o operador de 1 a 4:";
    cin >>op;

    if(op=='1')
    {
        m=(n1+n2)/2;
        cout << "Media entre os numeros digitados:" <<m;

    }else if(op=='2')
        {
            if(n1>n2){
                df=n1-n2;
                cout<< "A diferenca do maior pelo menor e:" <<df;
            }else{
            df=n2-n1;
            cout << "A diferenca do maior pelo menor e:" <<df;
            }
        }else if(op=='3')
        {
            p=(n1*n2);
            cout << "Produto entre os numeros digitados:" << p;
        }else if(op=='4'){
        d=n1/n2;
        cout << "A divisao do primeiro pelo segundo e:"<<d;


        }else
        cout << "Entrada invalida.";

}
