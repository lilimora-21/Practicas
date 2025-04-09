#include <iostream>
using namespace std;

class Chorizo {
private: 
    bool size;
    bool encendido; 
    bool otro;
public: 
    void Inicializar(){
        size = 1;
        encendido = true;
        otro= true; 

    }
voil Ejecutar(){
    cout<<"Ejecutando Chorizo"<<endl;


};


int main(int argc, char const *argv[])
{
    cout<< endl<<"-------------------------------------------------" << endl;
    cout<<"Tamaño de memoria" << endl; 
    cout << "-------------------------------------------------" << endl;
    cout<<"Tamaño int:"<<sizeof(int) << endl;
    cout<<"Tamaño char:"<<sizeof(char) << endl;
    cout<<"Tamaño bool:"<<sizeof(bool) << endl;
    cout<<"Tamaño float:"<<sizeof(float) << endl;
    cout<<"Tamaño vold:"<<sizeof(void) << endl << endl;
    cout<<"Tamaño double:"<<sizeof(double) << endl << endl;
    
    int a=27;
    int b=50;
    cout<< endl<<"-------------------------------------------------" << endl;
    cout << "Memoria Estatica:" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Direccion    a: " << &a << endl;
    cout << "Valor    a: " << a << endl;
    cout << "Tamaño   a: " << sizeof(a) << endl;

    cout << "Direccion    b: " << &b << endl;
    cout << "Valor    b: " << b << endl;
    cout << "Tamaño   b: " << sizeof(b) << endl;

    cout<< endl<<"-------------------------------------------------" << endl;
    cout << "Direcciones de memoria:" << endl;
    cout << "-------------------------------------------------" << endl;
    int*direccionA = &a;
    cout << "DireccionA:" << direccionA << endl;
    cout << "Tamaño puntero:" << sizeof(bool*)<< endl;
    cout << "Direccion (&) de DireccionA:" << & direccionA << endl;
    cout << "Indireccion (*) de direccioA: " << *direccionA << endl;

    cout<< endl<<"-------------------------------------------------" << endl;
    cout << "Arreglos: " << endl;
    cout << "-------------------------------------------------" << endl;
    int arreglo [10];
    cout << "Direccion de arreglo: "<<&arreglo << endl;
    cout << "Direccion de arreglo [0]: "<<&arreglo [0] << endl;
    cout << "Direccion de arreglo [1]: "<<&arreglo [1]<< endl;
    cout << "Direccion de arreglo + 0: "<<&arreglo +0 << endl;
    cout << "Direccion de arreglo + 1: "<<&arreglo +1 << endl;

    cout<< endl<<"-------------------------------------------------" << endl;
    cout << "Objetos: " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << " Tamaño Chorizo: "<< sizeof(Chorizo)<<endl;
    Chorizo pruebas;
    cout <<"Direccion chorizo: "<<&pruebas<<endl;
    

    cout<< endl<<"-------------------------------------------------" << endl;
    cout << "Memoria Diamica: " << endl;
    cout << "-------------------------------------------------" << endl;

    cout << "Malloc:" <<malloc(sizeof(int))<<endl; 
    // guardar direccion en un puntero
    void* memoriaDinamica = malloc((sizeof(int)));

    cout<< endl<<"-------------------------------------------------" << endl;
    cout<< "Cast Variables: "<<endl;
    char letra = 'a';
    float flotante = letra;
    int* punteroEntero = (int*)malloc(sizeof(int));
    *punteroEntero = 5; // Guardar los datos en donde esta apuntando 
    cout<<"Direccion:"<<punteroEntero<<endl;
    cout<<"Valor:"<<*punteroEntero<<endl;

    //Liberar memoria
    free(punteroEntero); //free(memoria que quiero liberar)

    cout<< endl<<"-------------------------------------------------" << endl;
    cout << "Memoria Diamica C++ (Objetos): " << endl;
    cout << "-------------------------------------------------" << endl;
    cout<<"C: "<<(Chorizo*)malloc(sizeof(Chorizo))<<endl;
    cout<<"C++: " <<new Chorizo()<<endl;
    //C
    Chorizo* punteroC = (Chorizo*)malloc(sizeof(Chorizo));        
    (*punteroC).Inicializar();
    free(punteroC);

    //C++
    Chorizo* punteroCXX = new Chorizo();
    delete punteroCXX;

    
    // Indireccion vs operador 
    // Indireccion
    (*punteroCXX).Ejecutar();
    // Operador ->
    punteroCXX->Ejecutar();




    

        return 0;
}
//operacion de indireccion 
