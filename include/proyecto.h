#ifndef PROYECTO_H
#define PROYECTO_H
#include <string>

using namespace std;

// Propósito: Estructura base para el dominio del sistema (Proyectos/Clientes)
struct Proyecto {
    string id;          // RUT o código interno
    string nombre;
    string categoria;
    string cliente;
    string anio;
    string presupuesto; // Monto facturado
    string contacto;
};

// Propósito: Estructura para retornar múltiples valores en la búsqueda
struct ResultadoBusqueda {
    int indice;
    int iteraciones;
};

// Propósito: Estructura para almacenar contadores del reporte comparativo
struct MetricasOrdenacion {
    long long comparaciones;
    long long intercambios;
};
#endif
