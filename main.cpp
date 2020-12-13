#include <iostream>

int random(int min, int max) {
    return std::rand() % (max + 1 - min) + min;
}

int main() {
    srand(time(NULL));
    int min(10000), max(50000);
    int propal(0);

    int numberToFind(random(min, max));

    std::cout << "Vous devez trouver le nombre, compris entre " << min << " et " << max << std::endl;
    std::cout << "(" << numberToFind << ")" << std::endl;

    /*
     * While the user hasn't found the correct number yet
     * the user has to type the number he thinks is correct
     */
    while (propal != numberToFind) {
        std::cout << "Enter the number you think is correct : " << std::endl;
        std::cin >> propal;
        if (propal < numberToFind)
            std::cout << "It's more." << std::endl;
        else if (propal > numberToFind)
            std::cout << "It's less." << std::endl;
    }

    std::cout << "Congrats ! You Win!" << std::endl;

    return 0;
}
