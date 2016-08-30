## Script en BASH. Ejercicios.

Este directorio contiene scripts en BASH (`*.sh`) de práctica.
Para ejecutar: `$ bash script.sh `

`ej1-2.sh`  Levanta texto de archivo, inserta lineas vacias (interlineado). Luego eliminia lineas creadas, volviendo al archivo original.

Para ejecutar:
`$: bash ej1-2.sh [archivo]` archivo es el nombre del archivo a procesar, se ingresa como primer argumento.

Utiliza:

* **echo**: definir variable de nombre de archivo a procesar.
* **cat**: Levantar contenido de archivo.
* **|**: (pipe) para unir salida de un programa y entrada de otro.
* **sed**: programa para intercalar lineas, extraer lineas, etc.
* **>**: (stdout) direccionar salida (pantalla defoult)


`ej3-4.sh` Opera con `data` que tiene 3 columnas: tiempo, energia cinetica y energia potencial. Calula la Energia total a cada momento y la guarad en `Etotal.txt` Calcula Energia potencial media (promedio simple) para el intervalo tiempo en [cota;t_final]

Para ejecutar:
`$: bash ej3-4.sh [archivo] [cota]`

Primer argumento [archivo]: Es el nombre del archivo a procesar.
Segundor argumento [cota] : cota temporal inferior para datos admitidos [0;3.0].

Usa todas las herramientas anteriores más **awk**

### Notas

Index empiezan desde el 0.

Variables de bash dentro de awk, van entre comillas simples `''`
