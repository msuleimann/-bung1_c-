/**
*@author Mohamad Ata Suleiman
 *@version  15.05.2024
 **/

#include "Arrays.h"
#include <iostream>
#include "Random.h"



int* fuelleArray(int laenge, int maxZahl) {
    int* array = new int[laenge];
    for (int i = 0; i < laenge; ++i) {
        array[i] = erzeugeInt(maxZahl);
    }
    return array;
}


void gibAusArray(int* array, int anzahlWerte) {
    for (int i = 0; i < anzahlWerte; ++i) {
        std::cout << array[i] << std::endl;
    }
    std::cout << std::endl;
}


double berechneDurchschnitt(int* zahlen, int anzahlWerte) {
    if (anzahlWerte == 0) {
        return 0.0; // Avoid division by zero
    }
    int sum = 0;
    for (int i = 0; i < anzahlWerte; ++i) {
        sum += zahlen[i];
    }
    return static_cast<double>(sum) / anzahlWerte;
}

int bestimmeMaximum(int* zahlen, int anzahlWerte) {
    if (anzahlWerte == 0) {
        return 0; // No maximum for an empty array
    }
    int max = zahlen[0];
    for (int i = 1; i < anzahlWerte; ++i) {
        if (zahlen[i] > max) {
            max = zahlen[i];
        }
    }
    return max;
}


int bestimmeMinimum(int* zahlen, int anzahlWerte) {
    if (anzahlWerte == 0) {
        return 0; // No minimum for an empty array
    }
    int min = zahlen[0];
    for (int i = 1; i < anzahlWerte; ++i) {
        if (zahlen[i] < min) {
            min = zahlen[i];
        }
    }
    return min;
}
