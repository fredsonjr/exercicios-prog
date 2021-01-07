#include <iostream>
using namespace std;
int maior3(int x, int c, int v);

int main()
{
    int x, c, v;
    cout << "Entre com 3 numeros:";
    cin >> x >> c >> v;
    cout << "O maior numero e:";
    maior3(x,c,v);

}
int maior3(int x, int c, int v)
{
    if(x>c && x>v)
        cout << x;
    else if(c>x&&c>v)
        cout << c;
    else
        cout << v;
}


