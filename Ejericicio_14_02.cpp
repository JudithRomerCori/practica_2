// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 14

// Problema planteado:Un arreglo contiene números al azar entre N y M, crear un segundo arreglo que contenga los números capicúa contenidos en el primero.

#include <iostream>
#include <vector>

// Función para verificar si un número es capicúa
bool esCapicua(int numero)
{
    int original = numero;
    int invertido = 0;

    while (numero > 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    return original == invertido;
}

int main()
{
    // Definir el rango de números al azar (N - M)
    int N = 100;
    int M = 999;

    // Crear un vector para almacenar números al azar
    vector<int> numerosAzar;

    // Llenar el vector con números al azar entre N y M
    for (int i = 0; i < 50; ++i) { // Llenar con 50 números al azar
        int numero = N + rand() % (M - N + 1);
        numerosAzar.push_back(numero);
    }

    // Crear un segundo vector para almacenar los números capicúa
    vector<int> numerosCapicua;

    // Identificar y almacenar los números capicúa en el segundo vector
    for (int numero : numerosAzar) {
        if (esCapicua(numero)) {
            numerosCapicua.push_back(numero);
        }
    }

    // Imprimir los números capicúa contenidos en el segundo vector
    cout << "Números capicúa encontrados: ";
    for (int capicua : numerosCapicua) {
        cout << capicua << " ";
    }
    cout << endl;

    return 0;
}

