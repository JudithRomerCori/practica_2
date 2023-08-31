// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 20

// Problema planteado:Crea un programa que pida un número al usuario un número de mes (por ejemplo, el 4) y diga cuántos días tiene (por ejemplo, 30) y el nombre del mes. Debes usar un vector. Para simplificarlo vamos a suponer que febrero tiene 28 días.

#include <iostream>
#include <vector>
#include <string>

int main()
{
    // Definir un vector con los nombres de los meses y la cantidad de días
    vector<pair<string, int>> meses = {
        {"Enero", 31},
        {"Febrero", 28},
        {"Marzo", 31},
        {"Abril", 30},
        {"Mayo", 31},
        {"Junio", 30},
        {"Julio", 31},
        {"Agosto", 31},
        {"Septiembre", 30},
        {"Octubre", 31},
        {"Noviembre", 30},
        {"Diciembre", 31}
    };

    int numeroMes;
    cout << "Ingrese el número de mes (1 - 12): ";
    cin >> numeroMes;

    // Verificar si el número de mes es válido
    if (numeroMes >= 1 && numeroMes <= 12) {
        string nombreMes = meses[numeroMes - 1].first;
        int diasMes = meses[numeroMes - 1].second;

        // Mostrar la información del mes
        cout << "El mes de " << nombreMes << " tiene " << diasMes << " días." << endl;
    } else {
        cout << "Número de mes inválido." << endl;
    }

    return 0;
}
