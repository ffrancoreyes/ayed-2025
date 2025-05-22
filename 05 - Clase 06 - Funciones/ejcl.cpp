//Realizar una función a la cual le pasamos un vector, su 
#include <iostream>
using namespace std;
int buscaMayores(int vec[],int,int&); // prototipo de la función
int main() {
	//inicalizamos un vector de 100 números
	int numero[100] = {22,30,31,36,2,34,17,18,24,15,26,18,11,2,38,2,28,35,17,4,17,37,10,6,39,9,32,17,25,15,32,8,9,8,4,23,4,16,8,9,14,17,16,39,36,8,34,6,6,28,18,10,5,33,3,19,24,30,7,32,18,17,28,33,26,29,4,18,14,5,5,20,12,12,26,40,10,31,8,7,18,19,30,4,7,12,14,17,24,25,6,24,33,36,34,12,11,28,19,30};
	
    int mayoresQue15, i=101, a = 28;
	mayoresQue15 = buscaMayores(numero,i,a);
    cout << "los mayores son " << mayoresQue15 << endl;
    for (int i = 0; i <101; i++){
        cout << numero[i] << " ";
    }
    cout << endl;
    cout << a << endl;
    return 0;
}

//función para buscar la cantidad de elementos mayores a 15
int buscaMayores(int vector[],int longitud, int& numero){
	int mayores=0; //variable para contar los valores mayores a 15
    for(int i = 0;i < longitud;i++){
		if(vector[i]>numero){ //si el número del vector[i] es mayor que 15, suma uno a la cantidad de elementos mayores a 15
            mayores++;
            vector[i] = -5;
        }
    }
    numero = 45;
    return mayores;
}
 
