#include "busqueda_binaria_recursiva.h"

using namespace std;

//Busca un proyecto por su ID dividiendo el arreglo a la mitad y llamandose a si misma
//Retorna un struct con la posicion encontrada o -1 si no existe y el numero de llamadas recursivas realizadas
ResultadoBusqueda busquedaBinariaRecursiva(const vector<Proyecto>& arr, int izq, int der, const string& idBuscado, int iteraciones) {
    if (izq <= der) {
        int medio = izq + (der - izq) / 2;
        if (arr[medio].id == idBuscado) return {medio, iteraciones + 1};
        if (idBuscado < arr[medio].id) return busquedaBinariaRecursiva(arr, izq, medio - 1, idBuscado, iteraciones + 1);
        return busquedaBinariaRecursiva(arr, medio + 1, der, idBuscado, iteraciones + 1);
    }
    return {-1, iteraciones};
}