#include <iostream>
using namespace std;
int funcao(float n, float s);

int main()
{
    float n, s=0;
    cout << "Entre com um numero:";
    cin >> n;
    funcao(n, s);
}
int funcao(float n, float s)
{
    for(float i=1; i<=n; i++)
    {
        s=s+(1/i);

        cout << s << endl;

    }

}
