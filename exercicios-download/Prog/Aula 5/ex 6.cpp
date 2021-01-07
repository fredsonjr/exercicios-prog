#include <iostream>
using namespace std;

int main ()
{
    int n, cont=1, s=0;
    cout << "Entre com um numero:";
    cin >> n;

    for(float i=1; i<=n; i++)
    {
        cont*=i;



    }
    cout << "Fatorial e:"<< n<< "e" << cont <<endl;

    for(float j=0; j<=n; j++)
    {


    s=s+(1/cont);
    }

    cout << s;






}
