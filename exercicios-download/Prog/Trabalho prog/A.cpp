#include <iostream>
using namespace std;
void numero ();

int main()
{
int x;
 cout << "Entre com um numero inteiro:";

 numero ();
}
void numero ()
{
    int x;
    cin >> x;
    if (x%2==0)
        cout << "O numero e par";
        else
            cout << "O numero e impar";

}
