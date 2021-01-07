#include <iostream>
using namespace std;

int main()
{
int *x1,*x2,num=1, num2=2;
char *s, n=1;


x1=&num;
cout << x1 << endl;

x2=&num2;
cout << x2<< endl;

s=&n;
cout << s<< endl;


*x1=2;
cout << *x1 << endl<< &x1 << endl;

*x2=3;
cout << *x2 << endl << &x2 << endl;

*s=2;
cout << *s << endl << &s;

}
