#ifndef ARCHIVO_H
#define ARCHIVO_H
#include <iostream>
#include <fstream>
#include<string>
using namespace std;
class Archivo
{
    public:
        Archivo();
        void crearArchivo(string file_name,string contenido);
        void abrirArchivo(string file_name);

    protected:

    private:
};

#endif // ARCHIVO_H
