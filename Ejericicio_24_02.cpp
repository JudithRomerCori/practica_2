// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 24

// Problema planteado:Leer una cadena en mayúsculas y cámbielas en minúscula.

#include <iostream>
#include <vector>
#include <cctype> // Librería para funciones de conversión de mayúsculas a minúsculas

int main()
{
    string cadena;
    cout << "Ingrese una cadena en mayúsculas: ";
    cin >> cadena;

    // Convertir la cadena a minúsculas utilizando un vector
    vector<char> cadenaMinusculas(cadena.size());

    for (size_t i = 0; i < cadena.size(); ++i) {
        cadenaMinusculas[i] = tolower(cadena[i]);
    }

    // Mostrar la cadena en minúsculas
    cout << "Cadena en minúsculas: ";
    for (char caracter : cadenaMinusculas) {
        cout << caracter;
    }
    cout << endl;

    return 0;
}
