#include "busqueda_binaria_iterativa.h"

using namespace std;

//Busca un proyecto por su ID usando un bucle while para dividir el vector
//Retorna el indice y la cantidad de ciclos iterativos que tomo encontrar el proyecto
ResultadoBusqueda busquedaBinariaIterativa(const vector<Proyecto>& arr, const string& idBuscado) {
    int izq = 0, der = arr.size() - 1, iteraciones = 0;
    while (izq <= der) {
        iteraciones++;
        int medio = izq + (der - izq) / 2;
        if (arr[medio].id == idBuscado) return {medio, iteraciones};
        if (idBuscado < arr[medio].id) der = medio - 1;
        else izq = medio + 1;
    }
    return {-1, iteraciones};
}