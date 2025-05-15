#include <iostream>
using namespace std;
int main(){
    int numeros[5], i;
    for(i = 0; i <5; i++){
        cout << "ingrese un numero: ";
        cin >> numeros[i];
    }
    for(i = 0; i <5; i++){
        cout << numeros[i] << "  ";
    }
    for(i = 4; i>=0; i--){
        cout << "numero [" << i <<"]: " << numeros[i] << endl;
    }
    

    return 0;
}