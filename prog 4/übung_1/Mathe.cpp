
/**
 *@author Mohamad Ata Suleiman
 *@version  15.05.2024
 **/

#include "Mathe.h"
#include <iostream>



using namespace std;



long berechneEndlichesProdukt(int start, int ende) {
    long result = 1; // Initialize to 1
    int change = 0;

    if (start <= 0 || ende <= 0) { // Changed to OR condition
        cout << "Both numbers are either equal or smaller than 0" << endl; // Corrected typo
        return  0; // Returning 0 as the product doesn't make sense in this case
    }
    if (ende < start) {
        change = ende;
        ende = start;
        start = change;
    }
    for (int i = start; i <= ende; i++) { // Corrected loop condition
        result *= i;
    }
    return result;
}


long berechneTeilersumme(long zahl) {
    int result_teiler = 0;
    if (zahl < 0) {
        cout << "The number is not natural." << endl;
        return -1;
    }
    for (int i = 1 ; i <= zahl ; i++) {
        if (zahl % i == 0) {
            result_teiler += i;
        }
    }
    return result_teiler;
}

