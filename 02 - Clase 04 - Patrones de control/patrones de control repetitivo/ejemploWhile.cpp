#include <iostream>
using namespace std;

int main(){
    /*
    while lo que haces, es primero evaluar la condición, si la condición
    se cumple, ejecuta el código
    //mientras que se cumpla la condición, voy a ejecutar el código que esté dentro
    while(condición){
        código
    }
    */
   int numIngresado;
   int contIntentos=0;
   cout << "---adivina el número---"<< endl;
   cout << "Ingrese un número: ";
   cin >> numIngresado;
   while(numIngresado != 5){
    cout << "Ingrese un número: ";
    cin >> numIngresado;
    contIntentos++;
   }
   cout << "Te llevó "<< contIntentos << " En adivinar";
    return 0;
}