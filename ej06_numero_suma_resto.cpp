// Escribe un programa que defina un vector de números y calcule si existe algún número en el vector cuyo valor equivale a la suma del resto de números del vector.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> numeros = {2, 4, 6, 12};

    int sumaTotal = 0;
    for (int num : numeros) {
        sumaTotal += num;
    }

    bool encontrado = false;
    for (int num : numeros) {
        if (num == sumaTotal - num) {
            cout << "Encontrado: " << num << " es igual a la suma del resto de los números." << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "No existe ningún número que sea igual a la suma del resto." << endl;
    }

    return 0;
}

