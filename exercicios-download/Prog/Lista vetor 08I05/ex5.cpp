#include <iostream>
using namespace std;

int main() {
    int vet[5], maior=-1;
    float vetr[5];

    for(int i=0; i<5; i++) {
        cin >> vet[i];
        while(vet[i]<0 || vet[i]>9) {
            cout << "Entre com outro valor"<< endl;
            cin >> vet[i];

        }
    }
    for (int i=0; i<5; i++) {
        if(vet[i]> maior) {
            maior=vet[i];

        }

    }
    for (int i=0; i<5; i++)
        cout << vet[i] << "\t";
    cout << endl;
    cout << "O maior valor e:" <<maior << endl;

    for(int i=0; i<5; i++) {
        cout << "Valor "<< i <<" " << (float(vet[i]))/maior << endl;
        vetr[i]= vet[i]/maior;
        cout << vetr[i];
    }


}
