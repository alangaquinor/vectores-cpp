// Realiza un programa que defina dos vectores de caracteres y después almacene el contenido de ambos vectores en un nuevo vector, situando en primer lugar los elementos del primer vector seguido por los elementos del segundo vector. Muestre el contenido del nuevo vector en la salida estándar.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<char> vector1 = {'H', 'o', 'l', 'a'};
    vector<char> vector2 = {' ', 'p', 'r', 'o', 'f', 'e'};

    vector<char> combinado;

    for (char c : vector1) {
        combinado.push_back(c);
    }

    for (char c : vector2) {
        combinado.push_back(c);
    }

    cout << "Vector combinado: ";
    for (char c : combinado) {
        cout << c;
    }
    cout << endl;

    return 0;
}

