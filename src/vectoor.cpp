#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <list>
using namespace std;
enum TipoPokemon{
    FUEGO,
    AGUA,
    PLANTA,
    ELECTRICIDAD
};

class Pokemon {
private:
    string nombre;
    list<TipoPokemon> tipos;
    int nivel;
public:
    Pokemon(string nombre, list<TipoPokemon> tipos, int nivel){
        this->nombre = nombre;
        this->tipos = tipos;
        this->nivel = nivel;
    }
};
    string GetNombre(){
        return this->nombre;
    }
    int main(int argc, char const *argv[])
{
    string frases [10]; // <--- No se puede modifica en tiempo de ejecucion 
    frase [0] = "Frase 1";
    frase [2] = "Frase 2";

    // Vector libreria estandar 

    vector <string> vFrases; // No se pueden agragar mas en tiempo de ejecucion 
    vFrases.push_back("Primera Frase");
    vFrases.push_back("Segunda Frase");
    vFrases.push_back("Tercera Frase");
    vFrases.push_back("Cuarta Frase");

    vector<int> vEnteros; // <--- Remplazar el tipo entre <> para cambiar el valor del vector 
    vEnteros.push_back(3);
    vEnteros.push_back(5);
    vEnteros.push_back(1);
    vEnteros.push_back(9);

    vector<Pokemon> pokedex;
    pokedex.push_back(Pokemon("Bulbasaur",TipoPokemon::PLANTA,1));

    fstream pokeCSV("assets/pokedex,csv");
    if(!pokeCSV){
        cerr << "Error leyende archivos de pokedex"<<endl;
        return EXIT_FAILURE;
    }
    //Cargar pokemones desde el archivo 
    string linea;
    while(getline(pokeCSV,linea)){
        cout<< linea <<endl;

        //Leer una fila del csv 
        stringstream ss(linea);
        string valor;
        vector<string> fila;
        while (getline (ss,columna,',')){
            fila.push_back(valor); 
       
    }
    //crear pokemon
    Pokemon p(fila.at(1),TipoPokemon::AGUA);

    //Agregar el pokemon al pokedex 
    pokedex.push_back(p);
}
    cout<<"Pokemons cargados al pokedex = "<<pokedex.size()<<endl;

    return EXIT_SUCCESS;
}
