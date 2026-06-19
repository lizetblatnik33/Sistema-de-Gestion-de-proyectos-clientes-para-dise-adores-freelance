#include "reporte_comparativo.h"
#include "ordenar_burbuja.h"
#include "ordenar_mezcla_presupuesto.h"
#include <iostream>

using namespace std;

//Realiza copias del arreglo original y las ordena usando burbuja y mezclan
//imprime una tabla comparativa mostrando cuantas comparaciones e intercambios realizo cada uno.
void generarReporteComparativo(const vector<Proyecto>& originales) {
    if(originales.empty()) return;
    vector<Proyecto> copia1 = originales;
    vector<Proyecto> copia2 = originales;
    MetricasOrdenacion mBurbuja, mIntercalacion; // <-- Cambio aqui

    ordenarBurbujaPresupuesto(copia1, mBurbuja);
    ordenarMezclaPresupuesto(copia2, mIntercalacion); // <-- Cambio aqui

    cout << "\n=== REPORTE COMPARATIVO DE ORDENACION (Por Monto Facturado) ===\n";
    cout << "Algoritmo: Burbuja (Optimizado)\n";
    cout << "  - Comparaciones: " << mBurbuja.comparaciones << "\n";
    cout << "  - Intercambios:  " << mBurbuja.intercambios << "\n\n";
    cout << "Algoritmo: Intercalacion\n"; // <-- Cambio aqui
    cout << "  - Comparaciones: " << mIntercalacion.comparaciones << "\n";
    cout << "  - Movimientos:   " << mIntercalacion.intercambios << "\n";
    cout << "===============================================================\n";
}