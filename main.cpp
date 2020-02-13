/*
Ejercicio 1 AAA - Equipo #6
Seccion: D05
Calendario: 2020A

Aceves García Carlos Jair
Aguirre Jasso Angel Ernesto
Lizaola Garcia Alma Denisse
Lozano Salinas Miguel Angel
Silva Sanchez Guadalupe Jocelyn
*/
#include <iostream>
#include <fstream>
#include "cliente.h" //Definicion de la clase cliente

using namespace std;

int main()
{
   ofstream archivoCreditoSalida("credito.dat", ios::binary); //Abrir el archivo para salida en modo binario

   //salir del programa si ofstream no pudo abrir el archivo
   if(!archivoCreditoSalida){
       cerr<<"No se pudo abrir el archivo." <<endl;
       exit(1);
   }//fin de if

   Cliente clienteEnBanco; //Objeto de la clase cliente
   //escribir 100 registros en blanco en el archivo
   for(int i=0; i<100; i++){
       archivoCreditoSalida.write(reinterpret_cast<const char *>(&clienteEnBanco), sizeof (Cliente));
       cout << sizeof (Cliente) << endl;
   }//fin de for

   return 0;

}//fin del main
