#include <iostream>
using namespace std;

int main()
{
    int d,m,a,b,c,e;

    cout<<"Digite o dia";
    cin >> d;
    cout << "Digite o mes:";
    cin >> m;
    cout<< "Digite o ano:";
    cin>>a;
    cout<<d <<"/"<<m<<"/"<<a<<endl;
    cout << "DIgite o dia:";
    cin >>b;
    cout << "Digite o mes:";
    cin>>c;
    cout << "DIgite o ano:";
    cin >>e;
    cout<<b <<"/"<<c<<"/"<<e<<endl;

    if(a<e)
    {
        cout <<"a maior data e:"<<d <<"/"<<m<<"/"<<a<<endl;
    }else if(a>e)
        cout << "a maior data e:"<<b <<"/"<<c<<"/"<<e<<endl;
    else if(a==e)
    {
        if(m<c)
            cout << "a maior data e:"<<d <<"/"<<m<<"/"<<a<<endl;
        else
            cout << "a maior data e:"<<b <<"/"<<c<<"/"<<e<<endl;
    }
    else if(d>b)
    {
        cout <<"a maior data e:"<<d <<"/"<<m<<"/"<<a<<endl;

    }else
    cout << "a maior data e:"<<b <<"/"<<c<<"/"<<e<<endl;
}
