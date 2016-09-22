program leer_sindimension
implicit none
real, allocatable :: array(:) 
integer:: i, io

!allocate(array(n)) !Espacio de memoria asignado inicialmente

!lee el vector de archivo y cuenta la cantidad de elementos
open(99,file='vector.dat')
END FILE(99)
read(99,*,IOSTAT=io)array
close(99)

print*, array, io
deallocate(array)

!write(*,*)'Máximo elemento =',  maximo
!write(*,*)'Mínimo elemento =',  minimo
!write(*,*)'Suma de sus elementos =',  suma


end program leer_sindimension
