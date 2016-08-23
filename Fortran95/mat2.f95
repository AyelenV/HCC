module comunes
  integer,parameter:: n = 10 !(n,n) DIM MAXIMA 
  integer:: c1,f1,c2,f2 !nro de filas y columnas de las matrices
end module comunes


!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
program mat2
! Multiplica matrices en archivos matriz1 y matriz2
! Columnas de M1 debe ser igual a nro de filas de M2
!---------------------------------------------------------------
use comunes
implicit none
interface 
  subroutine leermat (M1,M2)
  use comunes
  implicit none
  real, DIMENSION(:,:), intent(out), allocatable:: M1,M2
  real, DIMENSION(:,:), allocatable:: M1reduce,M2reduce
  character(len=10), parameter::file1='matriz1',file2='matriz2'
  end subroutine
  function positivo(mat) 
   implicit none
   real, dimension(:,:), intent(in):: mat
   logical:: positivo
   end function positivo
end interface
!---------------------------------------------------------------
real, DIMENSION(:,:), allocatable:: M1,M2,pro
!---------------------------------------------------------------
! Lee matrices de archivos
call leermat(M1,M2)

if (c1 /= f2) then
   write(*,*) "Nro de columnas M1 debe coincidir con el nro de filas de M2"
   stop 
endif

! multiplica las matrices
pro = matmul(M1,M2) 
write(*,'(2F8.2)') pro

! Avisa si todos los elementos de la matriz son positivos
if (positivo(pro)) then
   write(*,*) 'M1*M2 tiene todos los elementos positivos'
endif

end program mat2

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
function positivo(mat)
! Toma valor .false. si la matriz tiene algun elemento negativo.
!---------------------------------------------------------------
  implicit none
  real, dimension(:,:), intent(in):: mat
  logical:: positivo
!---------------------------------------------------------------  
  if (MINVAL(mat) < 0.0) then
     positivo = .false.	
  end if

end function positivo

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!




