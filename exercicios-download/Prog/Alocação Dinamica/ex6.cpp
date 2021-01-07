#include <iostream>
using namespace std;

int main()
{

    int *v= new int[5];
    for(int i=0; i<5; i++)
    {
        cin >> v[i];

    }
    for(int i; i<5; i++)
    {
        cout << v[i] <<endl;

    }
    delete v;
}
