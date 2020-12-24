//
// Created by Bilbhur on 13/12/2020.
//

#include "utils.h"
#ifdef _WIN32
    #include <limits>
#endif

int getRandom(int min, int max) {
    return std::rand() % (max + 1 - min) + min;
}

void clearInputBuffer () {
    std::cin.clear();
    // ignore all chars in input stream until `\n`
    std::cin.ignore(std::numeric_limits<int>::max(),'\n');
}