// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 28/08/2023

// Fecha modificaci�n: 28/08/2023

// N�mero de ejericio: 4

// Problema planteado:Un arreglo contiene las edades de un grupo de 50 personas con n�meros al azar, determine: el porcentaje de mayores (>=18 a�os) y menores de edad (<18 a�os).
// Las edades al azar deben ser generadas a partir de 1 a 110 a�os.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main()
{
    // Definir la cantidad de personas y el rango de edades
    int cantidadPersonas = 50;
    int edadMinima = 1;
    int edadMaxima = 110;

    // Inicializar el generador de n�meros aleatorios
    srand(time(0));

    // Crear un vector para almacenar las edades y llenarlo con edades al azar
    vector<int> edades(cantidadPersonas);
    int mayores = 0; // Contador de personas mayores de edad

    for (int i = 0; i < cantidadPersonas; ++i) {
        edades[i] = rand() % (edadMaxima - edadMinima + 1) + edadMinima;
        if (edades[i] >= 18) {
            mayores++;
        }
    }

    // Calcular porcentajes
    double porcentajeMayores = (static_cast<double>(mayores) / cantidadPersonas) * 100;
    double porcentajeMenores = 100 - porcentajeMayores;

    // Imprimir porcentajes
    cout << "Porcentaje de personas mayores de edad: " << porcentajeMayores << "%" << endl;
    cout << "Porcentaje de personas menores de edad: " << porcentajeMenores << "%" << endl;

    return 0;
}
