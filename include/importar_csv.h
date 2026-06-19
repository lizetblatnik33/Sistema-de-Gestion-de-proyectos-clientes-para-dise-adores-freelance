// ==========================================
// 14. importar_csv.h 
// ==========================================
#ifndef IMPORTAR_CSV_H
#define IMPORTAR_CSV_H
#include <vector>
#include <string>
#include "proyecto.h"

using namespace std;

// Explicacion: Declaracion de la funcion para importar el backup en texto plano seguro.
void importarCSV(vector<Proyecto>& proyectos, const string& archivo);
#endif