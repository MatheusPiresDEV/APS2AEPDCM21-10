#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    double a[n], b[n], c[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

        for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    cout << "VETOR RESULTANTE: " << endl;

    for(int i =0; i<n; i++){
        c[i] = a[i] + b[i];
        cout << c[i] << endl;
    }
    

    return 0;
}