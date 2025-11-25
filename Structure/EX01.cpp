#include <iostream>
#include <iomanip>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
};

int main() {
    Pessoa p1, p2;
    cin >> p1.nome >> p1.idade;
    cin >> p2.nome >> p2.idade;

    double media = (p1.idade + p2.idade) / 2.0;

    cout << fixed << setprecision(1);
    cout << "Idade media de " << p1.nome << " e " << p2.nome << " = " << media << endl;
}
