//
// Created by Saul Topete on 11/28/21.
//

#ifndef CS8FINALPROJECT_FONTS_H
#define CS8FINALPROJECT_FONTS_H
#include <SFML/Graphics.hpp>

class Fonts {
private:
    static sf::Font font;
    static bool hasLoaded;
    static void loadFont();

public:
    static sf::Font& getFont();
};

#endif //CS8FINALPROJECT_FONTS_H
