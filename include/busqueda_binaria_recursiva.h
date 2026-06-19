#ifndef BUSQUEDA_BINARIA_RECURSIVA_H
#define BUSQUEDA_BINARIA_RECURSIVA_H
#include <vector>
#include <string>
#include "proyecto.h"

using namespace std;

// Explicacion: Declaracion de la funcion de busqueda binaria usando recursividad.
ResultadoBusqueda busquedaBinariaRecursiva(const vector<Proyecto>& arr, int izq, int der, const string& idBuscado, int iteraciones = 0);
#endif

