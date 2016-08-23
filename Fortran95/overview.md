# Me reconcilié con Fortran cuando me enseñaron F95.

Aqui cuento lo que aprendí de F95. 'mat2.f95' es un programa donde aplico las nuevas herramientas.

## MUCHAS Funciones intrinsicas

Con Fortran95 operar con array es mucho mas simple, dispone de funciones intrinsecas 'listas para hornear'. Ejemplos: `MATMUL(mat1,mat2)`, `MAXVAL(array)`, + `MINVAL`, `SHAPE(array)`(tira dimensiones de la matriz), `RESHAPE(array,(\#F,#C\))`(reordena elementos en la forma que querramos). 

## Recorro arrays facilito como en lenguajes interpretados

Leer array deja de necesitar 10 lineas. Con un stament estamos hechos, **ALELUYA**. 
Ejemplo de lectura de una matriz: 
`<addr>``READ(UNIT= ,*) MATRIZ(1:#fil,1:#colum)`

## ALLOCATABLE

Fortran exije asignación de tamaño de memoria para las variables pero ahora con `allocate/dellocate` se puede ajustar la asignacion de memoria a medida que mi programa lo requiera. Asi no tenemos que trabajar con arreglos gigantes todo el tiempo. (Lo que tambien nos ahorra varios DO implicit)

## Interface y DIMENSIONES ASUMIDAS

En los bloques `interface/end interface` van los encabezados de declaracion de variables de los procedimientos llamados por un programa. Esto facilita identificar errores de compilación por no correspondencia de argumentos. Y permite NO ESPECIFICAR previamente las dimensiones de los arrays, cuando estos se pasan como argumentos.

Ejemplo de pasaje de tamaño de un array en _forma asumida_: 
`<addr>Subroutine PROCEDIMIENTO (mat)`
`<addr>real, dimension(:,:) :: mat`

TENGO UNA OBJECION: El bloque interface puede hacerse un verdadero choclo en el programa main, lo que es molesto la verdad. Hay formas de definirlo sin tener que verlo, pero no sé como aún.

## MODULE

Los módulos son bloques que me permiten compartir información entre procedimientos (funciones, subrutinas, programas). Variables definidas en module no tienen que ser declaradas en los procedimientos que las usen, pues ese espacio de memoria ya esta asignado.

Tengo que agregar el statement `use [nombre-modulo]` en los procedimiento que usen la informacion en nombre-modulo.

**Module tambien puede contener otros procedimientos.** dentro del statement `contains`. Los procedimientos que esten contenidos en un modulo NO HAY QUE DECLARARLOS EN LOS BLOQUES INTERFACE, porque que module lo hace implicitamente.


## INTENT(in), INTENT(out)

Se usan para declarar en una subrutina los argunmentos de entrada y los argumentos de salida. Esto ayuda a evitar errores en la compi-ejecucion.

=)




