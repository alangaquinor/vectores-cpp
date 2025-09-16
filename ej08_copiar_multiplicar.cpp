// Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo.

#include <iostream>
using namespace std;

int main() {
    int arr1[5], arr2[5]; 
    cout << "Introduce 5 números:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Número " << i+1 << ": ";
        cin >> arr1[i];
    }

    for (int i = 0; i < 5; i++) {
        arr2[i] = arr1[i] * 2;
    }

    cout << "\nEl segundo arreglo con los números multiplicados por 2 es:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}

