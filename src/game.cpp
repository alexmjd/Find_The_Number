//
// Created by alexandre majda on 14/12/2020.
//

#include <game.h>
#include <utils.h>

#ifdef _WIN32
    #include <ctime>
#endif

void Game::startMessage() const {
    std::cout << "Vous devez trouver le nombre, compris entre " << _min << " et " << _max << std::endl;
    std::cout << "(" << _numberToFind << ")" << std::endl;
}

void Game::setNewRandom() {
    srand(time(NULL));
    _numberToFind = getRandom(_min, _max);
}

void Game::establishedGamePlay(int &propal) {
    if (propal < _numberToFind)
        std::cout << "It's more." << std::endl;
    else if (propal > _numberToFind)
        std::cout << "It's less." << std::endl;
}

bool Game::getUserReplaying() {
    bool nok = true;
    bool replay = true;
    char userAnswer;

    while (nok) {
        std::cout << "Do you want to play again ? (y/n)" << std::endl;
        std::cin >> userAnswer;
        if (userAnswer == 'o'
            || userAnswer == 'O'
            || userAnswer == 'y'
            || userAnswer == 'Y') {
            std::cout << "Great, Here we go again !" << std::endl;
            replay = true;
            nok = false;
        } else if (userAnswer == 'n'
                   || userAnswer == 'N') {
            std::cout << "'Kay, Bye !" << std::endl;
            replay = false;
            nok = false;
        } else {
            std::cout << "Wrong answer, please type 'y' or 'n'." << std::endl;
            nok = true;
        }
    }
    return replay;
}

/*
 * While the user hasn't found the correct number yet
 * the user has to type the number he thinks is correct
 */
void Game::gameLoop() {
    int propal(0);

    while (propal != _numberToFind) {

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

        std::cout << "Congrats ! You Win!" << std::endl;

        // Gameplay
        establishedGamePlay(propal);
    }
}