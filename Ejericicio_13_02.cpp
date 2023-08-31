// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 13

// Problema planteado:Almacenar en un arreglo los n primeros números primos.

#include <iostream>
#include <vector>

// Función para verificar si un número es primo
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
    cout << "Ingrese la cantidad de números primos a generar: ";
    cin >> n;

    vector<int> numerosPrimos;

    // Generar y almacenar los primeros n números primos
    int numero = 2;
    while (numerosPrimos.size() < n) {
        if (esPrimo(numero)) {
            numerosPrimos.push_back(numero);
        }
        numero++;
    }

    // Imprimir los números primos almacenados en el vector
    cout << "Los primeros " << n << " números primos son: ";
    for (int primo : numerosPrimos) {
        cout << primo << " ";
    }
    cout << endl;

    return 0;
}
