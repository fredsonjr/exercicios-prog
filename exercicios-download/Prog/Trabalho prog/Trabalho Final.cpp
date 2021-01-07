#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;

void a ();
void num ();
void b ();
void maior (int x, int y, int z);
int c ();
int triangulo();
int d ();
int sexo(float x, char s);
void e ();
void f ();
int crescente (int x, int y, int z);
void g ();
void h();
void teste(int x);
void media(int x1, int x2, int x3, int x4, int x5);
int i();

int main () {

    char op;
    int x,s,mv,p;
    float m;
setlocale(LC_ALL, "Portuguese");

    while (1){
        cout << "MENU:"<<endl;
        cout << "a)Informar se é par ou impar "<<endl;
        cout << "b)Mostre o maior numero informado"<<endl;
        cout << "c)Mostre o quadrante do ângulo informado"<<endl;
        cout << "d)Mostre o peso ideal"<<endl;
        cout << "e)Mostre o fatorial do numero "<<endl;
        cout << "f)Ordene os numeros de forma crescente "<<endl;
        cout << "g)Verifique se o numero é primo "<<endl;
        cout << "h)Calculadora de potencia "<<endl;
        cout << "i)Calculo de idade media e maior/menor de idade "<<endl;
        cin >> op;
        switch (op){
            case 'a':
                        a();
                        break;
            case 'b':
                        b();
                        break;
            case 'c':
                        c();
                        break;
            case 'd':
                        d();
                        break;
            case 'e':
                        e();
                        break;
            case 'f':
                        f();
                        break;
            case 'g':
                        g();
                        break;
            case 'h':
                        h();
                        break;
            case 'i':
                        i();
                        break;


     }
    }
}

void a ()
{
int x;
 cout << "Entre com um numero inteiro:";
num();
}
void num ()
{
    int x;
    cin >> x;
    if (x%2==0)
        cout << "O numero é par"<<endl<<endl;
        else
            cout << "O numero é impar"<<endl<<endl;

}
void b ()

{
    int x,y,z;
    cout << "Entre com 3 numeros inteiros:"<<endl;
    cin >> x >> y >> z;
    maior (x, y, z);
}
void maior (int x, int y, int z)
{
    if(x>y && x> z)
        cout << "O maior numero é:" << x;
        else if (y>x && y>z)
            cout << "O maior numero é:" << y <<endl<<endl;
        else
            cout << "O maior numero é:" << z <<endl<<endl;

}
int c ()
{

    int x;

   x= triangulo();
   cout <<x << "º quadrante"<<endl <<endl;

}
int triangulo()
{
cout << "Entre com um angulo:";
  int x, y;
  cin >> y;
  x=y%360;

  if (x>0 && x<=90 || x>= -360 && x<=-270 )
        return 1;
  else if(x>90 && x<=180 ||x> -270 && x <= -180)
    return 2;
  else if (x>180 && x<=270 || x> -180 && x <= -90)
    return 3;
    else
    return 4;
}
int d ()
{ float x, z,y;
  char s;
    cout << "Entre com a altura em m:" << endl;
    cin >> x;
    cout << "Entre com o sexo (f ou m):" << endl;
    cin >> s;
    cout <<"Seu peso ideal é: "<< sexo (x,s)<< "Kg" <<endl <<endl;
}
int sexo(float x, char s)
    {
        float y;
        if (s=='m')
        {
            y=(72.7*x)-58.0;
            return y;
        }else if (s=='f')
        {
            y=(62.1*x)-44.7;
            return y;
        }else
        cout << "Entrada invalida";
    }

void e()
{
    int x,n=1;
    cout<<("Digite um inteiro positivo: ");
    cin>> x;
    for (int i=1; i<=x; i++){
        n*=i;

    }

        cout << "O fatorial de "<< x << " é: " << n << endl << endl;
}
void f ()
{
    int x, y, z, aux;
    cout << "Entre com 3 numeros inteiros:";
    cin >> x>> y>> z;
    crescente(x, y, z);


}
int crescente(int x, int y, int z)
{ int aux;
    if(x>y || x>z)
    {
        if(y<z)
        {
            aux=x;
            x=y;
            y=aux;
        }
        else
        {
            aux=x;
            x=z;
            z=aux;
    }
    }
    if(y>z)
    {
        aux=y;
        y=z;
        z=aux;

    }

    cout <<"A ordem dos numeros é: "<<endl << x <<endl << y << endl << z<<endl <<endl;



}


void g (){

        int x,y,z;
        cout<<"Entre com o numero inteiro: ";
        cin>>z;
            x=z-1;
                while(y!=0&&x>0){
                   y=z%x;
                   x--;
                }
                    if(x==0){
                        cout<< "O número "<<z<<" é primo."<<endl;
                        }else{
                        cout<< "O número "<<z<<" não é primo."<<endl;
        }
}

void h()
{
int p=1, x,y;
    cout << "Entre com a base: ";
    cin >> x;
    cout << "Entre com o expoente: ";
    cin >> y;
for (int i=0; i<y; i++){
    p=(p*x);

}
cout <<p<<endl<<endl;

}
int i()
{
    int x1, x2, x3, x4, x5;
    cout << "Entre com 5 idades:";
    cin >> x1>> x2>> x3>> x4>> x5;
    teste(x1);
    teste(x2);
    teste(x3);
    teste(x4);
    teste(x5);
    media(x1, x2, x3, x4, x5);

}
void teste(int x)
{
    if (x<18)
        cout<< x <<" anos é menor de idade "<<endl;
        else cout<< x << " anos é maior de idade "<<endl;
}
void media(int x1, int x2, int x3, int x4, int x5)
{
    int x=0;
    x=(x1+x2+x3+x4+x5)/5;
    cout << "O valor da media das idades é: " << x<<endl<<endl;
}
