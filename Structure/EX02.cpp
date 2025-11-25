#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct Funcionario {
    string nome;
    double valorHora;
    double horas;
};

int main() {
    int N;
    cin >> N;
    vector<Funcionario> funcionarios(N);

    for (int i = 0; i < N; i++) {
        cin >> funcionarios[i].nome >> funcionarios[i].valorHora >> funcionarios[i].horas;
    }

    cout << fixed << setprecision(2);
    for (int i = 0; i < N; i++) {
        double pagamento = funcionarios[i].valorHora * funcionarios[i].horas;
        cout << funcionarios[i].nome << " - " << pagamento << endl;
    }
}
