#include <iostream>
using namespace std;

int main()
{
    float sb, pi, vi, vsl;

    cout << "ENtre com o salario bruto:";
    cin >> sb;

    cout << "ENtre com o percentual de imposto:";
    cin >> pi;

    vi=sb/pi;
    vsl=sb-vi;

    cout << "Valor do imposto e:" << vi;
    cout << "Valor do salario liquido e:" << vsl;

}
