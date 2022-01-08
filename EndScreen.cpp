//
// Created by Saul Topete on 12/10/21.
//

#include "EndScreen.h"

void EndScreen::create(sf::Vector2i v, bool finished, std::string name) {
    background.setSize(sf::Vector2f(1000, 500));
    background.setPosition(v.x, v.y + 100);
    background.setFillColor(sf::Color(0,0,0,170));
    background.setOutlineColor(sf::Color::Yellow);
    background.setOutlineThickness(7);

    nameEnd.setCharacterSize(80);
    if(finished)
    {
        nameEnd.setString(name + " WON!");
        nameEnd.setOutlineColor(sf::Color::Green);
    } else{
        nameEnd.setString(name + " LOST!");
        nameEnd.setOutlineColor(sf::Color::Red);
    }

    nameEnd.setLetterSpacing(2);
    nameEnd.setFont(Fonts::getFont());
    nameEnd.setPosition(background.getPosition().x + background.getLocalBounds().width / 3 -125, background.getPosition().y + 40);
    nameEnd.setFillColor(sf::Color::White);
    nameEnd.setOutlineThickness(4);

    retry.setString("RETRY");
    retry.setFillColor(sf::Color::White);
    retry.setLetterSpacing(2);
    retry.setFont(Fonts::getFont());
    retry.setPosition(background.getPosition().x + background.getLocalBounds().width / 3 +525, background.getPosition().y + 450);
    retry.setFillColor(sf::Color::White);
    retry.setOutlineThickness(3);
    retry.setOutlineColor(sf::Color::Yellow);

}

EndScreen::EndScreen(sf::Vector2i v, bool finished, std::string name) {
    create(v, finished, name);
}

void EndScreen::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(background);
    target.draw(nameEnd);
    target.draw(retry);
}

const sf::Text &EndScreen::getRetry() const {
    return retry;
}
