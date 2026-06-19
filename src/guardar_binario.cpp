#include "guardar_binario.h"
#include <fstream>

using namespace std;

//Convierte el vector  a bytes y lo guarda en un archivo binario
//Escribe el tamano general y luego los longitudes de cada string seguidas de su contenido.
void guardarBinario(const vector<Proyecto>& proyectos, const string& archivo) {
    ofstream out(archivo, ios::binary);
    if(!out) return;
    size_t size = proyectos.size();
    out.write(reinterpret_cast<const char*>(&size), sizeof(size));
    for(const auto& p : proyectos) {
        auto writeStr = [&out](const string& str) {
            size_t len = str.length();
            out.write(reinterpret_cast<const char*>(&len), sizeof(len));
            out.write(str.c_str(), len);
        };
        writeStr(p.id); writeStr(p.nombre); writeStr(p.categoria);
        writeStr(p.cliente); writeStr(p.anio); writeStr(p.presupuesto);
        writeStr(p.contacto);
    }
}