#include <iostream>
using namespace std;

int main(){
    /*
    Sintaxis:

    switch(valorEvaluar){ //pepinillo
        case milanesa:
            código correspondiente
            break;
        case hamburguesa:
            código correspondiente
            break;
        case sopa:
            código correspondiente
        default: //else
            no contamos con eso en nuestro menú
    }
    */
   int valorIngresado;
   float dinero = 196.03, movimientoDinero = 0;

   cout << "1.Ingresar Dinero" << endl;
   cout << "2.Retirar Dinero" << endl;
   cout << "3.Ver Saldo" << endl;
   cout << "0. Salir" << endl;
   cout << "Ingrese una opción: ";
   cin >> valorIngresado;

   switch(valorIngresado){
        case 1:
            cout << "Cuanto dinero quiere ingresar?: ";
            cin >> movimientoDinero;
            dinero += movimientoDinero; //dinero = dinero + movimientoDinero
            cout << "su nuevo saldo es: " << dinero << endl;
            break; //lo que hace es romper el ciclo y salir del bucle o condicional;
        case 2:
            cout << "cuanto dinero quiere retirar?: ";
            cin >> movimientoDinero;
            if(movimientoDinero > dinero){
                cout << "saldo insuficiente";
            }else{
                dinero -= movimientoDinero; // dinero = dinero - movimientoDinero
                cout << "Dinero retirado con éxito, su nuevo saldo es: " << dinero << endl;
            }
        case 3:
            cout << "tu saldo es: " << dinero << endl;
            break;
        case 0:
            //break;
            return 0;
        default:
            cout << "ingrese un valor válido" << endl;

   }
   cout << "Hola despues de break" << endl;

    return 0;

}