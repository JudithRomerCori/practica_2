// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 30/08/2023

// Fecha modificaci�n: 30/08/2023

// N�mero de ejericio: 19

// Problema planteado:Hacer un programa que inicialice un vector de n�meros con valores aleatorios, y posterior ordene los elementos de menor a mayor

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main()
{
    const int tamanoVector = 10; // Tama�o del vector

    // Inicializar el generador de n�meros aleatorios
    srand(time(0));

    // Crear un vector de n�meros
    vector<int> numeros(tamanoVector);

    // Inicializar el vector con valores aleatorios
    for (int i = 0; i < tamanoVector; ++i) {
        numeros[i] = rand() % 100; // Valores aleatorios entre 0 y 99
    }

    // Mostrar el vector antes de ordenar
    cout << "Vector antes de ordenar:" << endl;
    for (int numero : numeros) {
        cout << numero << " ";
    }
    cout << endl;

    // Ordenar los elementos del vector de menor a mayor
    sort(numeros.begin(), numeros.end());

    // Mostrar el vector ordenado
    cout << "Vector ordenado de menor a mayor:" << endl;
    for (int numero : numeros) {
        cout << numero << " ";
    }
    cout << endl;

    return 0;
}
