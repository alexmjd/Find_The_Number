//
// Created by alexandre majda on 28/12/2020.
//

#ifndef FIND_THE_NUMBER_MENU_H
#define FIND_THE_NUMBER_MENU_H

#include <SFML/Graphics.hpp>

class Menu {

private:
    sf::RectangleShape _rect;
    sf::RectangleShape _rect2;
    sf::RectangleShape _rect3;

    float _widthRect = 250.f;
    float _heightRect = 150.f;

public:

    void setRectangles(float windowX, float windowY);

    sf::RectangleShape getRectangle1();
    sf::RectangleShape getRectangle2() const;
    sf::RectangleShape getRectangle3() const;

    void draw(sf::RenderWindow &window);
};


#endif //FIND_THE_NUMBER_MENU_H
