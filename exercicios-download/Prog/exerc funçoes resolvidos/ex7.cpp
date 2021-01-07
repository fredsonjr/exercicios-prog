#include <iostream>
using namespace std;
int triangulo(int x, int y, int z);

int main()
{
    int x, y, z;
    cout << "ENtre com os angulos";
    cin >> x >> y >> z;
    triangulo(x,y,z);
}
int triangulo(int x, int y, int z)
{
  if((x+y+z)==180)
  {
      if(x==y&&y==z)
      {
          cout << "O triangulo e equilatero";
      }
      else if(x!=y && y!=z && x!=z)
      {
          cout << "O triangulo e escaleno";
      }
      else
        cout << "O triangulo e isoceles";
  }
  else
    cout << "Nao e um triangulo";
}
