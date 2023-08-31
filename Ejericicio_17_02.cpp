// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 17

// Problema planteado:Se quiere realizar un programa que lea por teclado las 5 notas obtenidas por un alumno (comprendidas entre 0 y 100). A continuación, debe mostrar todas las notas, la nota media, la nota más alta que ha sacado y la menor.


#include <iostream>
using namespace std;
int main(){
    float vn[5];//el vector que almacena las notas
    float sumanotas=0.0, media;
    for (int i=0;i<5;i++){
        cout<<"Ingresa la nota"<<endl;
        cin>>vn[i];
        cout<<vn[i];
        sumanotas+=vn[i];
    }
    media=sumanotas/5;
    cout<<"La media de las notas es: "<<media<<"\n";
    //para encontrar la mayor y menor nota
    int menornota=vn[0];
    int mayornota=vn[0];
    for (int i=0;i<5;i++){
        if (vn[i]>mayornota){
            mayornota=vn[i];
        }
        if (vn[i]<menornota){
            menornota=vn[i];
        }
    }
    cout<<"La mayor nota es: "<<mayornota<<endl;
    cout<<"La menor nota es: "<<menornota<<endl;
    return 0;
}
