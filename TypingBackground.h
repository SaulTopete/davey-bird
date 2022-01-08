//
// Created by Saul Topete on 12/10/21.
//

#ifndef CS8FINALPROJECT_TYPINGBACKGROUND_H
#define CS8FINALPROJECT_TYPINGBACKGROUND_H
#include <SFML/Graphics.hpp>
#include "Fonts.h"

class TypingBackground {
private:
    sf::RectangleShape background;
    sf::Text title;
    sf::Text name;
    sf::RectangleShape underscore;
    sf::Text enter;

    void createBox(sf::Vector2i v);
public:
    TypingBackground(sf::Vector2i v);
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};


#endif //CS8FINALPROJECT_TYPINGBACKGROUND_H
