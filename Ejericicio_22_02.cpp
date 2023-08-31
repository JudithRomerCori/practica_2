// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 30/08/2023

// Fecha modificaci�n: 30/08/2023

// N�mero de ejericio: 22

// Problema planteado:Leer 2 vectores de dimensi�n N y calcule la multiplicaci�n de los mismos en otro vector

#include <iostream>
#include <vector>

int main()
{
    int N;
    cout << "Ingrese la dimensi�n N de los vectores: ";
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

    // Calcular la multiplicaci�n de los vectores
    for (int i = 0; i < N; ++i) {
        vectorResultado[i] = vector1[i] * vector2[i];
    }

    // Mostrar el resultado en el vectorResultado
    cout << "Resultado de la multiplicaci�n de vectores:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << vectorResultado[i] << " ";
    }
    cout << endl;

    return 0;
}
