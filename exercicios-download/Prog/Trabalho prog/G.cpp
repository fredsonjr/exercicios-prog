#include <iostream>
using namespace std;
#include <math.h>

int Primo(int numero)
{
    int i=0;
    int p=1;

    for(i=2;i<numero;i++){
        if(numero%i==0){
            p=0;
        }
    }
    return p;
}

int main(){
    int Num,Resultado;
    cout<<("Digite um numero:");
    cin >>("%d",&Num);

    Resultado=Primo(Num);

    //cout<<("%d\n",Resultado);

    if(Resultado == 1){
        cout<<("Numero primo.\n");
    }
    else{
        cout<<("Numero nao e primo.\n");
    }

    return 0;
}
