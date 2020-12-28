//
// Created by Bilbhur on 13/12/2020.
//

#include <menu.h>
#include <game.h>
#include <string>
#include <SFML/Graphics.hpp>

int main() {

    // Create the window instance
    sf::RenderWindow window;
    window.create(sf::VideoMode(1200, 700), "Find The Number");

    // Set FPS limit to avoid overwarm of the computer (and because it's useless too)
    window.setFramerateLimit(60);
    window.setVerticalSyncEnabled(true);

    // Instanciate the menu
    Menu menu;
    menu.setRectangles(window.getSize().x, window.getSize().y);

    // Keep the window open while the window event type isn't `close`
    while(window.isOpen()) {
        sf::Event event;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();

            // Detect when specific key is pressed (sf::Keyboard::isKeyPressed trigger press & release event)
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Space ||
                    event.key.code == sf::Keyboard::Enter)
                    std::cout << "Key " << event.key.code << " has been pressed" << std::endl;
            }
        }

        // Clear the window before drawing anything to avoid random pixels
        window.clear(sf::Color::Black);

        menu.draw(window);

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
