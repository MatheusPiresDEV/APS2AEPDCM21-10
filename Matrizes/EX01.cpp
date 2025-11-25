#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Qual a ordem da matriz? ";
    cin >> N;

    int mat[10][10]; // limite máximo 10
    int negativos = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
            if (mat[i][j] < 0) {
                negativos++;
            }
        }
    }

    cout << "\nDIAGONAL PRINCIPAL:" << endl;
    for (int i = 0; i < N; i++) {
        cout << mat[i][i] << " ";
    }
    cout << endl;

    cout << "QUANTIDADE DE NEGATIVOS = " << negativos << endl;

    return 0;
}
