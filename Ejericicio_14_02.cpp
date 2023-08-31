// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 30/08/2023

// Fecha modificaci�n: 30/08/2023

// N�mero de ejericio: 14

// Problema planteado:Un arreglo contiene n�meros al azar entre N y M, crear un segundo arreglo que contenga los n�meros capic�a contenidos en el primero.

#include <iostream>
#include <vector>

// Funci�n para verificar si un n�mero es capic�a
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
    // Definir el rango de n�meros al azar (N - M)
    int N = 100;
    int M = 999;

    // Crear un vector para almacenar n�meros al azar
    vector<int> numerosAzar;

    // Llenar el vector con n�meros al azar entre N y M
    for (int i = 0; i < 50; ++i) { // Llenar con 50 n�meros al azar
        int numero = N + rand() % (M - N + 1);
        numerosAzar.push_back(numero);
    }

    // Crear un segundo vector para almacenar los n�meros capic�a
    vector<int> numerosCapicua;

    // Identificar y almacenar los n�meros capic�a en el segundo vector
    for (int numero : numerosAzar) {
        if (esCapicua(numero)) {
            numerosCapicua.push_back(numero);
        }
    }

    // Imprimir los n�meros capic�a contenidos en el segundo vector
    cout << "N�meros capic�a encontrados: ";
    for (int capicua : numerosCapicua) {
        cout << capicua << " ";
    }
    cout << endl;

    return 0;
}

