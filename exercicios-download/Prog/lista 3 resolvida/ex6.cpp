#include <iostream>
using namespace std;

int main()
{
    float sm, vc;

    cout << "Entre com o salario medio:";
    cin >> sm;

    if(sm<=200){
        cout << "O valor do salario e:" << sm<<endl;
        vc=sm*0.1;
        cout << "O valor do credito e:" << vc;
    }else if(sm>200 && sm<=300){
        cout << "O valro do salario e:" << sm << endl;
        vc=sm*0.2;
        cout << "O valor do credito e:" << vc;
    }else if(sm>300 && sm<=400){
        cout << "O valor do salario e:" << sm << endl;
        vc=sm*0.25;
        cout << "O valor do credito e:" << vc;

    }else{
        cout << "O valor do salario e:" << sm<< endl;
        vc=sm*0.3;
        cout << "O valor do credito e:" << vc;
    }

}
