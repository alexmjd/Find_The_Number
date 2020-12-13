#include <iostream>

int main() {
    int propal(0);
    int numberToFind(32781);

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
