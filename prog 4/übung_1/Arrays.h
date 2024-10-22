/**
*@author Mohamad Ata Suleiman
*@version  15.05.2024
 **/

#pragma once

/**
 * @brief Dynamically allocates memory for an array and fills it with random values.
 * @param laenge The length of the array to be created.
 * @param maxZahl The upper limit for the random numbers.
 * @return A pointer to the dynamically allocated array.
 **/
int* fuelleArray(int laenge, int maxZahl);

/**
 * @brief Prints the contents of an array.
 * @param array Pointer to the array to be printed.
 * @param anzahlWerte Number of elements in the array.
 **/
void gibAusArray(int* array, int anzahlWerte) ;

/**
 * @brief Calculates the average of elements in an array.
 * @param zahlen Pointer to the array of numbers.
 * @param anzahlWerte Number of elements in the array.
 * @return The average of elements in the array.
 **/
double berechneDurchschnitt(int* zahlen, int anzahlWerte);

/**
 * @brief Finds the maximum value in an array.
 * @param zahlen Pointer to the array of numbers.
 * @param anzahlWerte Number of elements in the array.
 * @return The maximum value in the array.
 **/
int bestimmeMaximum(int* zahlen, int anzahlWerte);

/**
 * @brief Finds the minimum value in an array.
 * @param zahlen Pointer to the array of numbers.
 * @param anzahlWerte Number of elements in the array.
 * @return The minimum value in the array.
 **/
int bestimmeMinimum(int* zahlen, int anzahlWerte);