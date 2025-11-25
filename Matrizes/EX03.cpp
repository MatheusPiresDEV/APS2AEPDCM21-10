#include <iostream>
using namespace std;

int main() {
    int M, N;
    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> M;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> N;

    int mat[10][10]; // limite máximo 10x10

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "\nVALORES NEGATIVOS:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (mat[i][j] < 0) {
                cout << mat[i][j] << endl;
            }
        }
    }

    return 0;
}
