#!/bin/bash
# Para ejecutar en terminal$: bash ej1-2.sh archivo

# lee nombre de archivo del 1er argumento en input 
echo "archivo:$1"

# levanta contenido "textfile", lo entuba a SED que agrega lineas vacias. La salida se guarda en "interlineado"
cat $1 | sed G > interlineado.txt

#Elimina lineas vacias del archivo "interlineado".
sed '/^$/d' interlineado > nuevo.txt



