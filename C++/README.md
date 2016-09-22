# Programacion con C++

Este directorio contiene programas que elabore para resolver las consignas de la practica de programacion en C++.

**Comando para compilar codigo C++ en bash**
!Atencion! necesario avisar al compilador si utilizamos código C++11:

`g++ main.cpp -o main -std=c++11` 


##  Clase 1. Resolución ejercicios 1.

`matrices.cpp` codigo que multiplica matrices cuadradas dadas y luego halla el promedio y el desvio standar de los elementos de la matriz producto.
Uso de **for**, **cout**, **pow()**

## Clase 1. Resolucion ejercicio 2

`sumacuadrados.cpp` Suma cuadrados de enteros consecutivos desde 1 hasta entero, n, ingresado por pantalla.
Uso de **cin**, **while**, **for**, **do...while**.

## Clase 2. Resolucion ejercicio 1

`example.cpp` muestra como pasar REFENCIA de array bidimensional (matriz) como argumento de funcion.

`matrices2.cpp` Resuelve multiplicacion de matrices. Lee matrices de un archivo de datos utilizando una funcion. Multiplica matrices llamando a una funcion. Los argumentos de las funciones se pasan por referencia. Escribe la matriz producto en un archivo nuevo.
Uso **&**, **fstream**, **void**

## Clase 2. Resolucion ejercicio 2.

`sumafunciones.cpp` Codigo que realiza sumatoria de funciones enteras, la cota para la sumoatoria es un limite natural para el agumento de la funcion. Es dado por el usuario. El usuario tambien elige, entre 3 candidatas, la funcion quiere sumara. 
Uso **punteros**, pasaje de funciones como argumentos: **tipo(*)(tipo arg)**, **if**. Para tener input output de archivos: **fstream**. Para formatear E/S: **iomanip**.
 
`A.txt` y `B.txt` archivos de datos,  `C.txt` archivo de salida.



#### NOTAS sobre sintáxis de C++
Las sentencias finalizan con ";".
Los bloques o estamentos de funciones van entre "{   }".
Los string van entre comillas DOBLES (no acepta las simples).
Las funciones se declaran antes de main().






