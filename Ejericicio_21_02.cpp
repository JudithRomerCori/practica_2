// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 21

// Problema planteado:Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros cada uno, pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2.

#include <iostream>
#include <vector>

int main()
{
    const int tamanoVectores = 5; // Tamaño de los vectores

    // Declarar los tres vectores de enteros
    vector<int> vector1(tamanoVectores);
    vector<int> vector2(tamanoVectores);
    vector<int> vector3(tamanoVectores);

    // Pedir valores para vector1
    cout << "Ingrese " << tamanoVectores << " valores para el vector1:" << endl;
    for (int i = 0; i < tamanoVectores; ++i) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vector1[i];
    }

    // Pedir valores para vector2
    cout << "Ingrese " << tamanoVectores << " valores para el vector2:" << endl;
    for (int i = 0; i < tamanoVectores; ++i) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vector2[i];
    }

    // Calcular vector3 = vector1 + vector2
    for (int i = 0; i < tamanoVectores; ++i) {
        vector3[i] = vector1[i] + vector2[i];
    }

    // Mostrar el resultado en vector3
    cout << "Resultado en vector3 = vector1 + vector2:" << endl;
    for (int i = 0; i < tamanoVectores; ++i) {
        cout << vector3[i] << " ";
    }
    cout << endl;

    return 0;
}
