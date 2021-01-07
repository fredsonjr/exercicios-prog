#include <iostream>
using namespace std;

int main ()
{
    int veta [5], vetb [5], vetc[5];

    for(int i=0; i<=4; i++)
    {
        cin >> veta [i];
    }cout << endl;

    for(int i=0; i<=4; i++)
    {
        cin >> vetb[i];

    }cout << endl;

    for(int i=0; i<=4; i++)
    {
        vetc[i]=veta[i]*vetb[i];
        cout << vetc[i]<< endl;
    }
}
