#!bin/bash
# Para ejecutar en terminal$: bash ./ej3-4.sh [namefile] [cotatime]

# del input toma 1er argumento como nombre de arhiv de datos, 2do argumento como cota inferior del inervalo de tiempo deseado para calcula media de U.
echo "archivo:$1"
echo "cota:$2"

COTA=$2

# levanta contenido "archivo", lo entuba a awk que opera entre columas y guarda resultado en Etotal
cat $1 |  awk '{print $1,"  ", $2+$3}' > Etotal.txt


#Solo para t > cota, calcula U media (promedio).
cat $1 | awk '{ if ($1 > '$COTA')
                      sum += $3; n++ } END { if (n > 0) print "U media =", sum/ n ; }'
