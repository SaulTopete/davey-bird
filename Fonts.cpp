//
// Created by Saul Topete on 11/28/21.
//

#include "Fonts.h"

sf::Font Fonts::font;
bool Fonts::hasLoaded = false;

sf::Font &Fonts::getFont() {
    loadFont();
    return font;
}

void Fonts::loadFont() {
    if(!hasLoaded){
        if(!font.loadFromFile("Arial.ttf")){
            exit(1);
        }
        hasLoaded = true;
    }
}