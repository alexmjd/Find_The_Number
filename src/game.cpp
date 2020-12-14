//
// Created by alexandre majda on 14/12/2020.
//

#include <game.h>
#include <utils.h>

void Game::startMessage() const {
    std::cout << "Vous devez trouver le nombre, compris entre " << _min << " et " << _max << std::endl;
    std::cout << "(" << [_numberToFind << ")" << std::endl;
}

void Game::setNewRandom() {

    srand(time(NULL));
    _numberToFind = getRandom(_min, _max);
}

int Game::getNumberToFind() const {
    return _numberToFind;
}