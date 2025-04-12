#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{

   
        ofstream archivoSalida;



        //Abrir el archivo de salida 
    archivoSalida.open("archivo_salida.txt");
    if (!archivoSalida) {
        cerr << "Error al abrir el archivo de salida." <<endl;
        return 1;

    }
    //Escribir en el achivo de salida
    archivoSalida << "Hola, este es un archivo de salida." << endl;

    //Cerrar el archivo de salida 
    archivoSalida.close();

    //Leer archivos de salida

    ifstream archivoEntrada;
    string linea;

    //abrir el archivo de entrada
    
    archivoEntrada.open("archivo_salida.txt");
    if (!archivoEntrada) {
        cerr << "Error al abrir el archivo de entrada." <<endl;
        return 1;

    }
    //Leer archivo de entrada 
    while (getline(archivoEntrada, linea)){
    cout << linea << endl;
    }
    //Cerrar el archivo de salida 
    archivoEntrada.close();

    return 0;







}