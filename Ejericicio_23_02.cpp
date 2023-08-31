// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 23

// Problema planteado:Leer 2 vectores de dimensión N y combine ambos en otro vector.

#include <iostream>
#include <vector>

int main()
{
    int N;
    cout << "Ingrese la dimensión N de los vectores: ";
    cin >> N;

    // Declarar los dos vectores de enteros
    vector<int> vector1(N);
    vector<int> vector2(N);

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

    // Combinar los vectores en otro vector (vectorResultado)
    vector<int> vectorResultado;
    vectorResultado.reserve(N * 2); // Reservar espacio para la combinación

    for (int i = 0; i < N; ++i) {
        vectorResultado.push_back(vector1[i]);
        vectorResultado.push_back(vector2[i]);
    }

    // Mostrar el resultado en el vectorResultado
    cout << "Vector combinado:" << endl;
    for (int elemento : vectorResultado) {
        cout << elemento << " ";
    }
    cout << endl;

    return 0;
}
