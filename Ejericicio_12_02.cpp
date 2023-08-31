// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 30/08/2023

// Fecha modificaci�n: 30/08/2023

// N�mero de ejericio: 12

// Problema planteado:Un arreglo constante contiene la producci�n en toneladas m�tricas de 6 minerales, y otro contiene los nombres de estos minerales, para obtener:
//- Buscar por nombre de mineral y desplegar la producci�n
//- Ordenar del mayor al menor (producci�n) y mostrar:

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

int main()
{
    // Vectores constantes con los nombres de los minerales y su producci�n en toneladas m�tricas
    const vector<string> minerales = {"SN", "SB", "AU", "PT", "AG", "CU"};
    const vector<double> produccion = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};

    // Buscar por nombre de mineral y desplegar la producci�n
    string mineralBuscado;
    cout << "Ingrese el nombre del mineral: ";
    cin >> mineralBuscado;

    auto iter = find(minerales.begin(), minerales.end(), mineralBuscado);
    if (iter != minerales.end()) {
        int index = distance(minerales.begin(), iter);
        cout << "Producci�n de " << mineralBuscado << ": " << produccion[index] << " toneladas m�tricas" << endl;
    } else {
        cout << "Mineral no encontrado." << endl;
    }

    // Ordenar los minerales por producci�n (mayor a menor)
    vector<pair<string, double>> mineralesConProduccion;

    for (size_t i = 0; i < minerales.size(); ++i) {
        mineralesConProduccion.push_back(make_pair(minerales[i], produccion[i]));
    }

    sort(mineralesConProduccion.begin(), mineralesConProduccion.end(),
              [](const pair<string, double> &a, const pair<string, double> &b) {
                  return a.second > b.second;
              });

    // Mostrar la tabla ordenada
    cout << setw(10) << "Mineral" << setw(15) << "Produccion" << " (toneladas m�tricas)" << endl;
    for (const auto &mineral : mineralesConProduccion) {
        cout << setw(10) << mineral.first << setw(15) << fixed << setprecision(3) << mineral.second << endl;
    }

    return 0;
}
