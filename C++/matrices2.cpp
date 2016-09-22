// clase 2 de C++. Ejercicio 1.
// Programa que multiplica matrices C=A*B usando funciones.
// Los argumentos se pasan POR REFERENCIA.
// La matrices dato se pasa por referencia pero impido su modificación (const)

#include <iostream>
#include <fstream> // IO archivos
#include <string> //manipular string
#include <iomanip> //IO con formato
#include <cmath>
using namespace std;

const int dim = 4; //variable global
void leermat(string archivo, int (&M)[dim][dim]);
void matprod(const int (&F1)[dim][dim], const int (&F2)[dim][dim], int (&P)[dim][dim]);

int main() {
      //inicializo matrices dato
      int A[dim][dim]= {0};
      int B[dim][dim]= {0};

       //leo matrices de archivos
       leermat("A.txt",A);
       leermat("B.txt",B);

      //ver matrices
       cout<< "matriz A : "<< endl;
       for (int i=0; i<dim; i++) {
         for (int j=0; j<dim; j++) {
            cout<< A[i][j] <<" ";
         }
       cout<<endl;
       }
       cout<<endl;

       cout<< "matriz B : "<< endl;
       for (int i=0; i<dim; i++) {
         for (int j=0; j<dim; j++) {
            cout<< B[i][j] <<" ";
         }
       cout<<endl;
       }
       cout<<endl;

     // Multiplico matrices A y B.
     int C[dim][dim]= {0}; //inicializo matriz producto
     matprod(A,B,C);

    // Imprimo matriz C con formato en un archivo.
    ofstream outfile ("C.txt"); // Open for writing
    outfile << "C=A*B : " << endl;
    for (int i=0; i<dim; i++) {
      for (int j=0; j<dim; j++) {
         outfile << setw(4) << C[i][j] <<" ";
      }
    outfile <<endl;
    }
    outfile <<endl;

    return 0;
}

void leermat(string archivo, int (&M)[dim][dim]) {
//Leo matriz M(dimxdim) de archivo de datos (vector de filas)
int data[dim*dim];
int nDatos = 0;
ifstream infile (archivo);
if (infile.is_open()) {
    while (infile.good()) {
          infile >> data[nDatos++];
          }
    int contador=0;
    for (int i=0; i<dim; i++) {
       for (int j=0; j<dim; j++) {
          M[i][j]=data[contador];
          contador++;
       }
     }
 }
else cout << "No es posible abrir el archivo." << endl;
return;
}


void matprod(const int (&F1)[dim][dim], const int (&F2)[dim][dim], int (&P)[dim][dim])
{
    // Multiplica matrices:  P = F1*F2
    for(int i=0; i<dim; ++i) {
       for(int j=0; j<dim; ++j) {
          for(int z=0; z<dim; ++z) {
              P[i][j] += F1[i][z] * F2[z][j];
          }
       }
    }

return;
}
