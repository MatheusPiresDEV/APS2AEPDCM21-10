#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    int dentro = 0, fora = 0;

    for (int i = 0; i < N; i++) {
        int X;
        cout << "Digite um numero: ";
        cin >> X;

        if (X >= 10 && X <= 20) {
            dentro++;
        } else {
            fora++;
        }
    }

    cout << dentro << " DENTRO" << endl;
    cout << fora << " FORA" << endl;

    return 0;
}
