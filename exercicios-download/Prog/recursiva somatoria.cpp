#include <iostream>
using namespace std;
#include <stdio.h>

int somarDigitos(int valor)
{
    if (valor == 0)
        return 0;
    else
        return (valor % 10) + somarDigitos(valor /= 10);
}


int main() {

    int soma = somarDigitos(122);
    cout << soma;
    return 0;
}


