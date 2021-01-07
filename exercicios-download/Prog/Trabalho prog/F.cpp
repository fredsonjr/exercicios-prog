#include <iostream>
using namespace std;
int crescente(int x, int y, int z);

int main()
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
        }else{

            aux=x;
            x=z;
            z=aux;
    } if(y>z)
    {
        aux=y;
        y=z;
        z=aux;

    }
    }
    cout << x <<endl << y << endl << z;



}
