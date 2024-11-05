#include <iostream>
#include "juego.h"
#include "interfaz.h"
#include "utils.h"

using namespace std;

void unJugador() {

    string jugador;

    system("cls");

    cout << "Ingrese el nombre del Jugador 1: ";
    cin >> jugador;


    // RONDA
    int dados[6];

    int puntajeJugador = 0;

    int nroRonda = 1;

    while (puntajeJugador < 100) {


        int puntajeRonda = 0;

        int nroTiradas = 1;

        while (nroTiradas < 3 || esEscalera = false ) {

            int puntajeTirada = 0;

            tirarDados(dados);
            mostrarVector(dados);

            ordenarVector(dados);
            esEscalera = verificarEscalera(dados);

            if (esEscalera) {
                system("cls");
                cout << "Ganaste! Has obtenido escalera!" << endl;
                // TODO: Mostrar mensaje con dados y datos de la ronda.
                break;

            } else if (verificarSexteto6(dados)) {
                puntajeJugador = 0;
                // TODO: Mostrar mensaje con dados y datos de la ronda.
                break;

            } else if (verificarDadosIguales(dados)) {
                puntajeTirada = dados[0] * 10;

            } else {
                puntajeTirada = calcularTotal(dados, 6);

            }

            if (puntajeTirada > puntajeRonda) {
                puntajeRonda = puntajeTirada;

            }


            nroTiradas++;
        }

        puntajeJugador += puntajeRonda;

        nroRonda++;

        // ANTES DE PASAR A LA SIGUIENTE RONDA MOSTRAR MENSAJE CON DATOS
        // DE RONDA.

    }

}



int lanzarDado() {

    return rand() % 6 + 1;
}

void tirarDados(int &dados[]) {

    for (int i = 0; i < 6; i++) {
        dados[i] = lanzarDado();
    }
}

