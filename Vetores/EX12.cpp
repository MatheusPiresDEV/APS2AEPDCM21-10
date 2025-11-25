#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N;
    cout << "Serao digitadas quantas mercadorias? ";
    cin >> N;

    string nomes[N];
    double compra[N], venda[N];

    for (int i = 0; i < N; i++) {
        cout << "Nome da " << i+1 << "a mercadoria: ";
        cin.ignore(); // limpar buffer
        getline(cin, nomes[i]);
        cout << "Preco de compra: ";
        cin >> compra[i];
        cout << "Preco de venda: ";
        cin >> venda[i];
    }

    int lucroMenor10 = 0;
    int lucroEntre10e20 = 0;
    int lucroMaior20 = 0;
    double totalCompra = 0.0;
    double totalVenda = 0.0;

    for (int i = 0; i < N; i++) {
        double lucroPercentual = (venda[i] - compra[i]) / compra[i] * 100.0;

        if (lucroPercentual < 10.0) {
            lucroMenor10++;
        } else if (lucroPercentual <= 20.0) {
            lucroEntre10e20++;
        } else {
            lucroMaior20++;
        }

        totalCompra += compra[i];
        totalVenda += venda[i];
    }

    double lucroTotal = totalVenda - totalCompra;

    cout << fixed << setprecision(2);
    cout << "\nRELATORIO:\n";
    cout << "Lucro abaixo de 10%: " << lucroMenor10 << endl;
    cout << "Lucro entre 10% e 20%: " << lucroEntre10e20 << endl;
    cout << "Lucro acima de 20%: " << lucroMaior20 << endl;
    cout << "Valor total de compra: " << totalCompra << endl;
    cout << "Valor total de venda: " << totalVenda << endl;
    cout << "Lucro total: " << lucroTotal << endl;

    return 0;
}
