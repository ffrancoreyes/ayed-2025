#include <iostream>
using namespace std;

int main(){
    /*
    primero ejecuto el código, luego veo si se cumple la condición
    y si se cumple la condición, vuelvo a ejecutar el código.
    Así sucesivamente, hasta que ya no se cumpla la condición

    do{
        código
    }while(condición);

    */

    float dinero = 196.03;
    float movimientoDinero = 0;

    //imaginemos que estamos programando una función de retirar dinero
    do{
        cout << "Ingrese el importe que desea retirar: ";
        cin>>movimientoDinero;
        if(movimientoDinero > dinero){
            cout << "Ingrese un monto inválido" << endl;
            continue; //saltea la iteración actual, sin ejecutar el resto de código.
        }else{
            dinero -= movimientoDinero;
            cout << "su saldo actual es: " << dinero;
        }
    }while(dinero > 100);
    return 0;
}