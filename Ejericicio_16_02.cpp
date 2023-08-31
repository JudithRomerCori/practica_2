// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 16

// Problema planteado:Crear un vector de 5 elementos de cadenas de caracteres, inicializa el vector con datos leídos por el teclado. Copia los elementos del vector en otro vector pero en orden inverso, y muéstralo por la pantalla.

#include <iostream>
#include <vector>
#include <string>

int main() {
    // Crear un vector de cadenas de caracteres
    vector<string> cadenas(5);

    // Inicializar el vector con datos ingresados por el usuario
    cout << "Ingrese 5 cadenas de caracteres:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Cadena " << i + 1 << ": ";
        cin >> cadenas[i];
    }

    // Crear un segundo vector para almacenar los elementos en orden inverso
    vector<string> inverso(5);

    // Copiar los elementos en orden inverso al segundo vector
    for (int i = 0; i < 5; ++i) {
        inverso[i] = cadenas[4 - i];
    }

    // Mostrar los elementos del vector inverso en pantalla
    cout << "Elementos en orden inverso:" << endl;
    for (const string& elemento : inverso) {
        cout << elemento << endl;
    }

    return 0;
}
