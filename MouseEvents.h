//
// Created by Saul Topete on 12/8/21.
//

#ifndef CS8FINALPROJECT_MOUSEEVENTS_H
#define CS8FINALPROJECT_MOUSEEVENTS_H

#include <SFML/Graphics.hpp>
#include <iostream>

template <class T>
class MouseEvents {
public:
    // returns true if the mouse clicks on the object
    static bool mouseClicked(T& object, sf::RenderWindow& window) {
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
            if(sf::Mouse::getPosition() == object){
                std::cout << "pushed inside box" << std::endl;
                return true;
            }
        }
        return false;
    }

    // returns true if the mouse clicks anywhere in the window
    static bool mouseClicked(sf::RenderWindow& window, sf::Event event) {
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
            return true;
        }
        return false;
    }

    // returns true if the mouse has been double clicked
    static bool mouseDoubleClicked() {
        return false;
    }

    //returns true if the mouse has been triple clicked
    static bool mouseTripleClicked() {
        return false;
    }

    // returns if the object has been clicked and the mouse has dragged over the object
    static bool draggedOver(T& object, sf::RenderWindow& window, sf::Event event) {
        return false;
    }

    // returns tru if the mouse is hovered over the object
    static bool hovered(T& object, sf::RenderWindow& window) {
        if(get_mouse_pos(window,object)){
            return true;
        }
        return false;
    }

    static sf::Vector2i get_mouse_pos(sf::RenderWindow& window, sf::Event event){
        sf::Vector2i mouse_pos = sf::Mouse::getPosition(window);
        return mouse_pos;
    }

private:
    // this is what I used to determine if a double click or triple click occurred
    // you don't have to use this if you don't want to
    static sf::Clock clock;
    static int clicks;
    static void countClicks(sf::Event event) {}
};

#endif //CS8FINALPROJECT_MOUSEEVENTS_H
