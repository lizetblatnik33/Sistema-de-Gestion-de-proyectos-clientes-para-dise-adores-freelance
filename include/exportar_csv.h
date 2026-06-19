#ifndef EXPORTAR_CSV_H
#define EXPORTAR_CSV_H
#include <vector>
#include <string>
#include "proyecto.h"

using namespace std;

// Explicacion: Declaracion de la funcion para guardar en CSV seguro.
void exportarCSV(const vector<Proyecto>& proyectos, const string& archivo);
#endif