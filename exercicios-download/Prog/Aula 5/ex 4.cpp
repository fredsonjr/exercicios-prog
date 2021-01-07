#include <iostream>
using namespace std;

int main()
{
    float p=2.54, r=0;

    for(int i=1; i<=20; i++)
    {
       r=p*i;
       cout << i << "x" << p << "cm" << "="<< r<< "cm" << endl;
    }
}
