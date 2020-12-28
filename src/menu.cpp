//
// Created by alexandre majda on 28/12/2020.
//

#include <menu.h>
#include <iostream>

void Menu::setRectangles(float windowX, float windowY) {

    sf::Vector2 vector(_widthRect, _heightRect);
    for (int i = 0; i < 3; i++)
        _menuElements.push_back(sf::RectangleShape(vector));
    setRectanglesOrigines();
    setRectanglesPosition(windowX, windowY);
}

void Menu::setRectanglesOrigines() {
    for (sf::RectangleShape &rect: _menuElements)
        rect.setOrigin(rect.getSize().x / 2, rect.getSize().y / 2);
}

void Menu::setRectanglesPosition(float windowX, float windowY) {
    float x;
    for (unsigned long i = 1; i < _menuElements.size()+1; i++) {
        x = windowX * i / (_menuElements.size()+1);
        _menuElements[i-1].setPosition(x, windowY / 2);
    }
}

void Menu::draw(sf::RenderWindow &window) {
    for(sf::RectangleShape rect: _menuElements)
        window.draw(rect);
    setTextInRectangle(window);
}

void Menu::setTextInRectangle(sf::RenderWindow &window) {
    sf::Font font;
    if (!font.loadFromFile("../assets/fonts/Quicksand-Light.ttf"))
        std::cout << "Error from file" << std::endl;

    sf::Text text;
    text.setFont(font);
    text.setFillColor(sf::Color::Red);
    text.setString(L"ANOTHER");
    text.setOrigin(text.getGlobalBounds().width / 2, text.getGlobalBounds().height);

    for (sf::RectangleShape &rect : _menuElements) {
        text.setPosition(rect.getPosition().x, rect.getPosition().y);

        window.draw(text);
    }
}