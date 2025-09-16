// Realice un programa que defina un vector de n�meros y determine cu�ntos elementos son mayores que el promedio de los elementos del vector.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> numeros = {10, 20, 30, 40, 50};

    double suma = 0;
    for (int num : numeros) {
        suma += num;
    }

    double promedio = suma / numeros.size();

    int contador = 0;
    for (int num : numeros) {
        if (num > promedio) {
            contador++;
        }
    }

    cout << "Promedio: " << promedio << endl;
    cout << "Cantidad de elementos mayores que el promedio: " << contador << endl;

    return 0;
}

