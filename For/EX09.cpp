#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quantos casos de teste serao digitados? ";
    cin >> N;

    int total = 0;
    int coelhos = 0, ratos = 0, sapos = 0;

    for (int i = 0; i < N; i++) {
        int quantidade;
        char tipo;
        cout << "Quantidade de cobaias do experimento " << i+1 << ": ";
        cin >> quantidade;
        cout << "Tipo de cobaia (C/R/S): ";
        cin >> tipo;

        total += quantidade;

        if (tipo == 'C' || tipo == 'c') {
            coelhos += quantidade;
        } else if (tipo == 'R' || tipo == 'r') {
            ratos += quantidade;
        } else if (tipo == 'S' || tipo == 's') {
            sapos += quantidade;
        }
    }

    cout << "\nRELATORIO FINAL:\n";
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;

    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << (double)coelhos / total * 100.0 << " %" << endl;
    cout << "Percentual de ratos: " << (double)ratos / total * 100.0 << " %" << endl;
    cout << "Percentual de sapos: " << (double)sapos / total * 100.0 << " %" << endl;

    return 0;
}
