#include <iostream> //input output stream
using namespace std;

int main(){
    //patron de control IF
    int numA = 19;
    int numB = 19;
    int numC = 19;

    if(numA > numB){ //el número A es mayor que el número B?
        //en caso positivo, va a ejecutar este código
        if(numA > numC){
            cout <<"numA es el mayor de los tres" << endl;
        }else{
            cout << "NumC es mayor de los tres" << endl;
        }
    }else if(numB > numC){
        cout <<"numB es el mayor de los tres";
    }else{
        cout << "NumC es mayor de los tres";
    }


    /*Sintaxis
    
    if(condición booleana){ la condición booleana, devuelve verdadero o falso
        código verdadero;
    }else if(condición booleana){
        codigo verdadero del else if
    }else{
        código falso de todo
    }
    */
    return 0;
}