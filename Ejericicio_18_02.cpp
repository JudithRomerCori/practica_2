// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 30/08/2023

// Fecha modificaci�n: 30/08/2023

// N�mero de ejericio: 18

// Problema planteado:Programa que declare un vector de diez elementos enteros y pida n�meros para rellenarlo hasta que se llene el vector o se introduzca un n�mero negativo. Entonces se debe imprimir el vector (s�lo los elementos introducidos).

#include <iostream>
#include <vector>

int main()
{
    const int tamanoVector = 10; // Tama�o del vector

    // Crear un vector de enteros con tama�o predefinido
    vector<int> numeros;

    // Leer n�meros hasta llenar el vector o se ingrese un n�mero negativo
    for (int i = 0; i < tamanoVector; ++i) {
        int numero;
        cout << "Ingrese un n�mero (negativo para terminar): ";
        cin >> numero;

        if (numero < 0) {
            break; // Salir del bucle si se ingresa un n�mero negativo
        }

        numeros.push_back(numero); // Agregar el n�mero al vector
    }

    // Imprimir los elementos del vector
    cout << "Elementos introducidos:" << endl;
    for (int numero : numeros) {
        cout << numero << " ";
    }
    cout << endl;

    return 0;
}
