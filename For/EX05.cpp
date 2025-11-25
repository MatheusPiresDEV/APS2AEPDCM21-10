#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        int X;
        cout << "Digite um numero: ";
        cin >> X;

        if (X == 0) {
            cout << "NULO" << endl;
        } else {
            if (X % 2 == 0) {
                cout << "PAR ";
            } else {
                cout << "IMPAR ";
            }

            if (X > 0) {
                cout << "POSITIVO" << endl;
            } else {
                cout << "NEGATIVO" << endl;
            }
        }
    }

    return 0;
}
