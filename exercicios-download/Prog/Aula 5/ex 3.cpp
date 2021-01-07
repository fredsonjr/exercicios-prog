#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "ENntre com um numero:";
    cin >> x;

    for(int i=0; i<=20; i++)
    {
        int s=0;
        s=x*i;
      cout << i << "x" << x << "=" << s<< endl;
    }
}
