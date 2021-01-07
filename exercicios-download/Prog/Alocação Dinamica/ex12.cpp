#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
  int *loteria, *bilhete, *corretos; // ponteiros
  int lot = 6, bil = 6; // tamanho do vetor
  int i, j, k, acertou = 0; // controle


 loteria = new int[lot];  // aloca��o para loetria
 bilhete = new int[bil]; // aloca��o para bilhete


 for (i=0; i < lot; i++){
   cout << "Informe os n�meros da loteria: "; // preenchendo loteria;
   cin >> loteria[i];
 }
 for (j=0; j < bil; j++){
   cout << "Informe os n�meros do seu bilhete: "; // preenchendo bilhete;
   cin >> bilhete[j];
 }
  for (i=0; i<6; i++){
    for (j=0; j<6; j++){
      if (loteria[i] == bilhete[j]){  // fazendo a compara��o
        acertou ++;                 // se a compara��o for igual incrementa
      }
    }
  }
  cout << "Numeros corretos:"<< acertou << endl;
  corretos = new int[acertou];  //alocando memoria para numeros corretos

    for (i=0; i<6; i++){
    for (j=0; j<6; j++){
      if (loteria[i] == bilhete[j]){ //
        corretos[i] = loteria[i];
      }
    }
  }
    for (i= 0; i < acertou; i++){
      if (bilhete[i] == loteria[i]){
        corretos[i] = bilhete[i];
      }
    }
  cout << "N�meros sorteados na bilheteria: "<<endl;
  for (i=0; i < lot; i++){
   cout << loteria[i] << endl;
 }
  cout << "N�meros corretos: "<<endl;
  for (i= 0; i < acertou; i++){
      cout << corretos[i] << endl;
  }
    delete []loteria;
    delete []bilhete;
    delete []corretos;
}
