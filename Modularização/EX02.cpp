#include <iostream>
#include <iomanip>
using namespace std;

void lerDados(int &id, double &horas, double &valorHora) {
    cin >> id >> horas >> valorHora;
}

double calcularPagamento(double horas, double valorHora) {
    return horas * valorHora;
}

void exibirPagamento(int id, double pagamento) {
    cout << "ID = " << id << endl;
    cout << fixed << setprecision(2);
    cout << "PAGAMENTO = " << pagamento << endl;
}

int main() {
    int id;
    double horas, valorHora;
    lerDados(id, horas, valorHora);
    double pagamento = calcularPagamento(horas, valorHora);
    exibirPagamento(id, pagamento);
}
