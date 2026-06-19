#include "ordenar_burbuja.h"
#include <algorithm>

using namespace std;

//Ordena los proyectos de menor a mayor monto facturado mediante burbuja optimizado
//Incrementa los contadores de comparaciones e intercambios para el reporte comparativo
void ordenarBurbujaPresupuesto(vector<Proyecto>& arr, MetricasOrdenacion& metricas) {
    metricas.comparaciones = 0; metricas.intercambios = 0;
    int n = arr.size();
    for(int i = 0; i < n - 1; i++) {
        bool huboIntercambio = false;
        for(int j = 0; j < n - i - 1; j++) {
            metricas.comparaciones++;
            if(stod(arr[j].presupuesto) > stod(arr[j+1].presupuesto)) { 
                swap(arr[j], arr[j+1]);
                metricas.intercambios++;
                huboIntercambio = true;
            }
        }
        if(!huboIntercambio) break;
    }
}