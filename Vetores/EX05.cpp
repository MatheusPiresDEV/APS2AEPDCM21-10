#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quanto numeros voce vai digitar? ";
    cin >> N;

    double v[N];

    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> v[i];
    }

    double maior = v[0];
    int posicao = 0;

    for (int i = 1; i < N; i++) {
        if (v[i] > maior) {
            maior = v[i];
            posicao = i;
        }
    }

    cout << fixed << setprecision(1);
    cout << "MAIOR VALOR = " << maior << endl;
    cout << "POSICAO DO MAIOR VALOR = " << posicao << endl;

    return 0;
}
