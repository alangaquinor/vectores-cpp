// Escribe un programa que defina un vector de n�meros y calcule si existe alg�n n�mero en el vector cuyo valor equivale a la suma del resto de n�meros del vector.

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
            cout << "Encontrado: " << num << " es igual a la suma del resto de los n�meros." << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "No existe ning�n n�mero que sea igual a la suma del resto." << endl;
    }

    return 0;
}

