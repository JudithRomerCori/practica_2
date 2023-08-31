// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 29/08/2023

// Fecha modificaci�n: 29/08/2023

// N�mero de ejericio: 7

// Problema planteado:A partir de dos vectores constantes que contienen nombres de 7 personas cada uno.
//Escribir un programa que escriba la palabra �Iguales� si ambos vectores son iguales y
//�Diferentes� si no lo son. Ser�n iguales cuando en la misma posici�n de ambos vectores s

#include <iostream>
#include <string>
#include <vector>

int main()
{
    // Definir los vectores constantes con nombres
    const vector<string> nombres1 = {"Ana", "Juan", "Luis", "Mar�a", "Carlos", "Elena", "Pedro"};
    const vector<string> nombres2 = {"Ana", "Juan", "Luis", "Mar�a", "Carlos", "Elena", "Pedro"};

    // Verificar si los vectores son iguales
    bool sonIguales = true;

    if (nombres1.size() != nombres2.size()) {
        sonIguales = false;
    } else {
        for (size_t i = 0; i < nombres1.size(); ++i) {
            if (nombres1[i] != nombres2[i]) {
                sonIguales = false;
                break;
            }
        }
    }

    // Imprimir el resultado
    if (sonIguales) {
        std::cout << "Iguales" << std::endl;
    } else {
        std::cout << "Diferentes" << std::endl;
    }

    return 0;
}
