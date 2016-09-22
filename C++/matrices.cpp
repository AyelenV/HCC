// Programa que multiplica matrices C=A*B.
// Halla el valor medio de los elementos de C y la desviacion estandard.
// Ejercio 1. C++ clase 1.
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    int A[4][4] = {{0, 8, 2, 5}, {6, 8, 0, 6}, {2, 3, 4, 3}, {1, 8, 0, 1}};
    int B[4][4] = {{7, 5, 8, 0}, {5, 2, 3, 3}, {7, 4, 8, 3}, {3, 2, 7, 0}};
    int C[4][4]= {0}; //inicializo matriz producto C


     // MULTIPLICACION C=A*B
      for(int i=0; i<4; ++i) {
          for(int j=0; j<4; ++j) {
              for(int z=0; z<4; ++z) {
                  C[i][j] += A[i][z] * B[z][j];
              }
           }
       }

    // Ver matriz producto
    cout<<endl;
    cout<< "Matriz C = A*B :"<< endl;
    for (int i=0; i<4; i++) {
      for (int j=0; j<4; j++) {
         cout<< C[i][j] <<" ";
      }
    cout<<endl;
    }
    cout<<endl;

    // VALOR MEDIO de elementos de C
    int suma = 0;
    int contador = 0;
    for (int i=0; i<4; i++) {
      for (int j=0; j<4; j++) {
         suma += C[i][j];
         contador++;
      }
    }
    cout<< "Promedio = "<< float(suma/contador)<< endl;

    //DESVIACION ESTANDARD de los elementos de C
    float dif2 = 0;
    for (int i=0; i<4; i++) {
      for (int j=0; j<4; j++) {
         dif2 += pow(C[i][j]-float(suma/contador),2);
      }
    }
    cout<<endl;

    cout<< "Desvio standard = "<< dif2/contador << endl;
    cout<<endl;
    return 0;

}
