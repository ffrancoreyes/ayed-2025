/*
    3) Escriba un programa que lea la nota final de cuatro alumnos y calcule la media de los cuatro.
*/

#include <iostream>
using namespace std;

int main(){
    float notaA, notaB, notaC, notaD, promedio;
    cout << "Ingrese la nota del primer alumno: "; cin >> notaA;
    cout << "Ingrese la nota del segundo alumno: "; cin >> notaB;
    cout << "Ingrese la nota del tercer alumno: "; cin >> notaC;
    cout << "Ingrese la nota del cuarto alumno: "; cin >> notaD;

    promedio = (notaA + notaB + notaC + notaD)/4;

    cout << "El promedio de notas de los cuatro alumnos es: " << promedio << endl;

    return 0;
}