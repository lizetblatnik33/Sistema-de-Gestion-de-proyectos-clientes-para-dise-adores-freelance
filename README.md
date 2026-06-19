# Sistema-de-Gestion-de-proyectos-clientes-para-disenadores-freelance
Sistema modular en C++ para diseñadores freelance. Gestiona proyectos mediante un CRUD con persistencia binaria. Aplica algoritmos de ordenación (Burbuja e Intercalación) por monto y búsquedas binarias (recursiva e iterativa). Incluye auto-carga de datos, exportación segura a CSV y generación de reportes nativos en formato PDF.

* **Asignatura:** Programación I
* **Sigla / Código:** SIS-112
* **Tipo de Evaluación:** Examen Final — Proyecto Integrador
* **Dimensiones Evaluadas:** Dimensión 1 + Dimensión 2 + Dimensión 3
* **Gestión:** 1/2026 (Semana 19)
* **Docente:** Ing. Pamela Shirley Valenzuela Fernández
* **Estudiante:** Lizet Blatnik
* **Enlace del Repositorio:** [GitHub - Lizet Blatnik](https://github.com/lizetblatnik33/Sistema-de-Gestion-de-proyectos-clientes-para-dise-adores-freelance)

---

## Explicación del Dominio de Datos y Estructuras (Structs)

El dominio de este proyecto está enfocado en resolver las necesidades administrativas y de organización de un profesional o estudio de diseño freelance (trabajando además con los requerimientos que se le ppidieron a este proyecto en la rubrica 11- Registro de clientes/proyectos – freelance- Buscar cliente por RUT/código interno-Ordenar clientes por monto facturado). El sistema permite gestionar un portafolio de proyectos, controlando el registro de clientes, categorías de trabajo, fechas y, especialmente, el control financiero a través de presupuestos/montos facturados.

Para modelar este dominio y resolver los requisitos técnicos del proyecto, se implementaron las siguientes tres estructuras principales (`structs`):

1. **`Proyecto`**: Es la entidad central (Dominio). Almacena los detalles de cada trabajo: 
   * `id` (RUT o código interno del cliente)
   * `nombre` (Título del proyecto)
   * `categoria` (Área de trabajo: web, branding, UX, etc.)
   * `cliente` (Nombre de la empresa o persona)
   * `anio` (Año de realización)
   * `presupuesto` (Monto facturado en Bs.)
   * `contacto` (Email o teléfono).
2. **`ResultadoBusqueda`**: Estructura de apoyo creada para cumplir con el requisito de *retorno múltiple* en las búsquedas binarias. Retorna simultáneamente el `indice` donde se encontró el elemento y la cantidad de `iteraciones` que le tomó al algoritmo encontrarlo.
3. **`MetricasOrdenacion`**: Estructura pasada *por referencia* a los algoritmos de ordenamiento (Burbuja y Mezcla/Merge) para registrar y extraer el número exacto de `comparaciones` e `intercambios/movimientos` realizados durante la ejecución.

---

## Instrucciones de Compilación y Ejecución

El proyecto está diseñado bajo el paradigma modular con una estricta separación de directorios. Asegúrese de que su entorno respeta la siguiente estructura antes de compilar:

```text
NombreProyecto/
 ├── include/      (Contiene todos los archivos .h)
 ├── src/          (Contiene todos los archivos .cpp excepto main)
 ├── data/         (Carpeta requerida para los archivos .dat, .csv y PDF)
 └── main.cpp      (Archivo principal sin lógica de negocio)
