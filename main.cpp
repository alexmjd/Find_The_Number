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
    bool replay(true);


    while (replay) {
        game->setNewRandom();
        game->startMessage();

        /*
         * While the user hasn't found the correct number yet
         * the user has to type the number he thinks is correct
         */
        while (propal != game->getNumberToFind()) {

            // Display the last value
            if (propal != 0)
                std::cout << "Last proposition : " << propal << std::endl;
            std::cout << "Enter the number you think is correct : " << std::endl;
            std::cin >> propal;

            // Check User Input
            if(std::cin.fail()) {
                std::cin.clear();
                std::cout << "NaN" << std::endl;
                clearInputBuffer();
                continue;
            }

            // Gameplay
            game->establishedGamePlay(propal);
        }
        std::cout << "Congrats ! You Win!" << std::endl;

        // Check user input for replaying
        replay = game->getUserReplaying();

        propal = 0;
    }

    return 0;
}
