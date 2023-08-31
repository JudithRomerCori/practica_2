// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 15

// Problema planteado:Realizar un programa que defina un vector de 10 enteros, a continuación lo inicialice con valores aleatorios (del 1 al 10) y posteriormente muestre en pantalla cada elemento del vector junto con su cuadrado y su cubo.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main()
{
    // Inicializar el generador de números aleatorios
    srand(time(0));

    // Crear un vector de 10 enteros
    vector<int> enteros(10);

    // Inicializar el vector con valores aleatorios entre 1 y 10
    for (int i = 0; i < 10; ++i) {
        enteros[i] = rand() % 10 + 1;
    }

    // Mostrar en pantalla cada elemento del vector, su cuadrado y su cubo
    cout << "Elemento   Cuadrado   Cubo" << endl;
    for (int i = 0; i < 10; ++i) {
        int elemento = enteros[i];
        int cuadrado = elemento * elemento;
        int cubo = elemento * elemento * elemento;
        cout << elemento << "          " << cuadrado << "          " << cubo << endl;
    }

    return 0;
}
