// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori
// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 1

// Problema planteado:Almacenar un vector de tamaño N, con números al azar entre A y B, e imprima la suma de los componentes de índice par y la resta de los componentes de índice impar.


#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main()
{
    // Definir los parámetros N, A y B
    int N = 10; // Tamaño del vector
    int A = 1;  // Valor mínimo
    int B = 100; // Valor máximo

    // Inicializar el generador de números aleatorios
    srand(time(0));

    // Crear un vector de tamaño N y llenarlo con números aleatorios entre A y B
    vector<int> vectorN;
    for (int i = 0; i < N; ++i) {
        int randomNumber = rand() % (B - A + 1) + A;
        vectorN.push_back(randomNumber);
    }

    // Calcular la suma de componentes de índice par y la resta de componentes de índice impar
    int sumPar = 0;
    int diffImpar = 0;
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) {
            sumPar += vectorN[i];
        } else {
            diffImpar -= vectorN[i];
        }
    }

    // Imprimir los resultados
    cout << "Vector generado: ";
    for (int num : vectorN) {
        cout << num << " ";
    }
    cout << "\nSuma de componentes de índice par: " << sumPar << endl;
    cout << "Resta de componentes de índice impar: " << diffImpar << endl;

    return 0;
}
