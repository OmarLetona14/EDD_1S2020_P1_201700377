#include "GenerarMenu.h"
#include <iostream>
#include <curses.h>
#include "ListaDoblementeEnlazada.h"
#include "Archivo.h"
using namespace std;

GenerarMenu::GenerarMenu()
{
    //ctor
}

void GenerarMenu::menuPrincipal()
{
    printw("UNIVESIDAD DE SAN CARLOS DE GUATEMALA\n");
            printw("FACULTAD DE INGENIERIA\n");
            printw("ESTRUCTURAS DE DATOS\n");
            printw("PRACTICA 1\n");
            printw("ERICK OMAR LETONA FIGUEROA\n");
            printw("201700377\n");
            printw("\n");
            printw("\n");
            printw("\n");
            printw("MENU\n");
            printw("1. Crear archivo\n");
            printw("2. Abrir archivo\n");
            printw("3. Archivos recientes\n");
            printw("4. Salir\n");
            respuesta_menuP=getch();
            switch(respuesta_menuP){
            case 49:
                generarVentana();
                break;
            case 50:
                break;

            case 51:
                break;
            case 52:

                break;

            }
}

void GenerarMenu::generarVentana()
{
    string content;
    int x,y,x_position,y_position;
    getbegyx(stdscr,y,x);
                clear();
                WINDOW *win = newwin(y,x,0,0);
                refresh();
                char c= '|';
                char t ='_';
                box(win,c,t);
                wrefresh(win);
                string inp;
                wmove(win,2,2);
                wrefresh(win);
                getyx(win,y_position,x_position);
                mvwprintw(win,y+25,x+2,"Buscar y reemplazar (^w)");
                mvwprintw(win,y+25,x+60,"Reportes (^c)");
                mvwprintw(win,y+25,x+100,"Guardar (^s)");
                wmove(win,2,2);
                wrefresh(win);
                char chare[10];
                while(true){
                    content += wgetch(win);
                    list->insertarNodoAlFinal(wgetch(win));
                    list->mostrar();
                    int cod = wgetch(win);
                    if(cod==2){

                        wrefresh(win);
                        WINDOW *bs = newwin(5,x,19,0);
                        wrefresh(win);
                        box(bs,c,t);
                        wrefresh(bs);
                        wmove(bs,18,0);

                    }else if(cod==3){
                        bool alive = true;
                        Archivo *arc = new Archivo();
                        WINDOW *entrance = newwin(5,x,19,0);
                        wrefresh(win);
                        box(entrance,c,t);
                        wrefresh(entrance);
                        wmove(entrance,15,0);
                        string cont;
                        cout<<"Introduzca el nombre del archivo";
                        while(alive){
                                if(entrance=!'1'){
                                   cont+=wgetch(entrance);
                                }else{
                                    alive =false;
                                }

                        }
                        arc->crearArchivo(cont,content);
                    }

                    wrefresh(win);
                }

}


