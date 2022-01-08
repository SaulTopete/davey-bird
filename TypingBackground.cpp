//
// Created by Saul Topete on 12/10/21.
//

#include "TypingBackground.h"

void TypingBackground::createBox(sf::Vector2i v) {
    background.setSize(sf::Vector2f(1000, 500));
    background.setPosition(v.x, v.y + 100);
    background.setFillColor(sf::Color(0,0,0,170));
    background.setOutlineColor(sf::Color::Yellow);
    background.setOutlineThickness(7);

    title.setCharacterSize(50);
    title.setString("DAVEY BIRD");
    title.setLetterSpacing(2);
    title.setFont(Fonts::getFont());
    title.setPosition(background.getPosition().x + background.getLocalBounds().width / 3, background.getPosition().y + 20);
    title.setFillColor(sf::Color::Cyan);
    title.setOutlineThickness(5);
    title.setOutlineColor(sf::Color::Blue);

    name.setCharacterSize(25);
    name.setString("Type to enter name!");
    name.setLetterSpacing(2);
    name.setFont(Fonts::getFont());
    name.setPosition(background.getPosition().x + background.getLocalBounds().width / 3 + 25, background.getPosition().y + 80);
    name.setFillColor(sf::Color::White);
    name.setOutlineThickness(2);
    name.setOutlineColor(sf::Color::Magenta);

    underscore.setSize(sf::Vector2f(background.getSize().x - 20, 8));
    underscore.setPosition(v.x + 10, v.y+340);
    underscore.setFillColor(sf::Color::White);

    enter.setCharacterSize(45);
    enter.setString("Press ENTER to play!");
    enter.setLetterSpacing(3);
    enter.setFont(Fonts::getFont());
    enter.setPosition(background.getPosition().x + background.getLocalBounds().width / 3 - 125, background.getPosition().y + 280);
    enter.setFillColor(sf::Color::White);
    enter.setOutlineThickness(2);
    enter.setOutlineColor(sf::Color::Magenta);
}

void TypingBackground::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(background);
    target.draw(title);
    target.draw(name);
    target.draw(underscore);
    target.draw(enter);
}

TypingBackground::TypingBackground(sf::Vector2i v) {
    createBox(v);
}
