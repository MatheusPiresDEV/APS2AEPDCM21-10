#include <iostream>
using namespace std;

int main()
{

    int den;
    cout << "Digite um numero : ";
    cin >> den;

    double n[den],resul,media;

    for (int i=0; i<den; i++){
        cout << "Digite o numero " << i+1 << ": ";
        cin >> n[i];
        resul += n[i];
    }
    media = resul/den;

    cout << endl <<"A soma dos numeros digitados e: " << resul << endl;
    cout << endl <<"A media dos numeros digitados e: " << media << endl;
}