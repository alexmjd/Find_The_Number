//
// Created by alexandre majda on 14/12/2020.
//

#include <game.h>
#include <utils.h>

void Game::startMessage() const {
    std::cout << "Vous devez trouver le nombre, compris entre " << _min << " et " << _max << std::endl;
    std::cout << "(" << _numberToFind << ")" << std::endl;
}

void Game::setNewRandom() {

    srand(time(NULL));
    _numberToFind = getRandom(_min, _max);
}

int Game::getNumberToFind() const {
    return _numberToFind;
}

void Game::establishedGamePlay(int &propal) {
    if (propal < getNumberToFind())
        std::cout << "It's more." << std::endl;
    else if (propal > getNumberToFind())
        std::cout << "It's less." << std::endl;
}