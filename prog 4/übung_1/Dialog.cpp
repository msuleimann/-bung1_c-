/**
*@author Mohamad Ata Suleiman
**@version  15.05.2024
 **/

#include "Dialog.h"
#include "Arrays.h"
#include "Mathe.h"
#include <iostream>
#include "Random.h"


using namespace std;

int main() {
    int* array = nullptr;
    int length = 0;
    int choice;

    do {
        cout << "---------------------------------------------" << endl;
        cout << "1: Array mit Zufallswerten anlegen;" << endl;
        cout << "2: Array anzeigen;" << endl;
        cout << "3: Durchschnitt berechnen;" << endl;
        cout << "4: Minimum bestimmen;" << endl;
        cout << "5: Maximum bestimmen;" << endl;
        cout << "6: Teilersumme berechnen;" << endl;
        cout << "7: Endliches Produkt berechnen;" << endl;
        cout << "0: beenden -> ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (array != nullptr) {
                    delete[] array; // Delete previously allocated array
                }
                cout << "Wie viele Werte soll das Array enthalten? ";
                cin >> length;
                cout << "Geben Sie eine Obergrenze fuer die Zufallswerte an (0 = keine Obergrenze): ";
                int maxZahl;
                cin >> maxZahl;
                initGenerator(); // Initialize random number generator
                array = fuelleArray(length, maxZahl);
                cout << "Array wurde erzeugt" << endl;
                break;
            case 2:
                if (array != nullptr) {
                    gibAusArray(array, length);
                } else {
                    cout << "Array wurde noch nicht erstellt." << endl;
                }
                break;
            case 3:
                if (array != nullptr) {
                    cout << "Durchschnitt: " << berechneDurchschnitt(array, length) << endl;
                } else {
                    cout << "Array wurde noch nicht erstellt." << endl;
                }
                break;
            case 4:
                if (array != nullptr) {
                    cout << "Minimum: " << bestimmeMinimum(array, length) << endl;
                } else {
                    cout << "Array wurde noch nicht erstellt." << endl;
                }
                break;
            case 5:
                if (array != nullptr) {
                    cout << "Maximum: " << bestimmeMaximum(array, length) << endl;
                } else {
                    cout << "Array wurde noch nicht erstellt." << endl;
                }
                break;
            case 6:
                if (array != nullptr) {
                    cout << "Teilersumme: " << berechneTeilersumme(array[length-1]) << endl;
                } else {
                    cout << "Array wurde noch nicht erstellt." << endl;
                }
                break;
            case 7:
                if (array != nullptr) {
                    cout << "Endliches Produkt: " << berechneEndlichesProdukt(array[0], array[length-1]) << endl;
                } else {
                    cout << "Array wurde noch nicht erstellt." << endl;
                }
                break;
            case 0:
                if (array != nullptr) {
                    delete[] array; // Delete the array before exiting
                }
                cout << "Programm wird beendet." << endl;
                break;
            default:
                cout << "Ungültige Eingabe. Bitte erneut versuchen." << endl;
        }
    } while (choice != 0);

    return 0;
}
