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

class Pokemon{
private:
    string nombre;
    list<TipoPokemon> tipos;
    int nivel;

public:
    Pokemon(string nombre, list<TipoPokemon> tipos, int nivel){
        this->nombre = nombre;
        this->tipos =tipos;
        this->nivel = nivel;

    }
    string GetNombre(){
        return this->nombre;
    }
};

int main(int argc, char const *argv[])
{
    string frases[10]; // <----- No se puede modificar en tiempo de ejecucion
    frases[0] = "Frase 1";
    frases[1] = "Frase 2";

    //Vector libreria estandar
    vector<string> vFrases; // <---- Se pueden agregar mas en tiempo de ejecucion
    vFrases.push_back("Primera Frase");
    vFrases.push_back("Segunda Frase");
    vFrases.push_back("Tercera Frase");
    vFrases.push_back("Cuarta Frase");

    vector<int> vEnteros; // <----- Reemplazr tipo entre <> para cambiar el valor del vector
    vEnteros.push_back(3);
    vEnteros.push_back(5);
    vEnteros.push_back(1);
    vEnteros.push_back(9);

    vector<Pokemon> pokedex;
    pokedex.push_back(Pokemon("Bulbasaur",TipoPokemon::PLANTA,1));

    fstream pokeCSV("assets/pokedex.csv");
    if(!pokeCSV){
        cerr << "Error leyendo el archivo de pokedex"<<endl;
        return EXIT_FAILURE;
    }

    string linea;
    while(getline(pokeCSV,linea)){
        cout<< linea <<endl;

        stringstream ss(linea);
        string valor;
        vector<string> fila;
        while(getline(ss,valor, ',')){
            fila.push_back(valor);
            
        }
         //Crear el pokemon
         Pokemon p(fila.at(1),TipoPokemon::AGUA,1);

         //Agregar el pokemon al pokedex
         pokedex.push_back(p);

        
    }
    
    cout<<"Pokemons cargados al pokedex ="<<pokedex.size()<<endl;



    return EXIT_SUCCESS;
}


