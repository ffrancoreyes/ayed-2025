//intercambiar valores de variables
#include <iostream>
using namespace std;

int main(){
    int valorA = 10;
    int valorB = 20;
    int aux;
    
    //intercambio
    aux = valorA;
    valorA = valorB;
    valorB = aux;
    cout << valorA << endl;
    cout << valorB << endl;
    cout << endl;
    //alternativa matemática propuesta por alumno
    cout << valorA << endl;
    cout << valorB << endl;
    cout << "intercambio" <<endl;
    valorB = valorA + valorB;
    valorA = valorB - valorA;
    valorB = valorB - valorA;
    cout << endl;
    cout << valorA << endl;
    cout << valorB << endl;
    return 0;
}