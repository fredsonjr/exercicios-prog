#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

int p;
int x,c;


//if(x>=0){
while (x>=0)
{
    cout<< "entre com o valor: ";
    cin>>x;
    cout <<endl;

p = (int)malloc(sizeof(x));
p = (int)realloc(p,x,sizeof(x));
    c++;

}
cout <<"o vetor e: "<<endl;
for(int i=0;i<c;i++){

    cout<<p[i]<<endl;



}

}
