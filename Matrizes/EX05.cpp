#include <iostream>
using namespace std;

int main() {
    int M, N;
    cout << "Quantas linhas vai ter cada matriz? ";
    cin >> M;
    cout << "Quantas colunas vai ter cada matriz? ";
    cin >> N;

    int A[10][10], B[10][10], C[10][10];

    cout << "Digite os valores da matriz A:\n";
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "Digite os valores da matriz B:\n";
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> B[i][j];
        }
    }

    // Soma das matrizes
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "\nMATRIZ SOMA:\n";
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
