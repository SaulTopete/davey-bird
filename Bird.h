//
// Created by Saul Topete on 12/9/21.
//

#ifndef CS8FINALPROJECT_BIRD_H
#define CS8FINALPROJECT_BIRD_H
#include <SFML/Graphics.hpp>
#include "MouseEvents.h"

class Bird {
private:
    sf::RectangleShape bird;
    sf::Time time;
    sf::Clock clock;
public:
    Bird(sf::Vector2u windowY);
    void createBird(sf::Vector2u windowY);
    void draw(sf::RenderTarget &window, sf::RenderStates states) const;
    void moveBird(sf::RenderWindow &window, sf::Event event);
    const sf::RectangleShape &getBird() const;
    void addEventHandler(sf::RenderWindow &window, sf::Event event);
    void updateMovement(sf::Vector2u windowY);
};


#endif //CS8FINALPROJECT_BIRD_H
