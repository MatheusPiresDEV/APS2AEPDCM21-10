#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Digite um numero natural (maximo 15): ";
    cin >> N;

    if (N < 0 || N > 15) {
        cout << "Valor invalido! O numero deve estar entre 0 e 15." << endl;
    } else {
        long long fat = 1;
        for (int i = 1; i <= N; i++) {
            fat *= i;
        }
        cout << "FATORIAL = " << fat << endl;
    }

    return 0;
}
