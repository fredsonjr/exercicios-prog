#include <iostream>
using namespace std;

int main ()
{
    float s=0, e=1, c=1, cont=50,r=0;

    for(int i=0; i<50; i++)
    {

        c=(c*2);
        r=r+(c/cont);
         cont--;


    }
    cout << r;




}
