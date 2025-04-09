#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{

        ifstream archivoEntrada;
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

    return 0;

}