// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 28/08/2023

// Fecha modificaci�n: 28/08/2023

// N�mero de ejericio: 5

// Problema planteado:Un arreglo contiene las estaturas en cm de N personas (estatura al azar en un rango de 50 a 240), determinar la mayor estatura, la estatura m�s baja y el promedio de estaturas.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits> // Para usar numeric_limits

int main()
{
    // Definir el tama�o del grupo
    int tamanoGrupo;
    cout << "Ingrese la cantidad de personas: ";
    cin >> tamanoGrupo;

    // Validar la entrada
    if (tamanoGrupo <= 0) {
        cout << "Cantidad inv�lida de personas." << endl;
        return 1;
    }

    // Definir el rango de estaturas
    int estaturaMinima = 50;
    int estaturaMaxima = 240;

    // Inicializar el generador de n�meros aleatorios
    srand(time(0));

    // Crear un arreglo de estaturas y llenarlo con n�meros aleatorios entre estaturaMinima y estaturaMaxima
    int estaturas[tamanoGrupo];
    double sumaEstaturas = 0;

    for (int i = 0; i < tamanoGrupo; ++i) {
        estaturas[i] = rand() % (estaturaMaxima - estaturaMinima + 1) + estaturaMinima;
        sumaEstaturas += estaturas[i];
    }

    // Calcular la mayor estatura y la estatura m�s baja
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
    cout << "La estatura m�s baja es: " << estaturaMasBaja << " cm." << endl;
    cout << "El promedio de estaturas es: " << promedioEstaturas << " cm." << endl;

    return 0;
}
