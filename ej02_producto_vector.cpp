// Escribe un programa que defina un vector de n�meros y calcule la multiplicaci�n acumulada de sus elementos.

#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    int producto = 1;

    for (int numero : numeros) {
        producto *= numero;
    }

    std::cout << "La multiplicaci�n acumulada de los elementos del vector es: " << producto << std::endl;

    return 0;
}

