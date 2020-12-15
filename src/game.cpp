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

bool Game::getUserReplaying() {
    bool nok = true;
    char userAnswer;
    while (nok) {
        std::cout << "Do you want to play again ? (y/n)" << std::endl;
        std::cin >> userAnswer;
        if (userAnswer == 'o'
            || userAnswer == 'O'
            || userAnswer == 'y'
            || userAnswer == 'Y') {
            std::cout << "Great, Here we go again !" << std::endl;
            return true;
//            replay = true;
//            nok = false;
        } else if (userAnswer == 'n'
                   || userAnswer == 'N') {
            std::cout << "'Kay, Bye !" << std::endl;
            return false;
//            replay = false;
//            nok = false;
        } else {
            std::cout << "Wrong answer, please type 'y' or 'n'." << std::endl;
            nok = true;
        }

    }
}