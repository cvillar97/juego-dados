#include <iostream>
#include "utils.h"

using namespace std;

void ordenarVector(int &v[], int tam ){
    int i,j, posmin, aux;
    for(i=0;i<tam-1;i++){
        posmin=i;
        for(j=i+1;j<tam;j++){
            if(v[j]<v[posmin]) posmin=j;
        }
        aux=v[i];
        v[i]=v[posmin];
        v[posmin]=aux;
    }
}

bool verificarDadosIguales(int &vec[]){

    int dadosIguales = true;

    int num1 = 0;

    int num2 = 0;

    for (int i = 0; i <= 4; i++) {

        num1 = vec[0];
        num2 = vec[i+1];

        if (num1 != num2) {
            dadosIguales = false;
        }
    }

    return dadosIguales;
}

bool verificarSexteto6(int &vec[]) {

    bool todosSeis = true;

    int vecSeis[6] = {6, 6, 6, 6, 6, 6};

    for (int i = 0; i < 6; i++) {

        if (vec[i] != vecSeis[i]) {

            todosSeis = false;
        }
    }

    return todosSeis;
}

bool verificarEscalera(int &vec[]) {

    int vecEscalera[6] = {1,2,3,4,5,6};

    bool esEscalera = true;

    for (int i = 0; i < 6; i++) {

        if (vec[i] != vecEscalera[i]) esEscalera = false;

    }

    return esEscalera;
}

void mostrarVector(int &vec[], int tam) {

    for (int i = 0; i < tam; i++) {

        cout << " " << vec[i] << " ";

    }
}

int calcularTotal(int &vec[], int tam) {

    int sumaTotal = 0;

    for (int i = 0; i < tam; i++) {

        sumaTotal += vec[i];

    }

    return sumaTotal;

}
