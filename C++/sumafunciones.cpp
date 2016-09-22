// clase 2 de C++. Ejercicio 2.
// Programa que suma funciones (tres tipos de funciones a eleccion del usuario).
// funciones pasadas como argumentoa otra funcion.

#include <iostream>
#include <fstream> // IO archivos
#include <string> // manipular string
#include <iomanip> //IO con formato
#include <cmath>
using namespace std;

// declaracion de funciones
// -------------------------------------------------------------
int sum(int(*)(int),int); // 1er argumento es puntero a una funcion int
int g1(int);
int g2(int);
int g3(int);

// --------------------------------------------------------------
int main()
{
cout << "Que funcion quiere sumar? Ingrese nro de opcion." <<endl;
cout << "1: g(z)=z" << endl;
cout << "2: g(z)=z**2" << endl;
cout << "3: g(z)=z**3" <<endl;

int opcion;
cin >> opcion;

cout << "ingrese limite superior de sumatoria (nro natural)" <<endl;
int x;
cin >> x;
//cout << "numero ingresado es " << x <<endl;
cout << endl;

cout<<"Resultado de la suma es: " <<endl;
if (opcion==1) cout<< sum(g1,x) <<endl;
if (opcion==2) cout<< sum(g2,x) <<endl;
if (opcion==3) cout<< sum(g3,x) <<endl;
if (opcion>3) cout<<"Eligio una opcion NO valida" <<endl;
return 0;
}

int sum(int(*pf)(int z), int x)
{
int suma=0;
for(int z=1; z<=x; z++){suma+= (*pf)(z);}
return suma;
}

//--------- funciones -----------------------------------
int g1(int z){return(z);}
int g2(int z){return(z*z);}
int g3(int z){return(z*z*z);}
