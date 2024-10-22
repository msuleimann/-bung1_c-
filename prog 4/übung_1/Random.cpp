/**
*@author Mohamad Ata Suleiman
*@version  15.05.2024
 **/

#include "Random.h"
#include <cstdlib> // For std::rand, std::srand
#include <ctime>   // For std::time

void initGenerator() {
    std::srand(time(0));
}

int erzeugeInt(int maxWert) {
    if (maxWert > 0) {
        return std::rand() % (maxWert + 1);
    } else {
        return std::rand();
    }
}
