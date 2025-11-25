#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Deseja a tabuada de qual numero? ";
    cin >> N;

    for (int i = 1; i <= 10; i++) {
        cout << N << " x " << i << " = " << N * i << endl;
    }

    return 0;
}
