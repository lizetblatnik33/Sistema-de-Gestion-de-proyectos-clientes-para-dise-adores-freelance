#ifndef MEZCLAR_MITADES_H
#define MEZCLAR_MITADES_H
#include <vector>
#include "proyecto.h"

using namespace std;

// Explicacion: Declaracion de la subrutina que une dos sub-arreglos ordenados.
void mezclarMitades(vector<Proyecto>& arr, int l, int m, int r, MetricasOrdenacion& metricas);

#endif