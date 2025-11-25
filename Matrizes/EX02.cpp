#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int M, N;
    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> M;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> N;

    double mat[10][10];   // matriz com limite máximo 10x10
    double soma[10];      // vetor para armazenar as somas das linhas

    for (int i = 0; i < M; i++) {
        cout << "Digite os elementos da " << i+1 << "a. linha:\n";
        soma[i] = 0.0;
        for (int j = 0; j < N; j++) {
            cin >> mat[i][j];
            soma[i] += mat[i][j];
        }
    }

    cout << "\nVETOR GERADO:\n";
    cout << fixed << setprecision(1);
    for (int i = 0; i < M; i++) {
        cout << soma[i] << endl;
    }

    return 0;
}
