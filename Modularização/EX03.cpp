#include <iostream>
#include <iomanip>
using namespace std;

double areaQuadrado(double lado) {
    return lado * lado;
}

double areaTriangulo(double base, double altura) {
    return (base * altura) / 2.0;
}

double areaTrapezio(double baseMaior, double baseMenor, double altura) {
    return ((baseMaior + baseMenor) * altura) / 2.0;
}

int main() {
    double baseMaior, baseMenor, altura;
    cin >> baseMaior >> baseMenor >> altura;

    cout << fixed << setprecision(4);
    cout << areaQuadrado(baseMaior) << endl;
    cout << areaTriangulo(baseMaior, altura) << endl;
    cout << areaTrapezio(baseMaior, baseMenor, altura) << endl;
}
