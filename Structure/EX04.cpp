#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct Aluno {
    string nome;
    double nota1;
    double nota2;
};

int main() {
    int N;
    cin >> N;
    vector<Aluno> alunos(N);

    for (int i = 0; i < N; i++) {
        cin >> alunos[i].nome >> alunos[i].nota1 >> alunos[i].nota2;
    }

    cout << fixed << setprecision(2);
    for (int i = 0; i < N; i++) {
        double media = (alunos[i].nota1 + alunos[i].nota2) / 2.0;
        if (media >= 6.0) {
            cout << alunos[i].nome << " - " << media << endl;
        }
    }
}
