#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quantos casos voce vai digitar? ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        double a, b;
        cout << "Digite dois numeros: ";
        cin >> a >> b;

        if (b == 0) {
            cout << "DIVISAO IMPOSSIVEL" << endl;
        } else {
            double resultado = a / b;
            cout << fixed << setprecision(2);
            cout << resultado << endl;
        }
    }

    return 0;
}
