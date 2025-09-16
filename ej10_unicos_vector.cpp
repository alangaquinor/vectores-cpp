// Realiza un programa que defina un vector de n�meros y encuentre los elementos �nicos del vector.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Introduce la cantidad de elementos en el vector: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Introduce " << n << " n�meros:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    cout << "\nElementos �nicos en el vector:" << endl;
    bool encontrado = false;

    for (int i = 0; i < n; i++) {
        bool es_unico = true;
        for (int j = 0; j < n; j++) {
            if (i != j && vec[i] == vec[j]) {
                es_unico = false;
                break;
            }
        }
        if (es_unico) {
            cout << vec[i] << " ";
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "No hay elementos �nicos en el vector." << endl;
    }

    return 0;
}

