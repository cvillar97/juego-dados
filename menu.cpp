#include <iostream>
#include "menu.h"

using namespace std;

int seleccionarOpcion() {
    int opcion;
    cout << "   BIENVENIDO!!   " << endl;
    cout << "------------------------" << endl;
    cout << "|  CIEN O ESCIENCALERA |" << endl;
    cout << "------------------------" << endl;
    cout << "1. Un jugador" << endl;
    cout << "2. Dos jugadores" << endl;
    cout << "3. Mostrar puntuacion mas alta" << endl;
    cin >> opcion;

    return opcion;
}

void ejecutarOpcion(int opcion) {

    switch opcion {
    case 1:
    unJugador();

    case 2:


    case 3:



    }


}
