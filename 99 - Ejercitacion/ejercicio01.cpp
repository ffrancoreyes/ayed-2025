/*
1) Escribir la siguiente expresión: (a+(b/c))/(d+(e/f))
*/

#include <iostream>
using namespace std;

int main(){
    // Definimos las variables que vamos a usar para la operación.
    float a = 10.0;
    float b = 20.0;
    float c = 5.0;
    float d = 15.0;
    float e = 30.0;
    float f = 6.0;

    // Realizamos la operación y guardamos el resultado en una variable.
    float resultado = (a + (b / c)) / (d + (e / f));

    // Mostramos el resultado por pantalla.
    cout << "El resultado de la expresión es: " << resultado << endl;

    return 0;
}