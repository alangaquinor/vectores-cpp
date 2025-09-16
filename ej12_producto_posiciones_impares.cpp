// Desarrolle un programa que defina un vector de números y calcule el producto de los elementos en posiciones impares del vector.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> numeros = {3, 5, 7, 8, 10, 2, 14, 16}; 

    int producto = 1;
    for (size_t i = 0; i < numeros.size(); i++) {
        if (i % 2 != 0) {	// Verificar si el índice es impar.
            producto *= numeros[i];
        }
    }

    cout << "Vector original: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    cout << "El producto de los elementos en posiciones impares es: " << producto << endl;

    return 0;
}

