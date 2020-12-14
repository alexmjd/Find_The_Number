//
// Created by alexandre majda on 13/12/2020.
//

#include <iostream>
#include "utils.h"
#include <game.h>
#include <string>

int main() {

    Game* game = new Game();
    int propal(0);


    game->setNewRandom();
    game->startMessage();

    /*
     * While the user hasn't found the correct number yet
     * the user has to type the number he thinks is correct
     */
    while (propal != game->getNumberToFind()) {
        std::cout << "Enter the number you think is correct : " << std::endl;
        std::cin >> propal;

        // Check User Input
        if(std::cin.fail()) {
            std::cin.clear();
            std::cout << "NaN" << std::endl;
            clearInputBuffer();
            continue;
        }
        if (propal < game->getNumberToFind())
            std::cout << "It's more." << std::endl;
        else if (propal > game->getNumberToFind())
            std::cout << "It's less." << std::endl;
    }

    std::cout << "Congrats ! You Win!" << std::endl;

    return 0;
}
