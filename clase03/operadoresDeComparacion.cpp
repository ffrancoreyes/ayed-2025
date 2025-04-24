#include <iostream>
using namespace std;

int main(){
    //operadores de comparación
    int valorA = 10;
    int valorB = 10;
    bool sonIguales;
    sonIguales = valorA == valorB;
    cout << "Son iguales: " << sonIguales << endl;
    bool sonDiferentes;
    sonDiferentes = valorA != valorB;
    cout << "Son diferentes: " << sonDiferentes << endl;

    bool menorQue;
    menorQue = valorA < valorB;

    bool menorIgualQue;
    menorIgualQue = valorA <= valorB;
    cout << "ValorA es menor que valorB: " << menorQue << endl;
    cout << "ValorA es menor o igual que valorB: " << menorIgualQue << endl;


    bool mayorQue;
    mayorQue = valorA > valorB;
    bool mayorIgualQue;
    mayorIgualQue = valorA >= valorB;
    cout << "ValorA es mayor que valorB: " << mayorQue << endl;
    cout << "ValorA es mayor o igual que valorB: " << mayorIgualQue << endl;




    return 0;
}