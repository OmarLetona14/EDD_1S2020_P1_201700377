#include "Archivo.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Archivo::Archivo()
{
    //ctor
}
void Archivo::crearArchivo(string file_name,string contenido)
{
    ofstream file_cre;
    file_cre.open(file_name.c_str(),ios::out);



    if(file_cre.fail()){
        cout<<"Error al abrir el archivo";
        //exit(1);
    }
    file_cre<<contenido;
    file_cre.close();
}

void Archivo::abrirArchivo(string filename)
{
    ifstream oF(filename.c_str());



}


