#include <iostream>
#include "interfaz.h"
#include "utils.h"

using namespace std;

void mostrarDatosRonda(int ronda, string jugador, int puntajeTotal, int maximoPuntajeRonda,
                       int nroLanzamiento, int &vec[], int tam) {

    system("cls");

    cout << "TURNO DE " << jugador << " | " << " RONDA N° " << ronda << " | "
    << " PUNTAJE TOTAL: " << puntajeTotal <<" PUNTOS";

    cout << "---------------------------------------------------------------------------";

    cout << "MAXIMO PUNTAJE DE LA RONDA: " << maximoPuntajeRonda << " PUNTOS";
    cout << "LANZAMIENTO N° " << nroLanzamiento;

    mostrarVector(vec, tam);

    // TODO: Verificar Escalera
    // Si Escalera -> Ganaste!

    // TODO: Verificar 100 Puntos
    // Si 100 Puntos -> Ganaste!
}
