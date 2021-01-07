#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int vet[100];

    for(int i=0; i<100; i++)
    {
      vet[i]=rand()%100;



    }
    for(int i=0; i<100;i++)
    {
        if(vet[i]>50)
        {
            cout << vet[i] << " | celula - " << i<< endl;

        }
    }

}
