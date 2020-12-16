//
// Created by alexandre majda on 14/12/2020.
//

#ifndef FIND_THE_NUMBER_GAME_H
#define FIND_THE_NUMBER_GAME_H

#include <iostream>

enum difficultyLevel {easy = 1, medium = 2, hard = 3};

class Game {
    private:
        int _numberToFind;
        int _max = 50000;
        int _difficultyLevel;
        int _gameMode;
        int _propal;
        int _limitTime;

    public:
        void startGame();
        void startMessage() const;
        void setNewRandom();

        void establishedGamePlay();
        void gameLoop();

        bool getUserReplaying();

        void setGameParameters();
        void setLevelParameters();
};


#endif //FIND_THE_NUMBER_GAME_H
