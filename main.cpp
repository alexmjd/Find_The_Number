//
// Created by alexandre majda on 13/12/2020.
//

#include <iostream>
#include "utils.h"
#include <game.h>
#include <string>

int main() {

    Game* game = new Game();
//    bool replay(true);

//    bool ok = true;
//    int difficultyLevel(0);
//    int gameMode(0);

    game->setGameParameters();

//    while (ok) {
//        std::cout << "Would you play Solo or Multiplayer ? (1 = Solo, 2 = Multiplayer)" << std::endl;
//        checkMenuInput(game->gameMode, 1, 2, "Please choose a valid game mode");
//        checkMenuInput(difficultyLevel, 1, 3, "Please choose a valid difficulty level");
//
//        if (difficultyLevel != 0 && gameMode != 0)
//            ok = false;
//
//        std::cout << "Difficulty level : " << difficultyLevel << std::endl;
//        std::cout << "Game Mode : " << gameMode << std::endl;
//    }

//    while (replay) {
//        game->startGame();
//
//        game->gameLoop();
//
//        // Check user input for replaying
//        replay = game->getUserReplaying();
//    }

    return 0;
}
