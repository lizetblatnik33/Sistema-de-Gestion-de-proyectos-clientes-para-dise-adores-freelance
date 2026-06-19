#include "mostrar_menu.h"
#include <iostream>

using namespace std;

//Imprime un menu en consola con todas las opciones del sistema
void mostrarMenu() {
    cout << "\n-------------------------------------------------------\n";
    cout << "Gestion de proyectos y clientes para disenadores freelance\n";
    cout << "---------------------------------------------------------\n";
    cout << " 1. Registrar nuevo proyecto\n";
    cout << " 2. Listar todos los proyectos\n";
    cout << " 3. Modificar proyecto\n";
    cout << " 4. Eliminar proyecto\n";
    cout << " 5. Ordenar proyectos por Monto (Metodo: Burbuja)\n";
    cout << " 6. Ordenar proyectos por Monto (Metodo: Mezcla)\n";
    cout << " 7. Reporte comparativo de Ordenacion (Por Monto)\n";
    cout << " 8. Buscar cliente por RUT (Binaria Recursiva)\n";
    cout << " 9. Buscar cliente por RUT (Binaria Iterativa)\n";
    cout << " 10. Intercalar Portafolios Binarios (.dat)\n";
    cout << " 11. Generar Reporte PDF\n";
    cout << " 12. Exportar a CSV Seguro (|)\n";
    cout << " 0. Salir\n";
    cout << "-------------------------------------\n";
    cout << "Seleccione una opcion: ";
}