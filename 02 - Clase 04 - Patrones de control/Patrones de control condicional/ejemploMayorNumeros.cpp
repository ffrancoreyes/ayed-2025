#include <iostream>
using namespace std;

int main(){
    int numA = 19;
    int numB = 19;
    int numC = 19;
    
    if(numA == numB){
        if(numA == numC){
            cout << "Los tres son iguales" << endl;
        }else if(numA > numC || numB > numC){
            cout << "numA y numB son iguales y además son mayores que numC" << endl;
        }else{
            cout << "numA y numB son iguales, pero numC es el mayor" << endl;
        }
    }else if(numA > numB){
        if(numA == numC){
            cout << "numA y numC son iguales y además son mayores que numB" << endl;
        }else if(numA > numC){
            cout << "numA es el mayor de los tres" << endl;
        }else{
            cout << "numC es el mayor de los tres" << endl;
        }
    }else if(numB == numC){
        cout << "numB y numC son iguales y además son mayores que numA" << endl;
    }else if(numB > numC){
        cout << "numB es el mayor de los tres" << endl;
    }else{
        cout << "numC es el mayor de los tres" << endl;
    }

    return 0;
}