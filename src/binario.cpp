#include <iostream>
#include <fstream>
#include <string>
using namespace std;


struct Persona
{
    char nombre[50];
    int edad;
    /* data */
};


int main(int argc, char const *argv[])
{
    
    ofstream archivoSalida;

    //bool isFileOpen = false;
    //! is FileOpen;
    
    // Abrir el archivo de entrada
    archivoSalida.open("archivo_salida.bin ", ios::binary);
    if (!archivoSalida){
        cerr <<"Error al abrir el archivo de salida."<<endl;
        return 1;

    }
    Persona p1 = {"Juan", 30};
    Persona p2 = {"Maria", 25};

    //Escribir en el archivo de salida
    archivoSalida.write((const char*)(&p1), sizeof(Persona));
    archivoSalida.write((const char*)(&p2), sizeof(Persona));


     //Cerrar el archivo de salida
    archivoSalida.close();

    // //----------------------------------------------------
    // ifstream archivoEntrada;
    // string linea;

    
    // // Abrir el archivo de entrada
    // archivoEntrada.open("archivo_salida.txt");
    // if (!archivoEntrada){
    //     cerr <<"Error al abrir el archivo de entrada."<<endl;
    //     return 1;

    // }
    // //Leer en el archivo de entrada
    // while (getline(archivoEntrada, linea)){
    //     cout << linea << endl;
    // }


    // //Cerrar el archivo de entrada
    // archivoEntrada.close();
    


    return 0;
}