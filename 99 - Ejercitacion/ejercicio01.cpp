/*
Cuenta la leyenda de la creación del ajedrez, que el sabio pidió al rey como recompensa 1 grano de arroz por el primer cuadro, 2 por el segundo, 4 por el tercero, 8 por el cuarto y así sucesivamente hasta el cuadrado 64. Calcule el total de granos de arroz que se necesitan para llenar el tablero de ajedrez.
El tablero de ajedrez tiene 64 cuadros y el número de granos de arroz en cada cuadro es una potencia de 2. Por lo tanto, el número de granos de arroz en el cuadrado n es 2^(n-1). El total de granos de arroz se puede calcular como la suma de los granos en cada cuadrado desde 1 hasta 64. 

nota: como el número es demasiado grande, debemos usar un tipo de dato que pueda albergar tal número, en este caso usamos el unsigned Long

*/

#include <iostream>
using namespace std;

int main(){

    // Definimos la variable que vamos a usar para contar la cantidad de cuadros del tablero de ajedrez, ese nos va a ayudar también a controlar la cantidad de iteraciones.
    int contador = 1;

    //debido a que es un número grande 2^64, usamos el tipo de dato unsigned long long int que tiene un tamaño de 64 bits.
    unsigned long long int total = 0;
    unsigned long long int granosEnCuadro = 1;

    //por cada iteración sumamos la cantidad de granos que hay en ese cuadro al cuadro anterior, luego multiplicamos por 2 la cantidad de granos que hay en el cuadro para la siguiente vuelta. Para finalizar, sumamos 1 al contador de iteraciones para que no terminemos en un bucle infinito.
    while(contador <= 64){
        total += granosEnCuadro;
        granosEnCuadro *= 2;
        contador++;
    }


    //mostramos el valor final y la cantidad de granos con la que vamos a terminar.
    cout << "El total de granos de arroz acumulados son: " << total << endl;

    return 0;
}