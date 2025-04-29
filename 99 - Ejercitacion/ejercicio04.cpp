/*
    4) La calificación final de un estudiante de AyED, es la media ponderada de tres notas:
        -La nota del trabajo práctico que cuenta con el 30% del total.
        -La nota teórica que cuenta con el 60%.
        -La nota de participación que cuenta con el 10% restante.
    Escribir un programa que lea las tres notas de un alumno y escriba en la salida su nota final

*/

#include <iostream>
using namespace std;

int main(){

    float notaTp, notaTeo, notaPart, resultado;
    cout << "Ingrese la nota del trabajo práctico: "; cin >> notaTp;
    cout << "Ingrese la nota teórica: "; cin >> notaTeo;
    cout << "Ingrese la nota de participación: "; cin >> notaPart;

    resultado = (notaTp*0.30) + (notaTeo*0.60) + (notaPart*0.10);

    cout << "La nota final del alumno es: " << resultado << endl;
    return 0;
}