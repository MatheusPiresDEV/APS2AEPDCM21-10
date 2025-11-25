#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cout << "Digite dois numeros:\n";
    cin >> X >> Y;

   
    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }

    int soma = 0;
    for (int i = X + 1; i < Y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    cout << "SOMA DOS IMPARES = " << soma << endl;

    return 0;
}
