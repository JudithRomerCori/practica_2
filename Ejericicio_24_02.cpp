// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 30/08/2023

// Fecha modificaci�n: 30/08/2023

// N�mero de ejericio: 24

// Problema planteado:Leer una cadena en may�sculas y c�mbielas en min�scula.

#include <iostream>
#include <vector>
#include <cctype> // Librer�a para funciones de conversi�n de may�sculas a min�sculas

int main()
{
    string cadena;
    cout << "Ingrese una cadena en may�sculas: ";
    cin >> cadena;

    // Convertir la cadena a min�sculas utilizando un vector
    vector<char> cadenaMinusculas(cadena.size());

    for (size_t i = 0; i < cadena.size(); ++i) {
        cadenaMinusculas[i] = tolower(cadena[i]);
    }

    // Mostrar la cadena en min�sculas
    cout << "Cadena en min�sculas: ";
    for (char caracter : cadenaMinusculas) {
        cout << caracter;
    }
    cout << endl;

    return 0;
}
