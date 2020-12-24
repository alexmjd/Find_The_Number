//
// Created by Bilbhur on 13/12/2020.
//

#include <game.h>
#include <string>
#include <SFML/Graphics.hpp>

int main() {

    // Create the window instance
    sf::RenderWindow window;
    window.create(sf::VideoMode(800, 600), "Find The Number");

    // Keep the window open while the window event type isn't `close`
    while(window.isOpen()) {
        sf::Event event;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();
        }
        // Clear the window before drawing anything to avoid random pixels
        window.clear(sf::Color::Black);


        // End the current frame, Display all what have been draw
        window.display();
    }
//    Game* game = new Game();
//    bool replay(true);
//
//    while (replay) {
//        game->setNewRandom();
//        game->startMessage();
//
//        game->gameLoop();
//
//        // Check user input for replaying
//        replay = game->getUserReplaying();
//    }

    return 0;
}
