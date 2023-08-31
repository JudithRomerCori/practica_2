// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 12

// Problema planteado:Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y otro contiene los nombres de estos minerales, para obtener:
//- Buscar por nombre de mineral y desplegar la producción
//- Ordenar del mayor al menor (producción) y mostrar:

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

int main()
{
    // Vectores constantes con los nombres de los minerales y su producción en toneladas métricas
    const vector<string> minerales = {"SN", "SB", "AU", "PT", "AG", "CU"};
    const vector<double> produccion = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};

    // Buscar por nombre de mineral y desplegar la producción
    string mineralBuscado;
    cout << "Ingrese el nombre del mineral: ";
    cin >> mineralBuscado;

    auto iter = find(minerales.begin(), minerales.end(), mineralBuscado);
    if (iter != minerales.end()) {
        int index = distance(minerales.begin(), iter);
        cout << "Producción de " << mineralBuscado << ": " << produccion[index] << " toneladas métricas" << endl;
    } else {
        cout << "Mineral no encontrado." << endl;
    }

    // Ordenar los minerales por producción (mayor a menor)
    vector<pair<string, double>> mineralesConProduccion;

    for (size_t i = 0; i < minerales.size(); ++i) {
        mineralesConProduccion.push_back(make_pair(minerales[i], produccion[i]));
    }

    sort(mineralesConProduccion.begin(), mineralesConProduccion.end(),
              [](const pair<string, double> &a, const pair<string, double> &b) {
                  return a.second > b.second;
              });

    // Mostrar la tabla ordenada
    cout << setw(10) << "Mineral" << setw(15) << "Produccion" << " (toneladas métricas)" << endl;
    for (const auto &mineral : mineralesConProduccion) {
        cout << setw(10) << mineral.first << setw(15) << fixed << setprecision(3) << mineral.second << endl;
    }

    return 0;
}
