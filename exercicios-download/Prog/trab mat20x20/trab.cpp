#include <iostream>
#include <stdlib.h>
#include <cstdio>
using namespace std;
int main (){
    int mat [20][20],media=0,x=0,i,j;
    /*gera matriz*/
    for (i=0;i<20;i++){
        for (j=0;j<20;j++){
            mat[i][j]=rand()%10;
        }
    }
    for (i=0;i<20;i++){
        cout<<endl;
        for (j=0;j<20;j++){
            cout<<mat[i][j]<<" ";
        }

    }
    /*linha*/
    for (i=0;i<20;i++){
        for (j=0;j<17;j++){
            media=mat[i][j]+mat[i][j+1]+mat[i][j+2]+mat[i][j+3];
            if(x<media){
                x=media;
            }
        }

    }
    /*coluna*/
    for (i=0;i<17;i++){
        for (j=0;j<20;j++){
            media=mat[i][j]+mat[i+1][j]+mat[i+2][j]+mat[i+3][j];
            if(x<media){
                x=media;
            }
        }

    }
    /*diagonal principal */
    for (i=0;i<17;i++){
        for (j=0;j<17;j++){
            media=mat[i][j]+mat[i+1][j+1]+mat[i+2][j+2]+mat[i+3][j+3];
            if(x<media){
                x=media;
                }
            }
        }

   /*diagonal secundaria */
    for (i=0;i<17;i++){
        for (j=20;j<2;j--){
            media=mat[i][j]+mat[i+1][j-1]+mat[i+2][j-2]+mat[i+3][j-3];
            if(x<media){
                x=media;
                }
            }
        }
  cout<<" teste "<<x/4<<endl;
}
