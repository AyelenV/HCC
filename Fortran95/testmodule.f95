module veccar
integer,parameter:: n = 6 ! DIM del array en archivo de datos 
real, allocatable :: array(:)

contains
  Subroutine vecthings (array, maximo, minimo, suma)
! Calcula el maximo, minimo y suma de los elementos de un vector de & dimension n 
   implicit none
   real, allocatable, intent(in) :: array(:)
   real, intent(out):: maximo, minimo, suma

   maximo = MAXVAL(array)
   minimo = MINVAL(array)
   suma = SUM(array)
  end subroutine vecthings

end module veccar


!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
program testmodule
use veccar
implicit none
real:: maximo, minimo, suma

allocate(array(n)) !Espacio de memoria asignado inicialmente

!lee el vector de archivo y cuenta la cantidad de elementos
open(99,file='vector.dat')
read(99,*)array
close(99)

print*, array

!selecciona requirimientos del vector 
Call vecthings(array, maximo, minimo, suma) 
deallocate(array)

write(*,*)'Máximo elemento =',  maximo
write(*,*)'Mínimo elemento =',  minimo
write(*,*)'Suma de sus elementos =',  suma


end program testmodule
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

