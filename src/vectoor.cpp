#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <list>
#include <set>

using namespace std;

enum Columnas{
    INDICE, 
    NOMBRE,
    TIPO,
    ETAPA,
    ANTECESOR, 
    ANTESESOR_NO
};

enum TipoPokemon{
    FUEGO,
    AGUA,
    PLANTA,
    ELECTRICIDAD,
    VENENO
};

class Pokemon {
private:
    string nombre;
    set<TipoPokemon> tipos;
    int nivel;
public:
    Pokemon(string nombre, set<TipoPokemon> tipos, int nivel){
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

   

    fstream pokeCSV("assets/pokedex,csv");
    if(!pokeCSV){
        cerr << "Error leyende archivos de pokedex"<<endl;
        return EXIT_FAILURE;
    }
    //Cargar pokemones desde el archivo 
    string linea;
    vector<Pokemon> pokedex;
    pokedex.push_back(Pokemon("Misigno",{TipoPokemon::VENENO},999));
    while(getline(pokeCSV,linea)){
        cout<< linea <<endl;

        //Convertir a un stream de cadena 
        stringstream ss(linea);

        // Crear lista temporal para las columnas 
        vector<string> listaColumnas;

        //Extraer un valor y guardar en la lista 
        string valor;
        while (getline (ss,valor,',')){
            listaColumnas.push_back(valor); 
       
    }
    try
    {
    //crear pokemon
    Pokemon p(
        listaColumnas.at(Columnas::NOMBRE),
        { TipoPokemon::AGUA },
        stoi(listaColumnas.at(Columnas::ETAPA)));
    //Agregar el pokemon al pokedex 
    pokedex.push_back(p);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
    cout<<"Pokemons cargados al pokedex = "<<pokedex.size()<<endl;
    cout<<"El pokemon 5 es "<<pokedex.at(5)
    
    
    return EXIT_SUCCESS;
}
