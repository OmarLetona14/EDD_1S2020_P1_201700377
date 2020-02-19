#ifndef LISTADOBLEMENTEENLAZADA_H
#define LISTADOBLEMENTEENLAZADA_H

class ListaDoblementeEnlazada
{
    public:
        ListaDoblementeEnlazada();
        void insertarNodoAlFinal(char dato);
        void mostrar();
        void buscar(char dato_b);
        void eliminarUltimo();
        void eliminar(char candidate);

    protected:

    private:
};

#endif // LISTADOBLEMENTEENLAZADA_H
