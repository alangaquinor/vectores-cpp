// Escribe un programa que defina un vector de n�meros y calcule el promedio de sus elementos.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros = {4, 8, 15, 16, 23, 42};

    if (numeros.empty()) {
        cout << "El vector est� vac�o. No se puede calcular el promedio." << endl;
        return 0;
    }

    int suma = 0;
    for (int num : numeros) {
        suma += num;
    }

    double promedio = static_cast<double>(suma) / numeros.size();

    cout << "Vector original: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    cout << "El promedio de los elementos del vector es: " << promedio << endl;

    return 0;
}

