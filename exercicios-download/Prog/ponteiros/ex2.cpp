#include <iostream>
using namespace std;

int main()
{
    int *x1, *x2, num1, num2;

    x1=&num1;
    cout << &x1 <<endl;

    x2=&num2;
    cout << &x2<< endl;

    if(&x1 > &x2)
    {
        cout << &x1;
    }else
    cout << &x2;
}
