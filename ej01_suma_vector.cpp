// Escribe un programa que defina un vector de números y calcule la suma de sus elementos.

#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    int suma = 0;

    for (int numero : numeros) {
        suma += numero;
    }

    std::cout << "La suma de los elementos del vector es: " << suma << std::endl;

    return 0;
}

