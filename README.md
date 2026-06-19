<div align="center">

# Sistema de Gestión de Proyectos y Clientes para Disenadores Freelance

<img src="[https://cdn.pixabay.com/photo/2020/07/08/04/12/work-5382501_1280.jpg](https://cdn.pixabay.com/photo/2020/07/08/04/12/work-5382501_1280.jpg)" alt="Computadora con programa de diseño" width="500">

Sistema modular en C++ para diseñadores freelance. Gestiona proyectos mediante un CRUD con persistencia binaria. Aplica algoritmos de ordenación (Burbuja e Intercalación) por monto y búsquedas binarias (recursiva e iterativa). Incluye auto-carga de datos, exportación segura a CSV y generación de reportes nativos en formato PDF.

**Asignatura:** Programación I <br>
**Sigla / Código:** SIS-112 <br>
**Tipo de Evaluación:** Examen Final — Proyecto Integrador <br>
**Dimensiones Evaluadas:** Dimensión 1 + Dimensión 2 + Dimensión 3 <br>
**Gestión:** 1/2026 (Semana 19) <br>
**Docente:** Ing. Pamela Shirley Valenzuela Fernández <br>
**Estudiante:** Lizet Blatnik <br>
**Enlace del Repositorio:** [GitHub - Lizet Blatnik](https://github.com/lizetblatnik33/Sistema-de-Gestion-de-proyectos-clientes-para-dise-adores-freelance)

<br>
</div>

---
## Explicación del Dominio de Datos y Estructuras (Structs)

El dominio de este proyecto está enfocado en resolver las necesidades administrativas y de organización de un profesional o estudio de diseño freelance (proyecto 11 en el documento de instrucciones). El sistema permite gestionar un portafolio de proyectos, controlando el registro de clientes, categorías de trabajo, fechas y, especialmente, el control financiero a través de presupuestos/montos facturados.

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
```

**Pasos para compilar en consola (usando g++ o MinGW):**

1. Abra una terminal y navegue hasta la carpeta raíz del proyecto (donde se encuentra el `main.cpp`).
2. Asegúrese de que la carpeta `data/` exista. Si no existe, créela manualmente ejecutando: `mkdir data`
3. Ejecute el siguiente comando para vincular y compilar correctamente las librerías propias:

```bash
g++ src/*.cpp main.cpp -I include -o sistema_freelance
```

**Para ejecutar el programa:**

* **En Windows:** Escriba y ejecute `sistema_freelance.exe`
* **En Linux/Mac:** Escriba y ejecute `./sistema_freelance`

---

## Guía de Uso Rápido del Programa

Al iniciar el sistema por primera vez, el programa detectará si no existen registros previos y ejecutará una **Carga Mínima Automatizada (Seeding)** inyectando 10 registros de prueba listos para ser manipulados.

* **Navegación:** Utilice los números del teclado correspondientes a las opciones listadas en pantalla y presione `Enter`.
* **Módulo CRUD (Opciones 1 al 4):** Permite registrar nuevos proyectos, listar el portafolio actual, modificar datos o darlos de baja. Todos los cambios se guardan instantáneamente de forma binaria.
* **Módulo de Ordenación (Opciones 5, 6 y 7):** Permite ordenar la base de datos según el monto facturado (presupuesto). Es obligatorio ejecutar el ordenamiento por ID de forma interna antes de realizar búsquedas, pero el sistema lo hace automáticamente. La **Opción 7** genera el reporte comparativo evaluando la eficiencia entre Burbuja Optimizado y Mezcla.
* **Módulo de Búsqueda (Opciones 8 y 9):** Permite encontrar clientes rápidamente a través de su RUT (ID) evaluando el rendimiento entre recursividad e iteración.
* **Módulo de Intercalación Binaria (Opción 10):** Permite fusionar dos archivos binarios (`portafolio1.dat` y `portafolio2.dat`) ordenándolos por presupuesto y guardando el resultado en `portafolio_completo.dat`. Si los archivos no existen, el sistema los autogenerará.
* **Exportación (Opciones 11 y 12):** Permite generar una vista imprimible en PDF (HTML adaptado) de la tabla de proyectos, o un backup en formato CSV seguro (separado por `|`).
