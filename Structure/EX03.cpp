#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
    double altura;
};

int main() {
    int N;
    cin >> N;
    vector<Pessoa> pessoas(N);

    for (int i = 0; i < N; i++) {
        cin >> pessoas[i].nome >> pessoas[i].idade >> pessoas[i].altura;
    }

    double somaAlturas = 0;
    int menores16 = 0;
    for (int i = 0; i < N; i++) {
        somaAlturas += pessoas[i].altura;
        if (pessoas[i].idade < 16) menores16++;
    }

    double mediaAltura = somaAlturas / N;
    double percentual = (double)menores16 / N * 100.0;

    cout << fixed << setprecision(2);
    cout << "Altura media = " << mediaAltura << endl;
    cout << "Percentual menores de 16 = " << percentual << "%" << endl;

    for (int i = 0; i < N; i++) {
        if (pessoas[i].idade < 16) cout << pessoas[i].nome << endl;
    }
}
