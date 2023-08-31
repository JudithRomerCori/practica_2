// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori
// Fecha creaci�n: 28/08/2023

// Fecha modificaci�n: 28/08/2023

// N�mero de ejericio: 1

// Problema planteado:Almacenar un vector de tama�o N, con n�meros al azar entre A y B, e imprima la suma de los componentes de �ndice par y la resta de los componentes de �ndice impar.


#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main()
{
    // Definir los par�metros N, A y B
    int N = 10; // Tama�o del vector
    int A = 1;  // Valor m�nimo
    int B = 100; // Valor m�ximo

    // Inicializar el generador de n�meros aleatorios
    srand(time(0));

    // Crear un vector de tama�o N y llenarlo con n�meros aleatorios entre A y B
    vector<int> vectorN;
    for (int i = 0; i < N; ++i) {
        int randomNumber = rand() % (B - A + 1) + A;
        vectorN.push_back(randomNumber);
    }

    // Calcular la suma de componentes de �ndice par y la resta de componentes de �ndice impar
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
    cout << "\nSuma de componentes de �ndice par: " << sumPar << endl;
    cout << "Resta de componentes de �ndice impar: " << diffImpar << endl;

    return 0;
}
