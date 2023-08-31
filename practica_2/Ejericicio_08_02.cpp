// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 29/08/2023

// Fecha modificaci�n: 29/08/2023

// N�mero de ejericio: 8

// Problema planteado:- Se tiene el arreglo
//Ventas:
// 0      1    2       10   11
// vene vfeb vmar . . vnov vdic
//Donde se almacenan las ventas mensuales de una empresa y un arreglo constante que
//contiene los nombres de los meses:
//Meses:
//  0     1     2        10     11
//�Ene� �Feb� �Mar� . . �Nov� �Dic�
//Escriba un programa que obtenga:
//� �En qu� mes(es) se dieron las ventas m�ximas de la empresa?
//� �A cu�nto ascendieron las ventas m�ximas?
//� �Cu�l fue el total de las ventas?
//Las ventas deben ser ingresadas por teclado.

#include <iostream>
#include <vector>
#include <string>

int main()
{
    const int numeroMeses = 12;

    // Arreglo para almacenar las ventas mensuales
    vector<double> ventas(numeroMeses);

    // Arreglo constante de nombres de meses
    const vector<string> nombresMeses = {
        "Ene", "Feb", "Mar", "Abr", "May", "Jun", "Jul", "Ago", "Sep", "Oct", "Nov", "Dic"
    };

    // Ingreso de las ventas mensuales por teclado
    for (int i = 0; i < numeroMeses; ++i) {
        cout << "Ingrese las ventas para " << nombresMeses[i] << ": ";
        cin >> ventas[i];
    }

    // Encontrar las ventas m�ximas y el mes correspondiente
    double ventasMaximas = ventas[0];
    int mesVentasMaximas = 0;

    for (int i = 1; i < numeroMeses; ++i) {
        if (ventas[i] > ventasMaximas) {
            ventasMaximas = ventas[i];
            mesVentasMaximas = i;
        }
    }

    // Calcular el total de las ventas
    double totalVentas = 0;
    for (double venta : ventas) {
        totalVentas += venta;
    }

    // Imprimir los resultados
    cout << "Las ventas m�ximas ocurrieron en " << nombresMeses[mesVentasMaximas] << endl;
    cout << "Ventas m�ximas: " << ventasMaximas << endl;
    cout << "Total de ventas: " << totalVentas << endl;

    return 0;
}
