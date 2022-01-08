//
// Created by Saul Topete on 12/10/21.
//

#ifndef CS8FINALPROJECT_ITEM_H
#define CS8FINALPROJECT_ITEM_H
#include <SFML/Graphics.hpp>
#include "Fonts.h"

class Item : public sf::Drawable {
public:
    Item();
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    const sf::Text &getText() const;
    const sf::RectangleShape &getBox() const;
    void constructWord(const std::string& text);
    void constructBox();
    void constructBox(const Item& reference);
    void constructDropdown(const Item reference, int pos);
    void constructShape(const Item reference, int pos, sf::Color color);
    void constructDropdownWord(const std::string& text, const Item &thing, const int pos);
    void highlightedEffect();
    void unHighlightedEffect();
    void changeColor(sf::Color color);
private:
    sf::Text word;
    sf::RectangleShape box;
    sf::RectangleShape icon;
};
#endif //CS8FINALPROJECT_ITEM_H
