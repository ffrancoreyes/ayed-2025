#include <iostream> 
using namespace std;

// Bubble Sort
int main() {
    int len = 10; // Tamaño del arreglo
    int arreglo[len] = {8, 3, 5, 4, 7, 6, 1, 9, 2, 0}; // Declara e inicializa el arreglo con 10 elementos
    int aux;  // Declara una variable auxiliar para realizar intercambios

    // Bucle externo para controlar la cantidad de pasadas necesarias
    for (int i = 0; i < len - 1; i++) {
        // Bucle interno para comparar elementos adyacentes en cada pasada
        for (int j = 0; j < len - i - 1; j++) { // 
            // Si el elemento actual es mayor que el siguiente, se intercambian
            if (arreglo[j] > arreglo[j + 1]) { // compara y si el actual es mayor que el siguiente, los intercambia
                aux = arreglo[j]; 
                arreglo[j] = arreglo[j + 1]; 
                arreglo[j + 1] = aux; 
            }
        }
    }

    cout << "Bubble Sort: "; 
    // Recorre el arreglo ya ordenado e imprime cada elemento
    for (int i = 0; i < len; i++){
        cout << arreglo[i] << " ";
    } 
    
    cout << endl; 
    return 0; 
}