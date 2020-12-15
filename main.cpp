//
// Created by alexandre majda on 13/12/2020.
//

#include <iostream>
#include "utils.h"
#include <game.h>
#include <string>

int main() {

    Game* game = new Game();
    bool replay(true);


    while (replay) {
        game->setGameParameters();
        game->startGame();
//        game->gameLoop();
        replay = game->getUserReplaying();
    }
    return 0;
}
