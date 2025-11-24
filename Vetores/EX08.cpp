#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um numero : ";
    cin >> n;

    int v[n];
    double soma = 0;
    int qtdPares = 0;

    for (int i = 0; i < n; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {   
        if (v[i] % 2 == 0) {
            soma += v[i];
            qtdPares++;
        }
    }

    if (qtdPares == 0) {
        cout << "Nao existem numeros pares" << endl;
        cout  << "Numeros impares: " << " - " << endl;
        for (int i = 0; i < n; i++) {
            cout << v[i] << " - ";
        }
    } else {
        double resul = soma / qtdPares;
        cout << "A media dos numeros pares digitados e: " << resul << endl;
    }

    return 0;
}
