//
// Created by alexandre majda on 14/12/2020.
//

#include <game.h>
#include <utils.h>

void Game::startGame() {
    setNewRandom();
    startMessage();
    gameLoop();

    _difficultyLevel = 0;
    _gameMode = 0;
}

void Game::startMessage() const {
    std::cout << "Vous devez trouver le nombre, compris entre 0 et " << _max << std::endl;
    std::cout << "(" << _numberToFind << ")" << std::endl;
}

void Game::setNewRandom() {
    srand(time(NULL));
    _numberToFind = getRandom(0, _max);
}

/**
 * Basic gameplay
 * @param propal
 */
void Game::establishedGamePlay() {
    if (_propal < _numberToFind)
        std::cout << "It's more." << std::endl;
    else if (_propal > _numberToFind)
        std::cout << "It's less." << std::endl;
}

/**
 * Loop to get if the user wants to replay or not
 * @return replay
 */
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

/**
 * While the user hasn't found the correct number yet
 * the user has to type the number he thinks is correct
 */
void Game::gameLoop() {

    while (_propal != _numberToFind) {

        // Display the last value
        if (_propal != 0)
            std::cout << "Last proposition : " << _propal << std::endl;
        std::cout << "Enter the number you think is correct : " << std::endl;
        std::cin >> _propal;

        // Check User Input
        if(std::cin.fail()) {
            std::cout << "You have to provide a valid Integer" << std::endl;
            clearInputBuffer();
            continue;
        }

        // Gameplay
        establishedGamePlay();
    }
    std::cout << "Congrats ! You Win!" << std::endl;
    _propal = 0;
}

/**
 * Menu about choosing game mode and difficulty
 */
void Game::setGameParameters() {
    bool ok = true;
    while (ok) {
        std::cout << "Would you play Solo or Multiplayer ? (1 = Solo, 2 = Multiplayer)" << std::endl;
        checkMenuInput(_gameMode, 1, 2, "Please choose a valid game mode");

        std::cout << "Which difficulty will you choose ? (1 = Easy, 2 = Medium, 3 = Hard)" << std::endl;
        checkMenuInput(_difficultyLevel, 1, 3, "Please choose a valid difficulty level");

        if (_difficultyLevel != 0 && _gameMode != 0)
            ok = false;

        std::cout << "Difficulty level : " << _difficultyLevel << std::endl;
        std::cout << "Game Mode : " << _gameMode << std::endl;
    }
    setLevelParameters();
}

/**
 * Setting boundaries and timer from choosen difficulty level
 */
void Game::setLevelParameters(){
    switch (_difficultyLevel) {
        case 1:
            _max = 50000;
            _limitTime = 45;
            break;
        case 2:
            _max = 100000;
            _limitTime = 30;
            break;
        case 3:
            _max = 200000;
            _limitTime = 20;
            break;
    }
}