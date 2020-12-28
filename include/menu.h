//
// Created by alexandre majda on 28/12/2020.
//

#ifndef FIND_THE_NUMBER_MENU_H
#define FIND_THE_NUMBER_MENU_H

#include <SFML/Graphics.hpp>

class Menu {

private:
    std::vector<sf::RectangleShape> _menuElements;

    float _widthRect = 250.f;
    float _heightRect = 150.f;

public:
    void setRectangles(float windowX, float windowY);

    void setRectanglesOrigines();

    void setRectanglesPosition(float windowX, float windowY);

    void draw(sf::RenderWindow &window);
};

#endif //FIND_THE_NUMBER_MENU_H
