// Hacer un programa que defina un vector de n�meros y calcule la suma de los elementos en posiciones pares del vector.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Introduce la cantidad de elementos en el vector: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Introduce " << n << " n�meros:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int suma = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {  // Si la posici�n es par (�ndice 0, 2, 4, ...).
            suma += vec[i];
        }
    }

    cout << "\nLa suma de los elementos en posiciones pares es: " << suma << endl;

    return 0;
}

