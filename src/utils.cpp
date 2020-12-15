//
// Created by alexandre majda on 13/12/2020.
//

#include "utils.h"

int getRandom(int min, int max) {
    return std::rand() % (max + 1 - min) + min;
}

void clearInputBuffer () {
    std::cin.clear();
    // ignore all chars in input stream until `\n`
    std::cin.ignore(std::numeric_limits<int>::max(),'\n');
}

/**
 * Still asking for a valid number while the given value isn't between min and max
 * @param value the value which needs the check
 * @param min the minimal bound
 * @param max the maximal bound
 * @param sentence the error message displayed
 */
void checkMenuInput(int &value, int min, int max, std::string sentence) {
    while (value > max || value < min) {
        std::cin >> value;
        if (std::cin.fail())
            clearInputBuffer();
        if (value > max || value < min)
            std::cout << sentence << std::endl;
    }
}