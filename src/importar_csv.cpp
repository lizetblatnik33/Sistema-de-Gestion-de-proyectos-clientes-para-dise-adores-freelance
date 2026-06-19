#include "importar_csv.h"
#include <fstream>
#include <sstream>

using namespace std;

// Lee un archivo CSV usando con | como separador
// para evitar desbordamientos de columnas si el usuario coloco una coma en sus datos.
void importarCSV(vector<Proyecto>& proyectos, const string& archivo) {
    ifstream in(archivo);
    if(!in) return;
    string linea;
    while(getline(in, linea)) {
        if(linea.empty()) continue;
        stringstream ss(linea);
        Proyecto p;
        getline(ss, p.id, '|'); getline(ss, p.nombre, '|');
        getline(ss, p.categoria, '|'); getline(ss, p.cliente, '|');
        getline(ss, p.anio, '|'); getline(ss, p.presupuesto, '|');
        getline(ss, p.contacto, '|');
        proyectos.push_back(p);
    }
}