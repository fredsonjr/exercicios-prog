#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int mat[4][4], soma=0;

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
          mat[i][j]=rand()%10;
        }
    }
    for(int i=0; i<4; i++)
    {
        cout << endl;
        for(int j=0; j<4; j++)
        {
            cout << mat[i][j] << " ";
        }


}
for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(i>=j)
            {
                soma+=mat[i][j];
            }
        }

}
 cout << endl;
        cout << soma;
}
