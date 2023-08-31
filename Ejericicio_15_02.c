// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 15

// Problema planteado:

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    // Inicializar el generador de números aleatorios
    std::srand(std::time(0));

    // Crear un vector de 10 enteros
    std::vector<int> enteros(10);

    // Inicializar el vector con valores aleatorios entre 1 y 10
    for (int i = 0; i < 10; ++i) {
        enteros[i] = std::rand() % 10 + 1;
    }

    // Mostrar en pantalla cada elemento del vector, su cuadrado y su cubo
    std::cout << "Elemento   Cuadrado   Cubo" << std::endl;
    for (int i = 0; i < 10; ++i) {
        int elemento = enteros[i];
        int cuadrado = elemento * elemento;
        int cubo = elemento * elemento * elemento;
        std::cout << elemento << "          " << cuadrado << "          " << cubo << std::endl;
    }

    return 0;
}
