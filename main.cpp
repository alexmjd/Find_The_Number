//
// Created by Bilbhur on 13/12/2020.
//

#include <game.h>
#include <string>
#include <SFML/Graphics.hpp>

int main() {

    // Create the window instance
    sf::RenderWindow window;
    window.create(sf::VideoMode(1200, 700), "Find The Number");

    // Set FPS limit to avoid overwarm of the computer (and because it's useless too)
    window.setFramerateLimit(60);

    float widthRect = window.getSize().x / 4;
    float heightRect = 150.f;


    // Declare 3 rects for choosing the difficulty level
    sf::RectangleShape rect(sf::Vector2(widthRect, heightRect));
    sf::RectangleShape rect2(sf::Vector2(widthRect, heightRect));
    sf::RectangleShape rect3(sf::Vector2(widthRect, heightRect));

    // Set options for rects
    rect.setOrigin(rect.getSize().x / 2, rect.getSize().y / 2);
    rect.setPosition(window.getSize().x / 2, window.getSize().y / 2);

    rect2.setOrigin(rect2.getSize().x / 2, rect2.getSize().y / 2);
    rect2.setPosition(rect.getPosition().x / 2 - 20, window.getSize().y / 2);

    rect3.setOrigin(rect3.getSize().x / 2, rect3.getSize().y / 2);
    rect3.setPosition(20 + rect.getPosition().x + rect.getPosition().x / 2,
                      window.getSize().y / 2);

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

        window.draw(rect);
        window.draw(rect2);
        window.draw(rect3);

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
