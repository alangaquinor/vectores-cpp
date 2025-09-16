// Escribe un programa que lea de la entrada est�ndar un vector de n�meros y muestre en la salida est�ndar los n�meros del vector con sus �ndices asociados.

#include <iostream>
#include <vector>

int main() {
    int n;

    std::cout << "�Cu�ntos n�meros desea ingresar? ";
    std::cin >> n;

    std::vector<int> numeros(n);

    std::cout << "Introduce los " << n << " n�meros:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> numeros[i];
    }

    std::cout << "Elementos del vector con sus �ndices:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "�ndice " << i << ": " << numeros[i] << std::endl;
    }

    return 0;
}

