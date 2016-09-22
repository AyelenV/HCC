// Programa que pasa argumento array a una funcion POR REFERENCIA.
// Pequeño ejemplo apra entender la sintaxis y resolver:
// C++ clase 2. Ejercicio 1.

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const int dim = 2;

void fun(int (&arr)[dim][dim]);

int main() {

    int A[dim][dim] = {{1,1},{1,1}};
    cout<< "A pre fun "<< endl;
    for (int i=0; i<dim; i++) {
      for (int j=0; j<dim; j++) {
         cout<< A[i][j] <<" ";
      }
    cout<<endl;
    }
    cout<<endl;

    fun(A);
    cout<< "A post fun "<< endl;
    for (int i=0; i<dim; i++) {
      for (int j=0; j<dim; j++) {
         cout<< A[i][j] <<" ";
      }
    cout<<endl;
    }
    cout<<endl;

    return 0;
}
//------------------------------------------------------
void fun(int (&arr)[dim][dim]) {
  for (int i=0; i<dim; i++) {
    for (int j=0; j<dim; j++) {
        arr[i][j]=arr[i][j]*2;
    }
  }
return;
}
//--------------------------------------------------------
