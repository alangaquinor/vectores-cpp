// Escribe un programa que defina un vector de números y encuentre el segundo mayor elemento del vector.

#include <iostream>
#include <vector>
#include <climits> // Para INT_MIN
using namespace std;

int main() {
    int n;
    cout << "Introduce la cantidad de elementos en el vector: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Introduce " << n << " números:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    if (n < 2) {
        cout << "Se necesita al menos dos elementos para encontrar el segundo mayor." << endl;
        return 1;
    }

    int mayor = INT_MIN, segundo_mayor = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (vec[i] > mayor) {
            segundo_mayor = mayor;  // El mayor actual pasa a ser el segundo mayor.
            mayor = vec[i];         // Actualizamos el mayor.
        } else if (vec[i] > segundo_mayor && vec[i] < mayor) {
            segundo_mayor = vec[i]; // Actualizamos el segundo mayor.
        }
    }

    if (segundo_mayor == INT_MIN) {
        cout << "No hay un segundo mayor elemento, todos los elementos son iguales." << endl;
    } else {
        cout << "El segundo mayor elemento es: " << segundo_mayor << endl;
    }

    return 0;
}

