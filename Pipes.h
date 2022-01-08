//
// Created by Saul Topete on 12/9/21.
//

#ifndef CS8FINALPROJECT_PIPES_H
#define CS8FINALPROJECT_PIPES_H
#include <SFML/Graphics.hpp>
#include "Fonts.h"

class Pipes {
private:
    sf::RectangleShape endLine;
public:
    const sf::RectangleShape &getEndLine() const;

private:
    sf::Text endText;

    sf::RectangleShape pipe1top;
    sf::RectangleShape pipe2top;
    sf::RectangleShape pipe3top;
    sf::RectangleShape pipe4top;
    sf::RectangleShape pipe5top;

    sf::RectangleShape pipe1bot;
    sf::RectangleShape pipe2bot;
    sf::RectangleShape pipe3bot;
    sf::RectangleShape pipe4Bot;
    sf::RectangleShape pipe5bot;

    void createPipes(sf::Vector2u windowY);

public:
    Pipes(sf::Vector2u windowY);
    void draw(sf::RenderTarget &window, sf::RenderStates states) const;
    const sf::RectangleShape &getPipe1Top() const;
    const sf::RectangleShape &getPipe2Top() const;
    const sf::RectangleShape &getPipe3Top() const;
    const sf::RectangleShape &getPipe4Top() const;
    const sf::RectangleShape &getPipe5Top() const;
    const sf::RectangleShape &getPipe1Bot() const;
    const sf::RectangleShape &getPipe2Bot() const;
    const sf::RectangleShape &getPipe3Bot() const;
    const sf::RectangleShape &getPipe4Bot() const;
    const sf::RectangleShape &getPipe5Bot() const;

};


#endif //CS8FINALPROJECT_PIPES_H
