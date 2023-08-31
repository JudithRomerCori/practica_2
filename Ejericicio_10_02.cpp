// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 29/08/2023
// Fecha modificaci�n: 29/08/2023

// N�mero de ejericio: 10

// Problema planteado:Dado un arreglo que contiene la poblaci�n de los nueve departamentos del pa�s y otro que contiene los nombres de estos departamentos, indique el nombre del departamento que tiene la mayor poblaci�n y el nombre del departamento que tiene la menor poblaci�n.

#include <iostream>
#include <vector>
#include <string>

int main()
{
    const int numDepartamentos = 9;

    // Vectores para almacenar la poblaci�n y los nombres de los departamentos
    vector<int> poblacion(numDepartamentos);
    vector<string> nombresDepartamentos(numDepartamentos);

    // Ingresar los datos de cada departamento
    for (int i = 0; i < numDepartamentos; ++i) {
        cout << "Ingrese el nombre del departamento " << i + 1 << ": ";
        cin >> nombresDepartamentos[i];

        cout << "Ingrese la poblaci�n del departamento " << nombresDepartamentos[i] << ": ";
        cin >> poblacion[i];
    }

    // Encontrar el departamento con la mayor poblaci�n y el de menor poblaci�n
    int mayorPoblacion = poblacion[0];
    int menorPoblacion = poblacion[0];
    int indexMayorPoblacion = 0;
    int indexMenorPoblacion = 0;

    for (int i = 1; i < numDepartamentos; ++i) {
        if (poblacion[i] > mayorPoblacion) {
            mayorPoblacion = poblacion[i];
            indexMayorPoblacion = i;
        }

        if (poblacion[i] < menorPoblacion) {
            menorPoblacion = poblacion[i];
            indexMenorPoblacion = i;
        }
    }

    // Imprimir los resultados
    cout << "Departamento con la mayor poblaci�n: " << nombresDepartamentos[indexMayorPoblacion] << endl;
    cout << "Departamento con la menor poblaci�n: " << nombresDepartamentos[indexMenorPoblacion] << endl;

    return 0;
}
