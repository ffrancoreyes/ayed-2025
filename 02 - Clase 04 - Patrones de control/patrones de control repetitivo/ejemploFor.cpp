#include <iostream>
using namespace std;

int main(){
    /*
    Tengo que ejecutar este código n veces, este re repite una cantidad definida de veces.
    for(iterador; condición;incremento){
        código
    }
    */
    int numIngresado, numSecreto = 1501;
    cout << "--Adivina el número--" << endl;

    for(int i = 1; i<= 5; i++){
        cout << "Ingrese el número: ";
        cin >> numIngresado;
        if(numIngresado == numSecreto){
            cout << "Felicidades, adivinaste el número"<< endl;
        }else if(i == 5){
            cout << "llegaste al máximo de intentos permitidos" << endl;
            return 0;
        }else{
            cout << "Intenta de nuevo, te quedan " << 5 - i << " intentos" << endl;
        }
    }

    return 0;
}