#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Qual a ordem da matriz? ";
    cin >> N;

    int mat[10][10]; // limite máximo 10x10
    int soma = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
            if (j > i) { // condição para estar acima da diagonal principal
                soma += mat[i][j];
            }
        }
    }

    cout << "\nSOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << soma << endl;

    return 0;
}
