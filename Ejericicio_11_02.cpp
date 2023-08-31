// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 30/08/2023

// Fecha modificaci�n: 30/08/2023

// N�mero de ejericio: 11

// Problema planteado:
#include <iostream>
#include <vector>
#include <cmath> // Librer�a para funciones matem�ticas

// Funci�n para calcular la media (promedio) de un vector de n�meros
double calcularMedia(const vector<int>& numeros) {
    int suma = 0;
    for (int numero : numeros) {
        suma += numero;
    }
    return static_cast<double>(suma) / numeros.size();
}

// Funci�n para calcular la desviaci�n est�ndar de un vector de n�meros
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
        // Calcular la media y la desviaci�n est�ndar
        double media = calcularMedia(edades);
        double desviacionEstandar = calcularDesviacionEstandar(edades, media);

        // Mostrar los resultados
        cout << "Desviaci�n est�ndar de las edades: " << desviacionEstandar << endl;
    }

    return 0;
}
