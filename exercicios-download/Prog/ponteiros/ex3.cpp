#include <iostream>
using namespace std;

int main()
{
    int *x1, *x2;
    int num1=1, num2=2;

    x1=&num1;
    x2=&num2;

    if(&num1>&num2)
    {
        cout << num1;
    }else
    cout << num2;


}
