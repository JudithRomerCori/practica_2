// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 29/08/2023

// Fecha modificación: 29/08/2023

// Número de ejericio: 7

// Problema planteado:A partir de dos vectores constantes que contienen nombres de 7 personas cada uno.
//Escribir un programa que escriba la palabra “Iguales” si ambos vectores son iguales y
//“Diferentes” si no lo son. Serán iguales cuando en la misma posición de ambos vectores s

#include <iostream>
#include <string>
#include <vector>

int main()
{
    // Definir los vectores constantes con nombres
    const vector<string> nombres1 = {"Ana", "Juan", "Luis", "María", "Carlos", "Elena", "Pedro"};
    const vector<string> nombres2 = {"Ana", "Juan", "Luis", "María", "Carlos", "Elena", "Pedro"};

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
