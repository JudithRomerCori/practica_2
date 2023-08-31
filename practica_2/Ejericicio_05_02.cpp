// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 28/08/2023

// Fecha modificación: 28/08/2023

// Número de ejericio: 5

// Problema planteado:Un arreglo contiene las estaturas en cm de N personas (estatura al azar en un rango de 50 a 240), determinar la mayor estatura, la estatura más baja y el promedio de estaturas.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits> // Para usar numeric_limits

int main()
{
    // Definir el tamaño del grupo
    int tamanoGrupo;
    cout << "Ingrese la cantidad de personas: ";
    cin >> tamanoGrupo;

    // Validar la entrada
    if (tamanoGrupo <= 0) {
        cout << "Cantidad inválida de personas." << endl;
        return 1;
    }

    // Definir el rango de estaturas
    int estaturaMinima = 50;
    int estaturaMaxima = 240;

    // Inicializar el generador de números aleatorios
    srand(time(0));

    // Crear un arreglo de estaturas y llenarlo con números aleatorios entre estaturaMinima y estaturaMaxima
    int estaturas[tamanoGrupo];
    double sumaEstaturas = 0;

    for (int i = 0; i < tamanoGrupo; ++i) {
        estaturas[i] = rand() % (estaturaMaxima - estaturaMinima + 1) + estaturaMinima;
        sumaEstaturas += estaturas[i];
    }

    // Calcular la mayor estatura y la estatura más baja
    int mayorEstatura = estaturaMinima - 1;
    int estaturaMasBaja = estaturaMaxima + 1;

    for (int i = 0; i < tamanoGrupo; ++i) {
        if (estaturas[i] > mayorEstatura) {
            mayorEstatura = estaturas[i];
        }
        if (estaturas[i] < estaturaMasBaja) {
            estaturaMasBaja = estaturas[i];
        }
    }

    // Calcular el promedio de estaturas
    double promedioEstaturas = sumaEstaturas / tamanoGrupo;

    // Imprimir resultados
    cout << "La mayor estatura es: " << mayorEstatura << " cm." << endl;
    cout << "La estatura más baja es: " << estaturaMasBaja << " cm." << endl;
    cout << "El promedio de estaturas es: " << promedioEstaturas << " cm." << endl;

    return 0;
}
