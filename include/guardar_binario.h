// ==========================================
// 11. guardar_binario.h 
// ==========================================
#ifndef GUARDAR_BINARIO_H
#define GUARDAR_BINARIO_H
#include <vector>
#include <string>
#include "proyecto.h"

using namespace std;

// Explicacion: Declaracion de la funcion para escribir archivos .dat
void guardarBinario(const vector<Proyecto>& proyectos, const string& archivo);
#endif