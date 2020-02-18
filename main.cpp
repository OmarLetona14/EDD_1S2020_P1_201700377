#include <iostream>
#include "ListaDoblementeEnlazada.h"
#include "GenerarMenu.h"
#include <curses.h>
using namespace std;



        int main()
        {
            GenerarMenu *genera = new GenerarMenu();
            initscr();                 /* Start curses mode               */
            genera->menuPrincipal();
            getch();             /* Wait for user input             */
            endwin();                  /* End curses mode                 */

            return 0;
        }
