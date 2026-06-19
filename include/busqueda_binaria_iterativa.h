#ifndef BUSQUEDA_BINARIA_ITERATIVA_H
#define BUSQUEDA_BINARIA_ITERATIVA_H
#include <vector>
#include <string>
#include "proyecto.h"

using namespace std;

// Explicacion: Declaracion de la funcion de busqueda binaria usando un ciclo while.
ResultadoBusqueda busquedaBinariaIterativa(const vector<Proyecto>& arr, const string& idBuscado);
#endif