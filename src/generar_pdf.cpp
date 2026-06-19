#include "generar_pdf.h"
#include <fstream>
#include <iostream>

using namespace std;

//Crea un archivo HTML formateado como tabla dentro de la carpeta data
//Este archivo funciona como un reporte que el usuario puede imprimir y guardar como PDF
void generarPDF(const vector<Proyecto>& proyectos) {
	
    ofstream out("data/reporte_proyectos.html");
    
    if(!out){ 
		cout << "Error al generar PDF. Asegurese de que la carpeta 'data' exista.\n"; return; 
	}
    
    out << "<!DOCTYPE html><html><head><meta charset='UTF-8'><title>Reporte de Proyectos</title></head>";
    out << "<body style='font-family: Arial, sans-serif;'><h1>Reporte Financiero de Proyectos (PDF)</h1>";
    out << "<table border='1' style='border-collapse: collapse; width: 100%; text-align: left;'>";
    out << "<tr style='background-color: #f2f2f2;'><th>RUT/ID</th><th>Nombre</th><th>Cliente</th><th>Monto Facturado</th></tr>";
    
    for(const auto& p : proyectos) {
        out << "<tr><td>" << p.id << "</td><td>" << p.nombre << "</td>";
        out << "<td>" << p.cliente << "</td><td>Bs. " << p.presupuesto << "</td></tr>";
    }
    
    out << "</table><p><i>Generado automaticamente por el sistema. Puede imprimir esta pagina como PDF (Ctrl+P).</i></p></body></html>";
    
    cout << "\n[!] Reporte 'data/reporte_proyectos.html' (Formato PDF visual) generado correctamente.\n";
}