#include "exportar_csv.h"
#include <fstream>

using namespace std;

//Guarda todo el inventario de proyectos en un archivo de texto .csv
//Separacada campo con el simbolo |
void exportarCSV(const vector<Proyecto>& proyectos, const string& archivo) {
    ofstream out(archivo);
    if(!out) return;
    for(const auto& p : proyectos) {
        out << p.id << "|" << p.nombre << "|" << p.categoria << "|" 
            << p.cliente << "|" << p.anio << "|" << p.presupuesto << "|" << p.contacto << "\n";
    }
}