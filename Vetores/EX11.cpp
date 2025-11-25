#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    double alturas[N];
    char generos[N];

    for (int i = 0; i < N; i++) {
        cout << "Altura da " << i+1 << "a pessoa: ";
        cin >> alturas[i];
        cout << "Genero da " << i+1 << "a pessoa: ";
        cin >> generos[i];
    }

    double menor = alturas[0];
    double maior = alturas[0];
    double somaMulheres = 0.0;
    int qtdMulheres = 0;
    int qtdHomens = 0;

    for (int i = 0; i < N; i++) {
        if (alturas[i] < menor) menor = alturas[i];
        if (alturas[i] > maior) maior = alturas[i];

        if (generos[i] == 'F' || generos[i] == 'f') {
            somaMulheres += alturas[i];
            qtdMulheres++;
        } else {
            qtdHomens++;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Menor altura = " << menor << endl;
    cout << "Maior altura = " << maior << endl;
    if (qtdMulheres > 0) {
        cout << "Media das alturas das mulheres = " << somaMulheres / qtdMulheres << endl;
    } else {
        cout << "Nao ha mulheres para calcular a media." << endl;
    }
    cout << "Numero de homens = " << qtdHomens << endl;

    return 0;
}
