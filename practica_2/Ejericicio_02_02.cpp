// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori
// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 2

// Problema planteado: Escribir un programa que a partir de un arreglo constante de 10 elementos enteros, determine el porcentaje de números pares positivos e impares negativos.


#include <iostream>
#include <vector>

int main()
{
    // Vector constante de 10 elementos enteros
    const vector<int> arreglo = {2, -3, 8, -5, 10, -7, 4, -9, 6, -1};

    int paresPositivos = 0;
    int imparesNegativos = 0;

    // Iterar a través del vector y contar los números pares positivos e impares negativos
    for (int num : arreglo) {
        if (num % 2 == 0 && num > 0) {
            paresPositivos++;
        } else if (num % 2 != 0 && num < 0) {
            imparesNegativos++;
        }
    }

    // Calcular el porcentaje
    double totalElementos = static_cast<double>(arreglo.size());
    double porcentajeParesPositivos = (paresPositivos / totalElementos) * 100;
    double porcentajeImparesNegativos = (imparesNegativos / totalElementos) * 100;

    // Imprimir los resultados
    cout << "Porcentaje de números pares positivos: " << porcentajeParesPositivos << "%" << endl;
    cout << "Porcentaje de números impares negativos: " << porcentajeImparesNegativos << "%" << endl;

    return 0;
}
