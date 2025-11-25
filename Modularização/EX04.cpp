#include <iostream>
#include <vector>
using namespace std;

void lerVetor(vector<int> &v, int &N) {
    cin >> N;
    v.resize(N);
    for (int i = 0; i < N; i++) cin >> v[i];
}

double media(const vector<int> &v) {
    double soma = 0;
    for (int x : v) soma += x;
    return soma / v.size();
}

void maiorMenor(const vector<int> &v) {
    int maior = v[0], menor = v[0];
    for (int x : v) {
        if (x > maior) maior = x;
        if (x < menor) menor = x;
    }
    cout << "Maior = " << maior << ", Menor = " << menor << endl;
}

int contarPares(const vector<int> &v) {
    int c = 0;
    for (int x : v) if (x % 2 == 0) c++;
    return c;
}

int main() {
    vector<int> v;
    int N = 0, op;
    do {
        cout << "1 - Ler vetor\n2 - Media\n3 - Maior e menor\n4 - Contar pares\n5 - Sair\n";
        cin >> op;
        if (op == 1) lerVetor(v, N);
        else if (op == 2 && !v.empty()) cout << "Media = " << media(v) << endl;
        else if (op == 3 && !v.empty()) maiorMenor(v);
        else if (op == 4 && !v.empty()) cout << "Pares = " << contarPares(v) << endl;
    } while (op != 5);
}
