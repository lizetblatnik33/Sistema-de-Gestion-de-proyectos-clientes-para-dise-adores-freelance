#include "ordenar_mezcla_presupuesto.h"
#include "ordenar_mezcla_recursivo.h" //inicia recursion

using namespace std;

// Inicia el proceso de ordenacion general por Mezcla
// Reinicia las metricas a 0 y llama a la funcion recursiva principal
void ordenarMezclaPresupuesto(vector<Proyecto>& arr, MetricasOrdenacion& metricas) {
    metricas.comparaciones = 0; metricas.intercambios = 0;
    if(arr.empty()) return;
    ordenarMezclaRecursivo(arr, 0, arr.size() - 1, metricas);
}