#ifndef GENERARMENU_H
#define GENERARMENU_H
#include "ListaDoblementeEnlazada.h"

class GenerarMenu
{
    public:
        GenerarMenu();
        void menuPrincipal();
        int respuesta_menuP;
        void generarVentana();
        ListaDoblementeEnlazada *list;
        void abrirArchivo(const char* ruta);

    protected:

    private:
};

#endif // GENERARMENU_H
