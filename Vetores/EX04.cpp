#include <iostream>
using namespace std;

int main()
{
    int n, aux = 0;
    cin >> n;
    int v[n], p[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {

            p[aux] = v[i];
            aux++;
        }
    }

    cout << "Quantidade de pares = " << aux << endl;

    cout << endl
         << "Numeros pares: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << p[i] << endl;
    }

    return 0;
}
