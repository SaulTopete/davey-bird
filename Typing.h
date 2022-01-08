//
// Created by Saul Topete on 12/10/21.
//

#ifndef CS8FINALPROJECT_TYPING_H
#define CS8FINALPROJECT_TYPING_H
#include "Fonts.h"
#include "Typing.h"
#include "Fonts.h"

class Typing : public sf::Drawable {
private:
    sf::Text text;
    std::string word;
public:
    const std::string &getWord() const;

public:
    Typing(sf::Vector2i v);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void addEventHandler(sf::RenderWindow& window, sf::Event event);
    void update();
    static bool checkForEnter();
};
#endif //CS8FINALPROJECT_TYPING_H
