#include <iostream>
using namespace std;

int main()
{
    float ht, sm, het,sb,vht,vhet,shet,s;

    cout << "ENtre com numero de horas trabalhadas:";
    cin >> ht;
    cout << "Valor do salario minimo>";
    cin >> sm;
    cout << "Numero de hora extras trabalhadas:";
    cin >> het;

    vht=sm/8;
    vhet=sm/4;
    sb=ht*vht;
    shet=het*vhet;
    s=sb+shet;


    cout <<"O salario e:" << s;


    }
