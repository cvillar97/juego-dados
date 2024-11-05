# include <iostream>
# include "menu.h"
# include <ctime>

using namespace std;

int main() {

    int opcion;
    srand(time(0));

     do {
     system("cls");
     opcion = seleccionarOpcion();

     ejecutarOpcion(opcion);



     } while (opcion != 0);

    system("pause");
    return 0;
}

