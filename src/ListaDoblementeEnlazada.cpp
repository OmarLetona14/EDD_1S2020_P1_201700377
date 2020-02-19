#include "ListaDoblementeEnlazada.h"
#include <iostream>

using namespace std;
struct Nodo{
    char data;
    Nodo* siguiente;
    Nodo* ultimo;
} *primero ,*ultimo;

ListaDoblementeEnlazada::ListaDoblementeEnlazada()
{
    //ctor
}

void ListaDoblementeEnlazada::insertarNodoAlFinal(char dato)
{
    Nodo* nuevo = new Nodo();
    nuevo->data = dato;

    if(primero==NULL)
    {
        primero = nuevo;
        nuevo->siguiente = NULL;
        nuevo->ultimo = NULL;
        ultimo = primero;
    }else
    {
        ultimo->siguiente = nuevo;
        nuevo->siguiente= NULL;
        nuevo->ultimo = ultimo;
        ultimo = nuevo;
    }

}
void ListaDoblementeEnlazada::mostrar()
{
    Nodo *aux = new Nodo();
    aux = primero;
    if(primero!=NULL){
        while(aux!=NULL){
            cout<<"\n"<<aux->data;
            aux = aux->siguiente;
        }
    }else{
        cout<<"La lista esta vacia";
    }
}

void ListaDoblementeEnlazada::buscar(char dato_b)
{
    Nodo *aux = new Nodo();
    bool encontrado=false;
    if(primero!=NULL){
        while(aux!=NULL && !encontrado){
            if(aux->data==dato_b){
                encontrado = true;
            }else{
                aux = aux->siguiente;
            }
        }
    }else{
        cout<<"La lista esta vacia";
    }
}
void ListaDoblementeEnlazada::eliminar(char dato_b)
{
    Nodo *aux = new Nodo();
    Nodo *anterior = new Nodo();
    anterior = NULL;
    bool encontrado=false;
    if(primero!=NULL){
        while(aux!=NULL && !encontrado){
            if(aux->data==dato_b){
                encontrado = true;
                if(aux == primero){
                    primero =primero->siguiente;
                }
                else if(aux == ultimo){
                    anterior->siguiente = NULL;
                    ultimo = anterior;
                }else{
                    anterior->siguiente =aux->siguiente;
                }

            }else{
                anterior = aux;
                aux = aux->siguiente;
            }
        }
    }else{
        cout<<"La lista esta vacia";
    }
}
void ListaDoblementeEnlazada::eliminarUltimo()
{
    ultimo->ultimo->siguiente = NULL;

}
