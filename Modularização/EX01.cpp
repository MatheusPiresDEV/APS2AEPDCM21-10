#include <iostream>
#include <cmath>
using namespace std;

double area(double b, double h) { return b*h; }
double perimetro(double b, double h) { return 2*(b+h); }
double diagonal(double b, double h) { return sqrt(b*b+h*h); }

int main() {
    double b,h;
    cin >> b >> h;
    cout << area(b,h) << endl;
    cout << perimetro(b,h) << endl;
    cout << diagonal(b,h) << endl;
}
