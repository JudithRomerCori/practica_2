// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 30/08/2023

// Fecha modificaci�n: 30/08/2023

// N�mero de ejericio: 20

// Problema planteado:Crea un programa que pida un n�mero al usuario un n�mero de mes (por ejemplo, el 4) y diga cu�ntos d�as tiene (por ejemplo, 30) y el nombre del mes. Debes usar un vector. Para simplificarlo vamos a suponer que febrero tiene 28 d�as.

#include <iostream>
#include <vector>
#include <string>

int main()
{
    // Definir un vector con los nombres de los meses y la cantidad de d�as
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
    cout << "Ingrese el n�mero de mes (1 - 12): ";
    cin >> numeroMes;

    // Verificar si el n�mero de mes es v�lido
    if (numeroMes >= 1 && numeroMes <= 12) {
        string nombreMes = meses[numeroMes - 1].first;
        int diasMes = meses[numeroMes - 1].second;

        // Mostrar la informaci�n del mes
        cout << "El mes de " << nombreMes << " tiene " << diasMes << " d�as." << endl;
    } else {
        cout << "N�mero de mes inv�lido." << endl;
    }

    return 0;
}
