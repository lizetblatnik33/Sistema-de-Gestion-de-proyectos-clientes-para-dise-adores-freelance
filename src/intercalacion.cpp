#include "intercalacion.h"
#include "proyecto.h"
#include "cargar_binario.h"
#include "guardar_binario.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void intercalarArchivosBinarios() {
    vector<Proyecto> v1, v2, resultado;
    string file1 = "data/portafolio1.dat";
    string file2 = "data/portafolio2.dat";
    string fileFinal = "data/portafolio_completo.dat";

    cargarBinario(v1, file1);
    cargarBinario(v2, file2);

    //Si los archivos no existen, los creamos con datos de prueba listos y ordenados
    if(v1.empty() && v2.empty()) {
        cout << "[!] Generando archivos de prueba: portafolio1.dat y portafolio2.dat...\n";
        v1.push_back({"A1", "App iOS", "UX", "Empresa A", "2023", "1000", "a@mail.com"});
        v1.push_back({"A2", "Web API", "web", "Empresa B", "2024", "3000", "b@mail.com"});
        
        v2.push_back({"B1", "Logo", "branding", "Cliente X", "2022", "500", "x@mail.com"});
        v2.push_back({"B2", "Dashboard", "UX", "Cliente Y", "2023", "2500", "y@mail.com"});
        v2.push_back({"B3", "E-commerce", "web", "Cliente Z", "2024", "4000", "z@mail.com"});
        
        guardarBinario(v1, file1);
        guardarBinario(v2, file2);
    }

    //Logica de intercalacion comparando el presupuesto
    int i = 0, j = 0;
    while (i < (int)v1.size() && j < (int)v2.size()) {
        if (stod(v1[i].presupuesto) <= stod(v2[j].presupuesto)) {
            resultado.push_back(v1[i]);
            i++;
        } else {
            resultado.push_back(v2[j]);
            j++;
        }
    }

    while (i < (int)v1.size()) {
        resultado.push_back(v1[i]);
        i++;
    }

    while (j < (int)v2.size()) {
        resultado.push_back(v2[j]);
        j++;
    }

    //Guardar el archivo final
    guardarBinario(resultado, fileFinal);
    cout << "\nArchivos intercalados correctamente en 'data/portafolio_completo.dat'.\n";
    cout << "Total de proyectos fusionados en el nuevo archivo: " << resultado.size() << "\n";
}