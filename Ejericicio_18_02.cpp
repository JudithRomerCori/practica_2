// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 18

// Problema planteado:Programa que declare un vector de diez elementos enteros y pida números para rellenarlo hasta que se llene el vector o se introduzca un número negativo. Entonces se debe imprimir el vector (sólo los elementos introducidos).

#include <iostream>
#include <vector>

int main()
{
    const int tamanoVector = 10; // Tamaño del vector

    // Crear un vector de enteros con tamaño predefinido
    vector<int> numeros;

    // Leer números hasta llenar el vector o se ingrese un número negativo
    for (int i = 0; i < tamanoVector; ++i) {
        int numero;
        cout << "Ingrese un número (negativo para terminar): ";
        cin >> numero;

        if (numero < 0) {
            break; // Salir del bucle si se ingresa un número negativo
        }

        numeros.push_back(numero); // Agregar el número al vector
    }

    // Imprimir los elementos del vector
    cout << "Elementos introducidos:" << endl;
    for (int numero : numeros) {
        cout << numero << " ";
    }
    cout << endl;

    return 0;
}
