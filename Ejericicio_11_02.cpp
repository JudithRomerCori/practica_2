// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 11

// Problema planteado:
#include <iostream>
#include <vector>
#include <cmath> // Librería para funciones matemáticas

// Función para calcular la media (promedio) de un vector de números
double calcularMedia(const vector<int>& numeros) {
    int suma = 0;
    for (int numero : numeros) {
        suma += numero;
    }
    return static_cast<double>(suma) / numeros.size();
}

// Función para calcular la desviación estándar de un vector de números
double calcularDesviacionEstandar(const vector<int>& numeros, double media) {
    double sumaCuadrados = 0;
    for (int numero : numeros) {
        sumaCuadrados += pow(numero - media, 2);
    }
    return sqrt(sumaCuadrados / numeros.size());
}

int main() {
    vector<int> edades;
    int edad;

    // Leer edades hasta que se ingrese -1
    while (true) {
        cout << "Ingrese una edad (-1 para terminar): ";
        cin >> edad;

        if (edad == -1) {
            break;
        }

        edades.push_back(edad);
    }

    if (edades.empty()) {
        cout << "No se ingresaron edades." << endl;
    } else {
        // Calcular la media y la desviación estándar
        double media = calcularMedia(edades);
        double desviacionEstandar = calcularDesviacionEstandar(edades, media);

        // Mostrar los resultados
        cout << "Desviación estándar de las edades: " << desviacionEstandar << endl;
    }

    return 0;
}
