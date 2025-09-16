// Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine el mayor elemento del vector.

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

    int mayor = numeros[0];

    for (int i = 1; i < n; ++i) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    std::cout << "El mayor elemento del vector es: " << mayor << std::endl;

    return 0;
}

