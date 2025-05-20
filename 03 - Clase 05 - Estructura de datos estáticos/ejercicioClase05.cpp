/*Realice un algoritmo que permita cargar un array de 10 números enteros y luego determine si un valor ingresado por el usuario existe dentro del array.*/

#include <iostream>
using namespace std;

int main(){
    int numeros[10],numIngresado;

    for(int i = 0; i <10; i++){
        cout << "ingrese numero[" << i << "]: "; 
        cin >> numeros[i];
    }
    
    //le pido al usuario que ingrese un número y luego lo comparo.
    cout << "Ingrese un número: ";
    cin >> numIngresado;

    for(int i = 0; i <10; i++){
        if(numeros[i] == numIngresado){ //pregunto si el número de la posición i de mi arreglo es igual al número que ingresó al usuario
            cout << "El número " << numIngresado << " se encontró en la posición [" << i << "]" << endl; // en caso afirmativo, muestro el valor
            break; // y salgo del ciclo
        }else{ //caso contrario, muestro un mensaje 
            cout << "no se encontró el elemento en la posición [" << i << "]" << endl; 
            continue;    
        }
    }
    return 0;
}