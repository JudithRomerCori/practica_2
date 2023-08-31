// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 29/08/2023

// Fecha modificaci�n: 29/08/2023

// N�mero de ejericio: 9

// Problema planteado:Un arreglo contiene las calificaciones de un examen dado por un grupo de estudiantes, otro arreglo contiene los nombres de los mismos y un tercer arreglo contiene la sigla de la carrera.
//Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y el nombre del alumno que obtuvo la nota menor, adem�s mostrar que carrera tuvo un desempe�o mayor con relaci�n al promedio del curso.


#include <iostream>
#include <vector>
#include <string>

int main()
{
    // Cantidad de estudiantes
    int numEstudiantes;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> numEstudiantes;

    // Vectores para almacenar las calificaciones, nombres y siglas de la carrera
    vector<double> calificaciones(numEstudiantes);
    vector<string> nombres(numEstudiantes);
    vector<string> carreras(numEstudiantes);

    // Ingresar los datos de cada estudiante
    for (int i = 0; i < numEstudiantes; ++i) {
        cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
        cin >> nombres[i];

        cout << "Ingrese la calificaci�n del estudiante " << nombres[i] << ": ";
        cin >> calificaciones[i];

        cout << "Ingrese la sigla de la carrera del estudiante " << nombres[i] << ": ";
        cin >> carreras[i];
    }

    // Encontrar el alumno con la calificaci�n m�s alta y m�s baja
    double maxCalificacion = calificaciones[0];
    double minCalificacion = calificaciones[0];
    int indexMaxCalificacion = 0;
    int indexMinCalificacion = 0;

    for (int i = 1; i < numEstudiantes; ++i) {
        if (calificaciones[i] > maxCalificacion) {
            maxCalificacion = calificaciones[i];
            indexMaxCalificacion = i;
        }

        if (calificaciones[i] < minCalificacion) {
            minCalificacion = calificaciones[i];
            indexMinCalificacion = i;
        }
    }

    // Calcular el promedio del curso
    double sumaCalificaciones = 0;
    for (double calificacion : calificaciones) {
        sumaCalificaciones += calificacion;
    }
    double promedioCurso = sumaCalificaciones / numEstudiantes;

    // Determinar la carrera con un desempe�o mayor al promedio del curso
    string carreraMejorDesempeno;
    double mejorPromedioCarrera = 0;

    for (int i = 0; i < numEstudiantes; ++i) {
        if (calificaciones[i] > promedioCurso && calificaciones[i] > mejorPromedioCarrera) {
            mejorPromedioCarrera = calificaciones[i];
            carreraMejorDesempeno = carreras[i];
        }
    }

    // Imprimir los resultados
    cout << "Estudiante con la calificaci�n m�s alta: " << nombres[indexMaxCalificacion] << endl;
    cout << "Estudiante con la calificaci�n m�s baja: " << nombres[indexMinCalificacion] << endl;
    cout << "Carrera con mejor desempe�o: " << carreraMejorDesempeno << endl;

    return 0;
}
