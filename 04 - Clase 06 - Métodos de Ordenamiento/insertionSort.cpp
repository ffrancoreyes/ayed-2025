#include <iostream> 
using namespace std;

int main() {
    int len = 10;
    int arreglo[len] = {8, 3, 5, 4, 7, 6, 1, 9, 2, 0};
    int clave; // Variable para almacenar el valor a insertar

    for (int i = 1; i < len; i++) {
        clave = arreglo[i]; // Valor actual a insertar
        int j = i - 1;
        while (j >= 0 && arreglo[j] > clave) {
            arreglo[j + 1] = arreglo[j]; // Desplaza el elemento mayor una posición a la derecha
            j--; // Avanza hacia la izquierda para seguir comparando
        }
        arreglo[j + 1] = clave; // Inserta el valor de clave en la posición correcta dentro del arreglo ordenado
    }

    cout << "Insertion Sort: ";
    for (int i = 0; i < len; i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;
    return 0;
}