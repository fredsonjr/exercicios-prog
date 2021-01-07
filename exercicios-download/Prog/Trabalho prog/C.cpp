#include <iostream>
using namespace std;
#include <locale.h>


int triangulo();

int main()
{

    int x;

   x= triangulo();
   cout <<x << "º quadrante";

}
int triangulo()
{
    setlocale(LC_ALL, "Portuguese");

  int x, y;
  cout << "Entre com um angulo:";
  cin >> y;
  x=y%360;

  if (x>0 && x<=90 || x>= -360 && x<=-270 )
        return 1;
  else if(x>90 && x<=180 ||x> -270 && x <= -180)
    return 2;
  else if (x>180 && x<=270 || x> -180 && x <= -90)
    return 3;
    else
    return 4;
}
