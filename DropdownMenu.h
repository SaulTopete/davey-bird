//
// Created by Saul Topete on 12/10/21.
//

#ifndef CS8FINALPROJECT_DROPDOWNMENU_H
#define CS8FINALPROJECT_DROPDOWNMENU_H
#include <SFML/Graphics.hpp>
#include "Item.h"
#include "ItemList.h"
#include "InputBox.h"
#include "MouseEvents.h"

class DropdownMenu {
public:
    DropdownMenu();
    void addEventHandler(sf::RenderWindow &window, sf::Event event);
    void draw(sf::RenderTarget &window, sf::RenderStates states) const;
private:
    InputBox menuDropdown1;
    InputBox menuDropdown2;
    ItemList list;
    ItemList list2;
    bool clickedList1 = false;
    bool clickedList2 = false;
    bool hover = false;

    void checkForClick(sf::RenderWindow &window, sf::Event event);
    void checkForHover(sf::RenderWindow &window, sf::Event event);
    void createDropdownList();

};
#endif //CS8FINALPROJECT_DROPDOWNMENU_H
