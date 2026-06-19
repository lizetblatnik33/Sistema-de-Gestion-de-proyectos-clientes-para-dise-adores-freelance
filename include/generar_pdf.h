// ==========================================
// 13. generar_pdf.h 
// ==========================================
#ifndef GENERAR_PDF_H
#define GENERAR_PDF_H
#include <vector>
#include "proyecto.h"

using namespace std;

// Explicacion: Declaracion de la funcion para generar el reporte imprimible.
void generarPDF(const vector<Proyecto>& proyectos);
#endif