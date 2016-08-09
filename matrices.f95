program matrices
!Multiplica matrices en los archivos matriz1 y matriz2 (DIMMAX(50,50))
!primer linea de archivos de datos contiene [#filas #columnas] de la matriz
!Columnas de M1 debe ser igual a nro de filas de M2

implicit none
integer, PARAMETER:: size = 50 
real, DIMENSION(size,size):: M1,M2,pro
logical::signo
integer:: i,j,k,f1,c1,f2,c2
real, DIMENSION(2)::s

open(unit=1, file='matriz1')
open(unit=2, file='matriz2')

READ(1,*)f1,c1
READ(1,*) ((M1(i,j),j=1,c1),i=1,f1)
!write(*,*)((M1(i,j),j=1,4),i=1,3)
READ(2,*)f2,c2
READ(2,*) ((M2(i,j),j=1,c2),i=1,f2)
!write(*,*)((M2(i,j),j=1,2),i=1,4)

close(1)
close(2)
write(*,*)f1,c1,f2,c2

DO i = 1, f1 
   DO j = 1, c2
      pro(i,j) = 0.   
      DO k = 1, c1  
        pro(i,j) = pro(i,j) + M1(i,k)*M2(k,j)
      END DO   
   if (pro(i,j) < 0.) then
       signo = .false.
   end if
   END DO
END DO

do i=1,f1
write(*,*)(pro(i,j),j=1,c2)
enddo

if (signo) then
       write(*,*)'M1*M2 tiene todos sus elementos positivos'
    else
      write(*,*)'M1*M2 tiene elementos negativos'
end if

end program matrices


