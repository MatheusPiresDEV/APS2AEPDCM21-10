#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quantos casos voce vai digitar? ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        double a, b, c;
        cout << "Digite os tres numeros do caso " << i+1 << ": ";
        cin >> a >> b >> c;

        double media = (a*2.0 + b*3.0 + c*5.0) / (2.0 + 3.0 + 5.0);

        cout << fixed << setprecision(1);
        cout << "MEDIA PONDERADA = " << media << endl;
    }

    return 0;
}
