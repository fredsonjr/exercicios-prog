#include <iostream>
#include <cmath>

using namespace std;

const int TAM = 100;//VARIAVEL GLOBAL

void carrega(int v[TAM]){

    int i;
    char uto;
    v[0]=0;

    for(i=1;i<TAM;i++){
        cout <<"Entra "<<i<<" : ";
        cin >> v[i];
        v[0]++;
        cout <<"Continua (s/n): ";
        cin >> uto;
        if (uto=='n'){
            break;
        }
    }
}

void imprime (int v[TAM]){

    int i;

    for (i=1; i<=v[0]; i++){
        cout << v[i] << " ";
    }
    cout <<endl;
}

//void somav (int v[TAM]){

   // int i,s=0;

   // for (i=1; i<=v[0];i++){
      //  s = s + v[i];
   // }
   // cout << "O somatorio eh " <<s<<endl;
    //cout << endl;
//}

int somav (int v[TAM]){

    int i,s=0;

    for (i=1;i<=v[0];i++){
        s=s+v[i];
    }
    return(s);
}

//void mediav (int v[TAM]){

    //int i,s=0;
   // float m=0;

    //for (i=1; i<=v[0];i++){
       // s = s + v[i];
    //}
    //m = s/v[0];
   // cout << "A media eh " <<m<<endl;
    //cout << endl;
//}

float mediav(int v[TAM]){

     float m;

     m=(float)somav(v)/v[0];

     return(m);
}

void desviov (int v[TAM]){

    int i;
    float d=0,m=0,s=0,var=0,desvio=0;

    for (i=1; i<=v[0];i++){
        s = s + v[i];
    }
    m = s/v[0];
    for (i=1; i<=v[0];i++){
    d = d + ((v[i]-m)*(v[i]-m));
    }
    var = d/v[0];
    desvio = sqrt(var);
    cout << "O desvio padrao eh "<<desvio<<endl;
    cout <<endl;
}

//float desviopadrao(int v[TAM]){

   // int i,s=0;
   // float m;

   // m=mediav(v);

   // for (i=1; i<=v[0];i++){

       //  s=s+( (v[i]-m)*(v[i]-m));  //s+pow((v[1]-m),2)
  //  }
   // s=(s/v[0]);
  //  return(s);
//}

void alterav (int v[TAM], int x ){

     int i;

     for (i=1;i<=v[0];i++){
        v[i]=v[i]+x;
     }
}

int menorvalor (int v[TAM]){

    int i,menor;

    menor=v[1];

    for (i=1;i<=v[0];i++){
        if (v[i]<menor){
            menor=v[i];
        }
    }
    return(menor);
}

int maiorvalor (int v[TAM]){

    int i,maior;

    maior=v[1];

    for (i=1;i<=v[0];i++){
        if (v[i]>maior){
            maior=v[i];
        }
    }
    return(maior);
}

int qdiv(int n){

      int i,r, q=0;

      for (i=1;i<=n;i++){
        r = n%i;
        if (r==0){
            q++;
        }
    }
    return (q);
}

bool ehprimo(int n){

    if (qdiv(n)==2){
        return true;
    }else{
        return false;
    }
}

void soprimos(int v[TAM]){

      int i;

      for (i=1;i<=v[0];i++){
           if (ehprimo(v[i])){
            cout << v[i] << " ";
           }
      }
      cout << endl;
}
// for(int j=0; j<n; j++)

//for(int i=0; i<n-1; i++)

//if(v>v[i+1]){

//aux=v;

//v=v[i+1];

//v[i+1]=aux;

//}


int main () {

    char op;
    int s,x,mv,p,v[TAM]; //v[TAM];
    float m;
    v[0]=0;

    while (1){
        cout << "MENU:"<<endl;
        cout << "a) Entrar inteiros positivos"<<endl;
        cout << "b) Somar numero inteiro"<<endl;
        cout << "c) Media do numero inteiro"<<endl;
        cout << "d) Desvio padrao numero inteiro"<<endl;

        cout << "e) somar xy a cada termo"<<endl;
        cout << "f) Mostrar o menor valor xy"<<endl;
        cout << "g) Mostrar o maior valor de xy"<<endl;
        cout << "h) Imprime os valores xy"<<endl;

        cout << "i) Ordena numero inteiro positivo"<<endl;
        cout << "j) Retorna mediana do numero inteiro"<<endl;
        cout << "k) Retorna a norma do numero inteiro"<<endl;
        cout << "l) Carrega dados novo numero inteiro positivo w[TAM]"<<endl;
        cout << "m) Retorna distancia entre os pontos de v e w do numero inteiro"<<endl;
        cout << "z) Imprimir o numero inteiro"<<endl;
        cin >> op;
        switch (op){
            case 'a':
                carrega(v);
                break;
            //case 'b':
               // somav(v);
               // break;
            case 'b':
                s=somav(v);
                cout << " A soma do numero inteiro postivo eh " <<s<<endl;
               break;
             //case 'c':
               // mediav(v);
                //break;
            case 'c':
                m=mediav(v);
                cout << " A media numero inteiro postivo eh "  <<m<<endl;
                break;
                //case 'd':
                //dp=desviopadrao(v);
                //cout << " O Desviao padrao do vetor eh "  <<dp<<endl;
               // break;
           case 'd':
                desviov(v);
                break;
           case 'e':
               cout << "Entra x: ";
                   cin >>x;
                   alterav(v,x);
           case 'f':
               mv=menorvalor(v);
                cout << " O menor valor xy eh " <<mv<<endl;
                break;
          case 'g':
               mv=maiorvalor(v);
                cout << " O maior valor do xy eh " <<mv<<endl;
                break;
         case 'h':
                soprimos(v);
                break;

                //(v);
               // break;
           // case 'f':
                //desviov(v);
               // break;
            //case 'g':
               // desviov(v);
               // break;
           // case 'h':
               // desviov(v);
                //break;
         case 'z':
                imprime(v);
                break;
        default:
            return (0);
        }
    }
}
