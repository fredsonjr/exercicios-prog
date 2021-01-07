#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    float *v= new float[10];


    for(int i=0; i<10; i++)
    {
        v[i]=rand()%10;


    }
    for(int i=0; i<10; i++)
    {
        cout << &v[i] << endl;
    }
    delete v;
}
