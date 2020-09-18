#include <iostream>
#include "ALGO.h"
#include <vector>

using namespace std;

int main()
{
    // Ernesto López Villarreal, A01552124,  12/09/2020

    // Ordenamiento por Intercambio, time complexity 0(n^2)
    vector<int> vectI{ 50, 45, 40, 35, 30, 25, 20, 15, 10, 5 };
    ALGO::ordenaIntercambio(vectI);

    cout << "Orden por Intercambio" << endl;

    for (int i = 0; i < vectI.size(); i++)
    {
        cout << vectI[i];
        if (i < vectI.size() - 1)
            cout << ", ";
    }

    cout << endl;
    cout << "-----------" << endl;

    // Ordenamiento por burbuja, time complexity 0(n^2)
    vector<int> vectB{ 100, 90, 80, 70, 60, 50, 40, 30, 20, 10 };
    ALGO::ordenaBurbuja(vectB);

    cout << "Orden por Burbuja" << endl;

    for (int i = 0; i < vectB.size(); i++) {
        cout << vectB[i];
        if (i < vectB.size() - 1)
            cout << ", ";
    }

    cout << endl;
    cout << "-----------" << endl;

    // Ordenamiento por Merge, time complexity 0(n log(n))
    vector<int> vectM{ 500, 400, 300, 200, 100, 50, 40, 30, 20, 10 };
    ALGO::ordenaMerge(vectM, 0, (int)vectM.size() -1 );

    cout << "Ordenamiento por MergeSort" << endl;

    for (int i = 0; i < vectM.size(); i++) {
        cout << vectM[i];
        if (i < vectM.size() - 1)
            cout << ", ";
    }

    cout << endl;
    cout << "-----------" << endl;

    // Búsqueda secuencial
    cout << "Busqueda secuencial" << endl;

    vector<int> vectS{ 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
    ALGO::busqSecuencial(vectS, 800);

    cout << endl;
    cout << "-----------" << endl;

    // Búsqueda binaria
    cout << "Busqueda binaria" << endl;

    vector<int> vectBin{ 1, 5, 10, 15, 20, 25, 30, 45, 50, 55 };
    int busquedaBinaria = ALGO::busqBinaria(vectBin, 10, 25);

    if (busquedaBinaria == -1)
        return -1;
    else
        cout << "El numero que estas buscando se encuentra en el indice: " << busquedaBinaria << endl;
}
