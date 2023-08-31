// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 30/08/2023

// Fecha modificaci�n: 30/08/2023

// N�mero de ejericio: 13

// Problema planteado:Almacenar en un arreglo los n primeros n�meros primos.

#include <iostream>
#include <vector>

// Funci�n para verificar si un n�mero es primo
bool esPrimo(int numero)
{
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Ingrese la cantidad de n�meros primos a generar: ";
    cin >> n;

    vector<int> numerosPrimos;

    // Generar y almacenar los primeros n n�meros primos
    int numero = 2;
    while (numerosPrimos.size() < n) {
        if (esPrimo(numero)) {
            numerosPrimos.push_back(numero);
        }
        numero++;
    }

    // Imprimir los n�meros primos almacenados en el vector
    cout << "Los primeros " << n << " n�meros primos son: ";
    for (int primo : numerosPrimos) {
        cout << primo << " ";
    }
    cout << endl;

    return 0;
}
