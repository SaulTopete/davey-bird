//
// Created by Saul Topete on 12/10/21.
//

#include "Item.h"


Item::Item() {}

const sf::Text &Item::getText() const {
    return word;
}

const sf::RectangleShape &Item::getBox() const {
    return box;
}

void Item::constructWord(const std::string& text) {
    word.setString(text);
    word.setPosition(box.getPosition().x + box.getGlobalBounds().width/5, box.getPosition().y);
    word.setCharacterSize(box.getSize().y - 10);
    word.setFillColor(sf::Color::White);
    word.setFont(Fonts::getFont());
}

void Item::constructBox() {
    box.setPosition(10,5);
    box.setOutlineColor(sf::Color::White);
    box.setSize(sf::Vector2f(150, 50));
    box.setFillColor(sf::Color::Black);
    box.setOutlineThickness(4);
}

void Item::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(box);
    window.draw(icon);
    window.draw(word);
}

void Item::highlightedEffect() {
    box.setOutlineColor(sf::Color::Cyan);
    box.setOutlineThickness(5);
    word.setFillColor(sf::Color::Yellow);
}

void Item::unHighlightedEffect() {
    box.setOutlineThickness(4);
    box.setOutlineColor(sf::Color::White);
    word.setFillColor(sf::Color::White);
}

void Item::changeColor(sf::Color color) {
    box.setOutlineColor(color);
}

void Item::constructDropdown(const Item reference, int pos) {
    box.setPosition(50, (reference.getBox().getPosition().y + 50 * (pos + 1)) + 10);
    box.setOutlineColor(sf::Color::White);
    box.setSize(sf::Vector2f(350, 50));
    box.setFillColor(sf::Color::Black);
    box.setOutlineThickness(2);
}

void Item::constructDropdownWord(const std::string &text, const Item &thing, const int pos) {
    word.setString(text);
    word.setCharacterSize(box.getSize().y - 10);
    word.setPosition(90,
                     (thing.getBox().getPosition().y + 50 * (pos + 1) + 10));
    word.setFillColor(sf::Color::White);
    word.setFont(Fonts::getFont());
}

void Item::constructBox(const Item &reference) {
    box.setPosition(10 + reference.getBox().getGlobalBounds().width,5);
    box.setOutlineColor(sf::Color::White);
    box.setSize(sf::Vector2f(180, 50));
    box.setFillColor(sf::Color::Black);
    box.setOutlineThickness(4);
}

void Item::constructShape(const Item reference, int pos, sf::Color color) {
    icon.setSize(sf::Vector2f(30, 30));
    icon.setOutlineColor(sf::Color::White);
    icon.setOutlineThickness(3);
    icon.setPosition(90,
                     (reference.getBox().getPosition().y + 50 * (pos + 1) + 10));
    icon.setFillColor(color);
}
