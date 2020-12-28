//
// Created by alexandre majda on 28/12/2020.
//

#include <menu.h>

void Menu::setRectangles(float windowX, float windowY) {

    // Declare 3 rects for choosing the difficulty level
    _rect.setSize(sf::Vector2(_widthRect, _heightRect));
    _rect2.setSize(sf::Vector2(_widthRect, _heightRect));
    _rect3.setSize(sf::Vector2(_widthRect, _heightRect));
//    sf::RectangleShape rect(sf::Vector2(_widthRect, _heightRect));
//    sf::RectangleShape rect2(sf::Vector2(_widthRect, _heightRect));
//    sf::RectangleShape rect3(sf::Vector2(_widthRect, _heightRect));

    // Set options for rects
    _rect.setOrigin(_rect.getSize().x / 2, _rect.getSize().y / 2);
    _rect.setPosition(windowX / 2, windowY / 2);
//    rect.setOrigin(rect.getSize().x / 2, rect.getSize().y / 2);
//    rect.setPosition(windowX / 2, windowY / 2);

    _rect2.setOrigin(_rect2.getSize().x / 2, _rect2.getSize().y / 2);
    _rect2.setPosition(_rect.getPosition().x / 2 - 50, windowY / 2);

    _rect3.setOrigin(_rect3.getSize().x / 2, _rect3.getSize().y / 2);
    _rect3.setPosition(50 + _rect.getPosition().x + _rect.getPosition().x / 2,
                      windowY / 2);

//    rect2.setOrigin(rect2.getSize().x / 2, rect2.getSize().y / 2);
//    rect2.setPosition(rect.getPosition().x / 2 - 50, windowY / 2);
//
//    rect3.setOrigin(rect3.getSize().x / 2, rect3.getSize().y / 2);
//    rect3.setPosition(50 + rect.getPosition().x + rect.getPosition().x / 2,
//                      windowY / 2);
}

sf::RectangleShape Menu::getRectangle1() {
    return _rect;
}

sf::RectangleShape Menu::getRectangle2() const {
    return _rect2;
}

sf::RectangleShape Menu::getRectangle3() const {
    return _rect3;
}

void Menu::draw(sf::RenderWindow &window) {
    window.draw(_rect);
    window.draw(_rect2);
    window.draw(_rect3);
}