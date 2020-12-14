//
// Created by alexandre majda on 14/12/2020.
//

#ifndef FIND_THE_NUMBER_GAME_H
#define FIND_THE_NUMBER_GAME_H

#include <iostream>

class Game {
    private:
        int _numberToFind;
        const int _min = 10000;
        const int _max = 50000;

    public:
        void startMessage() const;
        void setNewRandom();

        int getNumberToFind() const;
};


#endif //FIND_THE_NUMBER_GAME_H
