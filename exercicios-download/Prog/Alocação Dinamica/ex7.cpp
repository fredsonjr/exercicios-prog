#include<iostream>

using namespace std;

int main ()
{
int tam;
cin >> tam;
int *v = new int [tam];


for (int i=0; i<tam; i++)
    {
        cin>> v[i];
    }
for (int i=0; i<tam; i++)
    {
     cout << v[i]<<endl;
    }
delete v;
}
