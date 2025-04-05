#include <iostream>
using namespace std;

class Chorizo{
private:
        bool size;
        bool encendido;
        bool otro;
public:
    void Inicializar(){
        size = 1;
        encendido = true;
        otro = true;
    }




};

int main(int argc, char const*argv[])
{
    cout<<endl<<"--------------------------------------------------------"<<endl;
    cout<<"Tamaño de memoria"<<endl;
    cout<<"Tamaño int:"<<sizeof(int)<<endl;
    cout<<"Tamaño char:"<<sizeof(char)<<endl;
    cout<<"Tamaño bool:"<<sizeof(bool)<<endl;
    cout<<"Tamaño float:"<<sizeof(float)<<endl;
    cout<<"Tamaño double:"<<sizeof(double)<<endl<<endl;
    cout<<"Tamaño void:"<<sizeof(void)<<endl<<endl;

    cout<<"--------------------------------------------------------"<<endl;

    cout<<endl<<"--------------------------------------------------------"<<endl;
    int a, b;
    cout<<"Memoria Estática:"<<endl;
    
    cout<<"Direccion a:"<<&a<<endl;
    cout<<"Valor a:"<<a<<endl;
    cout<<"Tamañoa:"<<sizeof(a)<<endl;

    cout<<"Direccion b:"<<&b<<endl;
    cout<<"Valor b:"<<b<<endl;
    cout<<"Tamaño b:"<<sizeof(b)<<endl;
    cout<<"--------------------------------------------------------"<<endl;


    cout<<endl<<"--------------------------------------------------------"<<endl;
    cout<<"Direcciones de memoria: "<<endl;
    int* direccionA = &a; //*=indireccion int=tamaño
    cout <<"DireccionA: " << direccionA << endl;
    cout << "Tamaño puntero: "<< sizeof(bool*)<<endl;
    cout<<"Direccion &  DireccionA: " << &direccionA << endl;
    cout<<"Indireccion * DireccionA: " << *direccionA << endl;
    cout<<"--------------------------------------------------------"<<endl;


    cout<<endl<<"--------------------------------------------------------"<<endl;
    cout<<"Arreglos: "<<endl;
    int arreglo[10];
    cout<<"Direccion de arreglo: "<<&arreglo<<endl;
    cout<<"Direccion de arreglo[0]: "<<&arreglo[0]<<endl;
    cout<<"Direccion de arreglo[1]: "<<&arreglo[1]<<endl;
    cout<<"Direccion de arreglo +0: "<<&arreglo +0<<endl;
    cout<<"Direccion de arreglo +1: "<<&arreglo +1<<endl;
    cout<<"--------------------------------------------------------"<<endl;


    cout<<endl<<"--------------------------------------------------------"<<endl;
    cout<<"Objetos: "<<endl;
    cout<<"Tamaño chorizo : "<<sizeof(Chorizo)<<endl;
    Chorizo pruebas;
    cout<<"Direccion chorizo : "<<&pruebas<<endl;
    cout<<"--------------------------------------------------------"<<endl;


    cout<<endl<<"--------------------------------------------------------"<<endl;
    cout<<"Memoria dinamica C(Estructurada): "<<endl;
    cout<<"Maloc"<<malloc(sizeof(int))<<endl;
    //Guardar dirccion en un punteo
    void* memoriaDinamica = malloc((sizeof(int)));
    cout<<"--------------------------------------------------------"<<endl;
    
    

    cout<<endl<<"--------------------------------------------------------"<<endl;
    cout<<"Cast Variables: "<<endl;
    int* punteroEntero = (int*)malloc(sizeof(int));
    *punteroEntero = 5;
    cout<<"Direccion: "<<punteroEntero<<endl;
    cout<<"Valor: "<<*punteroEntero<<endl;
    //Liberar memoria
    free(punteroEntero);

    cout<<"--------------------------------------------------------"<<endl;

    
    cout<<endl<<"--------------------------------------------------------"<<endl;
    cout<<"Memoria dinamica C++(Objetos): "<<endl;
    
    cout<<"C"<<(Chorizo*)malloc(sizeof(Chorizo))<<endl;
    cout<<"C++ : "<< new Chorizo()<<endl;

    //C
    Chorizo* punteroC = (Chorizo*)malloc(sizeof(Chorizo));
    (*punteroC).Inicializar();
    //C++
    Chorizo* punteroCXX = new Chorizo();
    delete punteroCXX;
    
    cout<<"--------------------------------------------------------"<<endl;






    




    return 0;
}