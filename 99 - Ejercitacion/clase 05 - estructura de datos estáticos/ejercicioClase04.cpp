/*Desarrolle un programa que solicite la carga de seis notas, las almacene en un array y calcule el promedio general.
*/

#include <iostream>
using namespace std;

int main(){
    //declaro las variables que voy a usar en el programa
    float notas[6], promedio, suma;
    int i;

    // a través de un for, pido las notas al usuario y las sumo para posteriormente hacer el promedio
    for(i = 0; i < 6; i++){
        cout << "Ingrese la nota " << i+1 << ": ";
        cin >> notas[i]; 
    }
    //inicializo la suma en 0 para eviar datos basura
    suma = 0;
    for(i = 0; i<6; i++){
        suma += notas[i];
    }
    //hago el promedio
    promedio = suma/6;

    //muestro el resultado
    cout << "El promedio de las notas es: " << promedio << endl;


    return 0;
}