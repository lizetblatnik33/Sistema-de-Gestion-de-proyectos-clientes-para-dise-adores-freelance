#include <iostream>
#include <vector>
#include <string>
#include "proyecto.h"
#include "crud.h"
#include "cargar_binario.h"
#include "guardar_binario.h"
#include "sembrar_datos.h"
#include "ordenar_id.h"
#include "ordenar_burbuja.h"
#include "ordenar_mezcla_presupuesto.h" 
#include "busqueda_binaria_recursiva.h"
#include "busqueda_binaria_iterativa.h"
#include "reporte_comparativo.h"
#include "intercalacion.h"
#include "generar_pdf.h"
#include "importar_csv.h"
#include "exportar_csv.h"
#include "mostrar_menu.h"
#include "pausa.h"
#include "limpiar.h"

using namespace std;

//Funcion principal, gestiona las llamadas al menu,
//inicializa los datos binarios y pone cada opcion al modulo correcto
int main() {
    vector<Proyecto> proyectos;
    const string archivoDatos = "data/proyectos.dat";

    cargarBinario(proyectos, archivoDatos);

    if(proyectos.empty()) {
        sembrarDatos(proyectos);
        guardarBinario(proyectos, archivoDatos);
    }

    int opcion;
    do {
        mostrarMenu();
        cin >> opcion; cin.ignore();

        switch(opcion) {
            case 1:
                crearProyecto(proyectos);
                guardarBinario(proyectos, archivoDatos);
                pausa(); break;
            case 2:
                listarProyectos(proyectos);
                pausa(); break;
            case 3:
                modificarProyecto(proyectos);
                guardarBinario(proyectos, archivoDatos);
                pausa(); break;
            case 4:
                eliminarProyecto(proyectos);
                guardarBinario(proyectos, archivoDatos);
                pausa(); break;
            
            case 5: { 
                MetricasOrdenacion m;
                ordenarBurbujaPresupuesto(proyectos, m);
                guardarBinario(proyectos, archivoDatos);
                cout << "\n[!] Base de datos ordenada por monto usando Burbuja Optimizado.\n";
                cout << "Se realizaron " << m.comparaciones << " comparaciones y " << m.intercambios << " intercambios.\n";
                pausa(); break;
            }
            case 6: { 
                MetricasOrdenacion m;
                ordenarMezclaPresupuesto(proyectos, m);
                guardarBinario(proyectos, archivoDatos);
                cout << "\n[!] Base de datos ordenada por monto usando Mezcla.\n";
                cout << "Se realizaron " << m.comparaciones << " comparaciones y " << m.intercambios << " movimientos.\n";
                pausa(); break;
            }
            case 7: 
                generarReporteComparativo(proyectos);
                pausa(); break;
            case 8: { 
                if (proyectos.empty()) { cout << "\nNo existen registros.\n"; break; }
                ordenarPorID(proyectos);
                string idBuscado;
                cout << "\nIngrese RUT/ID a buscar (Recursiva): "; getline(cin, idBuscado);
                ResultadoBusqueda res = busquedaBinariaRecursiva(proyectos, 0, proyectos.size() - 1, idBuscado);
                if (res.indice != -1) {
                    cout << "\n[Encontrado en " << res.iteraciones << " iteraciones]\n";
                    mostrarProyecto(proyectos[res.indice], res.indice + 1);
                } else cout << "\nNo encontrado. (Iteraciones: " << res.iteraciones << ")\n";
                pausa(); break;
            }
            case 9: { 
                if (proyectos.empty()) { cout << "\nNo existen registros.\n"; break; }
                ordenarPorID(proyectos);
                string idBuscado;
                cout << "\nIngrese RUT/ID a buscar (Iterativa): "; getline(cin, idBuscado);
                ResultadoBusqueda res = busquedaBinariaIterativa(proyectos, idBuscado);
                if (res.indice != -1) {
                    cout << "\n[Encontrado en " << res.iteraciones << " iteraciones]\n";
                    mostrarProyecto(proyectos[res.indice], res.indice + 1);
                } else cout << "\nNo encontrado. (Iteraciones: " << res.iteraciones << ")\n";
                pausa(); break;
            }
            case 10: 
                intercalarArchivosBinarios();
                pausa(); break;
            case 11: 
                generarPDF(proyectos);
                pausa(); break;
            case 12: 
                exportarCSV(proyectos, "data/backup.csv");
                cout << "\nExportado seguro usando '|' a data/backup.csv\n";
                pausa(); break;

            case 0:
                cout << "\nSaliendo del sistema...\n";
                break;
            default:
                cout << "\nOpcion no valida.\n";
                pausa();
        }
        limpiar();
    } while (opcion != 0);

    return 0;
}