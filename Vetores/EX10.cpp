#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N;
    cout << "Quantos alunos serao digitados? ";
    cin >> N;

    string nomes[N];
    double nota1[N], nota2[N];

    for (int i = 0; i < N; i++) {
        cout << "Digite nome, primeira e segunda nota do " << i+1 << "o aluno:\n";
        cin.ignore(); // limpa o buffer para ler nomes com espaço
        getline(cin, nomes[i]);
        cin >> nota1[i];
        cin >> nota2[i];
    }

    cout << "\nAlunos aprovados:\n";
    for (int i = 0; i < N; i++) {
        double media = (nota1[i] + nota2[i]) / 2.0;
        if (media >= 6.0) {
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
