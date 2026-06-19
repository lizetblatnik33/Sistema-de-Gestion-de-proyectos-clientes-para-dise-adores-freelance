#include "mezclar_mitades.h"
#include <string>

using namespace std;

//Mezcla, une dos subarreglos previamente ordenados
//organizandolos de menor a mayor monto y actualizando las metricas de rendimiento
void mezclarMitades(vector<Proyecto>& arr, int l, int m, int r, MetricasOrdenacion& metricas) {
    int n1 = m - l + 1, n2 = r - m;
    vector<Proyecto> L(n1), R(n2);
    
    for(int i = 0; i < n1; i++) L[i] = arr[l + i];
    for(int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];
    
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2) {
        metricas.comparaciones++;
        if(stod(L[i].presupuesto) <= stod(R[j].presupuesto)) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
            metricas.intercambios++;
        }
    }
    while(i < n1) { arr[k++] = L[i++]; metricas.intercambios++; }
    while(j < n2) { arr[k++] = R[j++]; metricas.intercambios++; }
}