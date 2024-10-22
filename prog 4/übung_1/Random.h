/**
*@author Mohamad Ata Suleiman
*@version  15.05.2024
 **/


#pragma once

/**
 * @brief Initializes the random number generator.
 *
 * This function initializes the random number generator using std::srand(std::time(0)).
 * It should be called only once in the program.
 **/
void initGenerator();

/**
 * Generates a random integer value.
 *
 * This function generates a random integer value and returns it.
 *
 * @param maxWert The maximum value for the generated random number.
 * @return The generated random integer value.
 */
int erzeugeInt(int maxWert);