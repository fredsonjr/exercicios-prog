#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

void aloca(char *p, int tam)
{
    p=new char[tam];
}

int main (){

    int tam;
    char *p;

        cout << "Tamanho da string: "<<endl;

        cin >> tam;

            aloca(p, tam);
                cin>>p;

                        for(int i=0; i<tam; i++)
                            {
                                if(p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u')
                                    {
                                        cout<<"-";

                                    } else cout <<p[i];



                            }
    delete p;
}
