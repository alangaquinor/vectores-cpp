// Escribe un programa que lea de la entrada estándar un vector de números y muestre en la salida estándar los números del vector con sus índices asociados.

#include <iostream>
#include <vector>

int main() {
    int n;

    std::cout << "¿Cuántos números desea ingresar? ";
    std::cin >> n;

    std::vector<int> numeros(n);

    std::cout << "Introduce los " << n << " números:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> numeros[i];
    }

    std::cout << "Elementos del vector con sus índices:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Índice " << i << ": " << numeros[i] << std::endl;
    }

    return 0;
}

