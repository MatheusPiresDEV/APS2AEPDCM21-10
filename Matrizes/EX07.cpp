#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Qual a ordem da matriz? ";
    cin >> N;

    double mat[10][10]; // matriz com limite máximo 10x10
    double somaPositivos = 0.0;

    // leitura da matriz
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
            if (mat[i][j] > 0) {
                somaPositivos += mat[i][j];
            }
        }
    }

    cout << fixed << setprecision(1);
    // a) soma dos positivos
    cout << "\nSOMA DOS POSITIVOS: " << somaPositivos << endl;

    // b) leitura de índice de linha
    int linha;
    cout << "Escolha uma linha: ";
    cin >> linha;
    cout << "ELEMENTOS DA LINHA " << linha << ": ";
    for (int j = 0; j < N; j++) {
        cout << mat[linha][j] << " ";
    }
    cout << endl;

    // c) leitura de índice de coluna
    int coluna;
    cout << "Escolha uma coluna: ";
    cin >> coluna;
    cout << "ELEMENTOS DA COLUNA " << coluna << ": ";
    for (int i = 0; i < N; i++) {
        cout << mat[i][coluna] << " ";
    }
    cout << endl;

    // d) diagonal principal
    cout << "DIAGONAL PRINCIPAL: ";
    for (int i = 0; i < N; i++) {
        cout << mat[i][i] << " ";
    }
    cout << endl;

    // e) alterar matriz (quadrado dos negativos)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (mat[i][j] < 0) {
                mat[i][j] = mat[i][j] * mat[i][j];
            }
        }
    }

    cout << "\nMATRIZ ALTERADA:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
