//
// Created by Saul Topete on 12/10/21.
//

#include "FileTree.h"

FileTree::FileTree() {
    createDropdownList();
    menuDropdown1.constructBox();
    menuDropdown1.constructWord("Directory");
}

void FileTree::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    checkForClick(window, event);
    checkForHover(window, event);
}

void FileTree::draw(sf::RenderTarget &window, sf::RenderStates states) const {
//    if(clickedList1)
//        list.draw(window, states);
//    if(hover){
//        list.draw(window, states);
//    }
//    menuDropdown1.draw(window, states);
}

void FileTree::checkForClick(sf::RenderWindow &window, sf::Event event) {
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
    }
}

void FileTree::createDropdownList() {
    FileItem thing1;
    thing1.constructDropdown(menuDropdown1, 0);
    thing1.constructDropdownWord("Directory 1", menuDropdown1, 0);
    thing1.constructFolder(menuDropdown1, 0);
    FileItem thing2;
    thing2.constructDropdown(menuDropdown1, 1);
    thing2.constructDropdownWord("File", menuDropdown1, 1);
    thing2.constructFile(menuDropdown1, 1);
    FileItem thing3;
    thing3.constructDropdown(menuDropdown1, 2);
    thing3.constructDropdownWord("Directory 2", menuDropdown1, 2);
    thing3.constructFolder(menuDropdown1, 2);

    list.push(thing1);
    list.push(thing2);
    list.push(thing3);

}

void FileTree::checkForHover(sf::RenderWindow &window, sf::Event event) {
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
}