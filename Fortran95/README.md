# Programacion con Fortran95

## Resolución ejercicios 1 (9/8/2016)

`matrices.f95` es un codigo fortran que multiplica dos matrices con dimension maxima de 50x50. Programado con mis conocimientos previos de Fortran77.
 Las matrices y sus respectivas dimensiones son leidas de los archivos matriz1 y matriz2.
 Evalua si la matriz tiene algun elemento negativo o todos los elementos positivos.
 Imprime los resultados y los mensajes por pantalla.

`matriz1` y `matriz2` : archivos de datos. La primera linea de archivo contiene el nro de filas y el nro de columnas en ese orden.


## Resolución ejercicios 2 (20/8/2016)
`mat2.f95` Programa ppal que resuelve las consignas del Ejercico 1 pero usando herramientas nuevas de Fortran95. Implementa subroutina `leermat.f95` y modulo `comunes.f95`.

Los archivops con las matrices de datos son los mismos que en el ejercico 1.

En 'overview.md' hay una reseña de las nuevas herramientas que aprendi a usar.

## Practica de modulos

`testmodule.f95` programa que testea el uso de modulo que contiene una subrutina con funciones para obtener caracteristicas de un vector de dimension cualquiera.

NO SE COMO HACER para que fortran determine el tamaño de un arreglo al leerlo de un archivo. Hasta ahora Tuve que explicitarlo en un modulo o el main si o si. =(



