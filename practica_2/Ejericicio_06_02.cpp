// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 29/08/2023

// Fecha modificaci�n: 29/08/2023

// N�mero de ejericio: 6

// Problema planteado:Dados dos arreglos constantes de igual tama�o, generar un tercer arreglo con los elementos intercalados.

#include <iostream>
#include <vector>

int main()
{
    // Definir los vectores constantes
    const vector<int> arreglo1 = {1, 3, 5, 7, 9};
    const vector<int> arreglo2 = {2, 4, 6, 8, 10};
    const int tamanoVectores = arreglo1.size();

    // Crear un tercer vector para almacenar los elementos intercalados
    vector<int> vectorIntercalado;

    // Llenar el tercer vector con elementos intercalados
    for (int i = 0; i < tamanoVectores; ++i) {
        vectorIntercalado.push_back(arreglo1[i]);
        vectorIntercalado.push_back(arreglo2[i]);
    }

    // Imprimir el tercer vector con elementos intercalados
    cout << "Vector intercalado: ";
    for (int num : vectorIntercalado) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
