#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    string nomes[N];
    int idades[N];
    double alturas[N];

    double somaAlturas = 0;
    int menores16 = 0;

    for (int i = 0; i < N; i++) {
        cout << "Dados da " << i+1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin >> nomes[i];
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];

        somaAlturas += alturas[i];
        if (idades[i] < 16) {
            menores16++;
        }
    }

    double mediaAlturas = somaAlturas / N;
    double porcentagemMenores16 = (double)menores16 * 100.0 / N;

    cout << fixed << setprecision(2);
    cout << "Altura media: " << mediaAlturas << endl;
    cout << "Pessoas com menos de 16 anos: " 
         << fixed << setprecision(1) << porcentagemMenores16 << "%" << endl;

    for (int i = 0; i < N; i++) {
        if (idades[i] < 16) {
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
