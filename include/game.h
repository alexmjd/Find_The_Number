//
// Created by alexandre majda on 14/12/2020.
//

#ifndef FIND_THE_NUMBER_GAME_H
#define FIND_THE_NUMBER_GAME_H

#include <iostream>

class Game {
    private:
        int _numberToFind;
        int _min = 10000;
        int _max = 50000;
        int _difficultyLevel;
        int _gameMode;
        int _propal;

    public:
        void startGame();
        void startMessage() const;
        void setNewRandom();

        void establishedGamePlay();
        void gameLoop();

        bool getUserReplaying();

        void setGameParameters();
};


#endif //FIND_THE_NUMBER_GAME_H
