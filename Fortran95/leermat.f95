!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
subroutine leermat (M1,M2)
!Lee matrices de archivos 'matriz'  y 'matriz2'. DIMMAX = (n,n).
!primer linea de archivos contiene [#filas #columnas] de la matriz
!---------------------------------------------------------------
use comunes
implicit none
real, DIMENSION(:,:), intent(out), allocatable:: M1,M2
real, DIMENSION(:,:), allocatable:: M1reduce,M2reduce
character(len=*), parameter:: file1='matriz1',file2='matriz2'
!---------------------------------------------------------------
open(unit=1, file=file1)
open(unit=2, file=file2)

allocate(M1(n,n),M2(n,n)) !Asigno espacio de memoria inicial
READ(1,*)f1,c1
READ(1,*) M1(1:f1,1:c1)
READ(2,*)f2,c2
READ(2,*) M2(1:f2,1:c2)

close(1)
close(2)

allocate(M1reduce(f1,c1),M2reduce(f2,c2)) !
M1reduce = M1(1:f1,1:c1)
M2reduce = M2(1:f2,1:c2)
deallocate(M1,M2)

allocate(M1(f1,c1),M2(f2,c2))  !Reasigno memoria con tamaño de matriz leida
M1 = M1reduce
M2 = M2reduce
deallocate(M1reduce,M2reduce) !Elimino variable auxiliar

end subroutine



