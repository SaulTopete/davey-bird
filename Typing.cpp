//
// Created by Saul Topete on 12/10/21.
//

#include "Typing.h"

Typing::Typing(sf::Vector2i v) {
    text.setFont(Fonts::getFont());
    text.setCharacterSize(65);
    text.setFillColor(sf::Color::White);
    text.setPosition(500, 500);
}

void Typing::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(text);
}

void Typing::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    word = text.getString();
    if (event.type == sf::Event::TextEntered) {
        if (event.text.unicode > 31 && event.text.unicode < 128) {
            word += static_cast<char>(event.text.unicode);
            text.setString(word);
        }
        if(event.text.unicode == 8 && word.length() != 0){
            word.erase(word.length() - 1);
            text.setString(word);
        }
    }
}

void Typing::update() {
    text.setFont(Fonts::getFont());
    text.setCharacterSize(65);
    text.setFillColor(sf::Color::White);
}

const std::string &Typing::getWord() const {
    return word;
}

bool Typing::checkForEnter() {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)){
        return true;
    }
    return false;
}
