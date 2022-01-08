//
// Created by Saul Topete on 12/10/21.
//

#include "DropdownMenu.h"
DropdownMenu::DropdownMenu() {
    createDropdownList();
    menuDropdown1.constructBox();
    menuDropdown1.constructBox(menuDropdown2);
    menuDropdown1.constructWord("Player");
    menuDropdown2.constructBox(menuDropdown1);
    menuDropdown2.constructWord("Rules");
}

void DropdownMenu::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    checkForClick(window, event);
//    checkForHover(window, event);
}

void DropdownMenu::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    if(clickedList1)
        list.draw(window, states);
    if(clickedList2)
        list2.draw(window, states);
    menuDropdown1.draw(window, states);
    menuDropdown2.draw(window, states);
}

void DropdownMenu::checkForClick(sf::RenderWindow &window, sf::Event event) {
    if(MouseEvents<sf::RectangleShape>::mouseClicked(window, event)) {
        if (menuDropdown1.getBox().getGlobalBounds()
                .contains((float) MouseEvents<sf::RectangleShape>::get_mouse_pos(window, event).x,
                          (float) MouseEvents<sf::RectangleShape>::get_mouse_pos(window, event).y)) {
            clickedList1 = true;
            menuDropdown1.highlightedEffect();
            std::cout << "clicked\n";
        } else {
            clickedList1 = false;
            menuDropdown1.unHighlightedEffect();
            std::cout << "not clicked\n";
        }
        if (menuDropdown2.getBox().getGlobalBounds()
                .contains((float) MouseEvents<sf::RectangleShape>::get_mouse_pos(window, event).x,
                          (float) MouseEvents<sf::RectangleShape>::get_mouse_pos(window, event).y)) {
            clickedList2 = true;
            menuDropdown2.highlightedEffect();
            std::cout << "clicked 2\n";
        } else {
            clickedList2 = false;
            menuDropdown2.unHighlightedEffect();
            std::cout << "not clicked\n";
        }
    }
}

void DropdownMenu::createDropdownList() {
    Item thing1;
    thing1.constructDropdown(menuDropdown1, 0);
    thing1.constructDropdownWord("Red", menuDropdown1, 0);
    thing1.constructShape(menuDropdown1, 0, sf::Color::Red);
    Item thing2;
    thing2.constructDropdown(menuDropdown1, 1);
    thing2.constructDropdownWord("Pink", menuDropdown1, 1);
    thing1.constructShape(menuDropdown1, 1, sf::Color::Magenta);

    list.push(thing1);
    list.push(thing2);

    thing2.constructDropdown(menuDropdown2, 0);
    thing2.constructDropdownWord("SPACE to jump", menuDropdown2, 0);


    list2.push(thing2);

}

void DropdownMenu::checkForHover(sf::RenderWindow &window, sf::Event event) {
    if(menuDropdown1.getBox().getGlobalBounds().contains
            (MouseEvents<sf::RectangleShape>::get_mouse_pos(window, event).x,
             MouseEvents<sf::RectangleShape>::get_mouse_pos(window, event).y)){
        menuDropdown1.changeColor(sf::Color::Magenta);
        hover = true;
    }
    else{
        menuDropdown1.changeColor(sf::Color::White);
        hover = false;
    }

    if(menuDropdown2.getBox().getGlobalBounds().contains
            (MouseEvents<sf::RectangleShape>::get_mouse_pos(window, event).x,
             MouseEvents<sf::RectangleShape>::get_mouse_pos(window, event).y)){
        menuDropdown2.changeColor(sf::Color::Magenta);
        hover = true;
    }
    else{
        menuDropdown2.changeColor(sf::Color::White);
        hover = false;
    }
}