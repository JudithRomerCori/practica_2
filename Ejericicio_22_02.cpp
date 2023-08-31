// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 22

// Problema planteado:Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector

#include <iostream>
#include <vector>

int main()
{
    int N;
    cout << "Ingrese la dimensión N de los vectores: ";
    cin >> N;

    // Declarar los tres vectores de enteros
    vector<int> vector1(N);
    vector<int> vector2(N);
    vector<int> vectorResultado(N);

    // Pedir valores para vector1
    cout << "Ingrese los valores para el vector1:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vector1[i];
    }

    // Pedir valores para vector2
    cout << "Ingrese los valores para el vector2:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vector2[i];
    }

    // Calcular la multiplicación de los vectores
    for (int i = 0; i < N; ++i) {
        vectorResultado[i] = vector1[i] * vector2[i];
    }

    // Mostrar el resultado en el vectorResultado
    cout << "Resultado de la multiplicación de vectores:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << vectorResultado[i] << " ";
    }
    cout << endl;

    return 0;
}
