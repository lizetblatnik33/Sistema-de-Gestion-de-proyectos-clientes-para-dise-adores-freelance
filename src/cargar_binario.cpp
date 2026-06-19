#include "cargar_binario.h"
#include <fstream>

using namespace std;

//Lee un archivo binario .dat byte por byte y reconstruye los strings 
//para cargarlos nuevamente en la memoria (el vector de proyectos)
void cargarBinario(vector<Proyecto>& proyectos, const string& archivo) {
    ifstream in(archivo, ios::binary);
    if(!in) return;
    size_t size;
    if(!in.read(reinterpret_cast<char*>(&size), sizeof(size))) return;
    proyectos.clear();
    for(size_t i=0; i<size; ++i) {
        auto readStr = [&in]() {
            size_t len;
            in.read(reinterpret_cast<char*>(&len), sizeof(len));
            string str(len, '\0');
            in.read(&str[0], len);
            return str;
        };
        Proyecto p;
        p.id = readStr(); p.nombre = readStr(); p.categoria = readStr();
        p.cliente = readStr(); p.anio = readStr(); p.presupuesto = readStr();
        p.contacto = readStr();
        proyectos.push_back(p);
    }
}