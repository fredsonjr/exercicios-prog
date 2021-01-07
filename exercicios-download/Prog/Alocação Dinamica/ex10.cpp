#include<iostream>
using namespace std;

int main (){

    int tam,x,c=0;

        cin>>tam;

    int *p= new int [tam];

    for(int i=0; i<tam; i++)
        {
            cin>>p[i];
        }
        cout << "Entre com um numero" ;
    cin>>x;
        for(int i=0; i<tam; i++)
        {
            if(p[i]%x==0)
            {
                cout <<p[i];
                c++;
            }

        }
        cout << endl;

                cout << c++;
                delete p;
}
