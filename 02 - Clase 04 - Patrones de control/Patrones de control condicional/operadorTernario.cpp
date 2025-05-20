#include <iostream>
using namespace std;

int main(){
    int edad = 18;
    string resultado;

    resultado = edad >= 18? "La persona es mayor de edad" : "la persona no es mayor de edad";
    cout << resultado;

    /*
    condición Booleana ? valorVerdadero : valorFalso;

    if(condición booleana){
        valorVerdadero
    }else{
        valorFalso
    }
    */
    return 0;
}
