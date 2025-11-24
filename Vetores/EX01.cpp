#include <iostream>
using namespace std;

int main (){

    int n;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int  v[n], nega[n];

    if(n > 10){
        cout << "Tamanho maximo permitido 10." << endl;
        return 0;
    }

    for (int  i = 0; i < n; i++)
    {
        cout << "Digite o valor do numero " << i << ": ";
        cin >> v[i];
        if(v[i] < 0){
            nega[i] = v[i];
        }
    }
    cout << endl << "Numeros negativos: " << endl;
    for (int  i = 0; i < n; i++){
        cout << i << "ª = " << nega[i] << endl;
    }   

}