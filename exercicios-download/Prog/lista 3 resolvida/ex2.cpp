#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4, m;

    cout << "ENtre com 4 notas:";
    cin >> n1 >> n2 >> n3 >> n4;

    m=(n1+n2+n3+n4)/4;

    if(m>=7)
        cout << "Aprovado"<< endl << m;
    else
        cout << "Reprovado"<<m;


}
