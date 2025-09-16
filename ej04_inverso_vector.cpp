// Escribe un programa que defina un vector de números y muestre en la salida estándar el vector en orden inverso del último al primer elemento.

#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> numeros = {10, 20, 30, 40, 50};

    std::cout << "Elementos del vector en orden inverso:" << std::endl;

    for (int i = numeros.size() - 1; i >= 0; --i) {
        std::cout << numeros[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}

