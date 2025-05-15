#include <iostream>
using namespace std;

int main(){
    //declaro las variables que vamos a usar
    int numIngresado = 0, sum = 0;

    //pido al usuario que ingrese un número
    cout << "ingrese un número para hace su suma, si quiere dejar de ingresar números, ingrese 0: ";
    cin >> numIngresado;

    //creo un bucle, en el cual mientras que el usuario no ingrese un 0, el código se va a repetir
    while(numIngresado != 0){
        sum += numIngresado;
        cout << "Ingrese un número: ";
        cin >> numIngresado;
    }

    cout << "La suma es: " << sum;

    return 0;
}