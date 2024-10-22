/**
*@author Mohamad Ata Suleiman
*@version  15.05.2024
 **/

#pragma once

/**
 * Calculates the finite product of natural numbers within a specified range.
 *
 * This function calculates the product of natural numbers from a start value to an end value.
 * If either of the two values is less than or equal to 0, the result is 0. In this case,
 * the calculation is not performed. If the end value is smaller than the start value, the
 * two values are swapped.
 *
 * \param start The starting value of the range.
 * \param ende The ending value of the range.
 * \return The finite product of the natural numbers within the specified range.
 */
long berechneEndlichesProdukt(int start, int ende);

/**
 * Calculates the sum of divisors for a given positive integer.
 *
 * This function calculates the sum of all positive integer divisors of a given number.
 * If the input number is not a positive integer, the function returns -1.
 *
 * \param zahl The positive integer for which the sum of divisors is to be calculated.
 * \return The sum of all positive integer divisors of the input number.
 *         If the input number is not a positive integer, returns -1.
 */
long berechneTeilersumme(long zahl) ;




