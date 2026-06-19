#include "ordenar_mezcla_recursivo.h"
#include "mezclar_mitades.h" //se lo necesita internamente

using namespace std;

// Recursiva de Mezcla, divide el arreglo a la mitad hasta tener
// fragmentos de un elemento, para luego llamar a mezclarMitades
void ordenarMezclaRecursivo(vector<Proyecto>& arr, int l, int r, MetricasOrdenacion& metricas) {
    if(l >= r) return;
    int m = l + (r - l) / 2;
    ordenarMezclaRecursivo(arr, l, m, metricas);
    ordenarMezclaRecursivo(arr, m + 1, r, metricas);
    mezclarMitades(arr, l, m, r, metricas);
}