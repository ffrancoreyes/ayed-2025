#include <iostream>
using namespace std;

int main(){
    //comentario de una sola línea
    /*
    comentario multilínea
    */

    //tipos de datos
    // tipoDeDato nombre = valor;

    //tipo de dato entero
    int edad;
    cout << "Ingrese edad: ";
    cin >> edad;
    cout << "Tu edad es: " << edad << endl;

    //tipo de dato decimal simple
    float pi = 3.1416;
    cout << "Tipo de dato decimal: " << pi << endl;

    //tipo de dato decimal doble
    double dineroEnCuenta = 100.2389283;
    cout << "Dinero en cuenta: " << dineroEnCuenta << endl;

    //tipo de dato de caracter
    char inicial = 'A';
    cout << "incial de nombre: " << inicial << endl;

    //tipo de dato lógico
    bool esMayor = true; //su valor de verdad puede ser true o false
    return 0;

    //
}