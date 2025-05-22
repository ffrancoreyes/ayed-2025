#include <iostream>
using namespace std;

int main() {
    const int len = 10; // Define el tamaño del arreglo como constante
    int indiceMin; // Variable para almacenar el índice del valor mínimo
    int aux; // Variable auxiliar para realizar el intercambio
    int arreglo[len] = {8, 3, 5, 4, 7, 6, 1, 9, 2, 0}; // Inicializa el arreglo con 10 elementos

    // Bucle externo: recorre cada posición del arreglo excepto la última
    for (int i = 0; i < len - 1; i++) {
        indiceMin = i; // Supone que el mínimo está en la posición actual
        // Bucle interno: busca el valor mínimo en el resto del arreglo
        for (int j = i + 1; j < len; j++) {
            if (arreglo[j] < arreglo[indiceMin]) { // Si encuentra un valor menor
                indiceMin = j; // Actualiza el índice del mínimo
            }
        }
        // Intercambia el valor mínimo encontrado con el valor en la posición actual
        aux = arreglo[i];
        arreglo[i] = arreglo[indiceMin];
        arreglo[indiceMin] = aux;
    }

    cout << "Selection Sort: "; // Imprime el texto "Selection Sort: "
    // Imprime el arreglo ordenado
    for (int i = 0; i < len; i++){
      cout << arreglo[i] << " ";
    }
    cout << endl; // Salto de línea al final
    return 0; // Fin del programa
}