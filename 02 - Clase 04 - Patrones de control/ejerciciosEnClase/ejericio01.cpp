//2)Escriba un programa para comprobar si un número digitado por el usuario 
//es positivo o negativo.
#include <iostream>
using namespace std;

int main(){
    int valorIngresado;
    cout << "ingrese un número: ";
    cin >> valorIngresado;

    if(valorIngresado == 0){
        cout << "el valor ingresado es cero" << endl;
    }else if(valorIngresado > 0){
        cout << "el valor ingresado es positivo" << endl;
    }else{
        cout << "el valor ingresado es negativo" << endl;
    }
    return 0;
}