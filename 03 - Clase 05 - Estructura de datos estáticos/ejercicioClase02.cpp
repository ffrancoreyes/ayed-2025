//dado un lote de números enteros positivos, determine la suma, la cantidad, el promedio, el mayor (incluir posición), menor (incluir posición), diferencia entre ellos.
#include <iostream>
using namespace std;

int main(){
    //declaro las variables que voy a usar
    int contador = 0, mayor, menor, mayorPosi = 1, menorPosi = 1, rango;
    float promedio,suma = 0;
    
    //le voy a pedir al usuario que ingrese un número y a ese número lo igualo a mayor y menor para hacer la comparación posteriormente
    int numIngresado;
    cout << "ingrese un numero: ";
    cin >> numIngresado;
    mayor = numIngresado;
    menor = numIngresado;

    //mientras que el número ingresado no sea 0, va a repetir el bucle
    while(numIngresado != 0){
        //incremento el contador
        contador++;        
        suma+= numIngresado; //sumo el valor ingresado a los anteriores
        if(numIngresado > mayor){ //en caso de que el número sea mayor que el anterior
            mayor = numIngresado; //guarda el número
            mayorPosi = contador; // guarda la posición
        }
        if(numIngresado < menor){ //en caso de que el número sea menor que el anterior
            menor = numIngresado;  //guarda el número
            menorPosi = contador; //guarda la posición
        }

        //vuelvo a preguntar al usuario que ingrese un número
        cout << "ingrese un numero: ";
        cin >> numIngresado;
       
    }
    
    promedio = suma / contador; //hago el cálculo del promedio
    rango = mayor - menor;
    //muestro todos los resultados
    cout << "La suma es: " << suma << endl; 
    cout << "El promedio es: " << promedio << endl;
    cout << "La cantidad de elementos: " << contador << endl;
    cout << "El mayor fue: " << mayor << ", su posicion [" << mayorPosi << "]" << endl;
    cout << "El menor fue: " << menor << ", su posicion [" << menorPosi << "]" << endl;
    cout << "el rango es: " << rango << endl;
 
    return 0;
}