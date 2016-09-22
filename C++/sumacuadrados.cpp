// Programa que suma de serie de enteros.
//Ejercio 2. C++ clase 1.
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
  cout<<"Introduzca un nro entero " << endl;
  int n;
  cin >> n;
  cout<< "Nro ingresado es " << n << endl;
  cout<<endl;

  //Resuelvo usando while
  int suma = 0;
  int i = 1;
  while (i<=n) { suma+=pow(i,2); i++; }
  cout<< "2.1.Suma de cuadrados es " << suma << endl;
  cout<<endl;

  // Resuelvo usando for
  suma = 0;
  for (int i=1; i<=n; i++) {suma+=pow(i,2);}
  cout<< "2.2.Suma de cuadrados es " << suma << endl;
  cout<<endl;

  // Resuelvo usando do...while
  suma = 0;
  i = 1;
  do { suma+=pow(i,2); i++; } while( i<=n );
  cout<< "2.3.Suma de cuadrados es " << suma << endl;
  cout<<endl;

  return 0;
}
