//
// Created by Saul Topete on 12/9/21.
//

#include "Bird.h"

void Bird::createBird(sf::Vector2u windowY) {
    bird.setSize(sf::Vector2f(50, 50));
    bird.setPosition(100, windowY.y/2);
    bird.setFillColor(sf::Color::Cyan);
    bird.setOutlineColor(sf::Color::Black);
    bird.setOutlineThickness(3);
}

const sf::RectangleShape &Bird::getBird() const {
    return bird;
}

Bird::Bird(sf::Vector2u windowY) {
    createBird(windowY);
}

void Bird::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(bird);
}

void Bird::moveBird(sf::RenderWindow &window, sf::Event event) {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space)){
        bird.setPosition(bird.getPosition().x + 14, bird.getPosition().y - 28);
    }
}

void Bird::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    moveBird(window, event);
}

void Bird::updateMovement(sf::Vector2u windowY) {
    bool done = false;
    time = clock.getElapsedTime();
    if(time.asMicroseconds() >= 850 && bird.getPosition().y < (float)windowY.y - bird.getSize().y - 10){
        bird.setPosition(bird.getPosition().x + 3, bird.getPosition().y + 3);
        done = true;
    }
    if(done){
        clock.restart();
    }
}




