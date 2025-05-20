#include <iostream>
using namespace std;

int main(){
    //tipos de operadores
    int numA = 11;
    int numB = 3;
    
    cout << "numA: " << numA << endl;
    cout << "numB: " << numB << endl;

    //operador aritmético
    int suma;
    suma = numA + numB;
    cout << "la suma es: "<< suma << endl;

    //resta
    int resta;
    resta = numB - numA;
    cout << "La resta es: " << resta << endl;

    //Módulo
    //int modulo;
    //modulo = numA % numB;
    //cout << "El residuo es: " << modulo << endl;

    //division
    float division;
    division = numA / numB;
    cout << "division: " << division << endl;
    cout << "division: " << numA / numB << endl;

    //incremento
    cout << "numA antes del incremento: "<< numA << endl;
    numA++; //equivale a numA = numA + 1
    cout << "numA luego del incremento: "<< numA << endl;
    
    //decremento
    cout << "numB antes del decremento: "<< numB << endl;
    numB--; //equivale a numB = numB - 1
    cout << "numB despues del decremento: "<< numB << endl;
    return 0;
}