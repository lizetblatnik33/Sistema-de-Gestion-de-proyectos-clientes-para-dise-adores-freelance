#include "ordenar_id.h"
#include <algorithm>

using namespace std;

//Ordena el vector completo por id usando el metodo burbuja optimizado
//Requisito para que busquedas binarias funcionen 
void ordenarPorID(vector<Proyecto>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        bool intercambio = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].id > arr[j + 1].id) {
                swap(arr[j], arr[j + 1]);
                intercambio = true;
            }
        }
        if (!intercambio) break;
    }
}