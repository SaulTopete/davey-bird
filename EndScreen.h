//
// Created by Saul Topete on 12/10/21.
//

#ifndef CS8FINALPROJECT_ENDSCREEN_H
#define CS8FINALPROJECT_ENDSCREEN_H
#include <SFML/Graphics.hpp>
#include "Fonts.h"

class EndScreen {
private:
    sf::RectangleShape background;
    sf::Text nameEnd;
    sf::Text retry;
public:
    const sf::Text &getRetry() const;

private:

    void create(sf::Vector2i v, bool finished, std::string name);
public:
    EndScreen(sf::Vector2i v, bool finished, std::string name);
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};


#endif //CS8FINALPROJECT_ENDSCREEN_H
