//
// Created by Saul Topete on 12/10/21.
//

#ifndef CS8FINALPROJECT_FILETREE_H
#define CS8FINALPROJECT_FILETREE_H
#include <SFML/Graphics.hpp>
#include "FileItem.h"
#include "FileNode.h"
#include "InputBox.h"
#include "MouseEvents.h"

class FileTree {
public:
    FileTree();
    void addEventHandler(sf::RenderWindow &window, sf::Event event);
    void draw(sf::RenderTarget &window, sf::RenderStates states) const;
private:
    FileItem menuDropdown1;
    FileNode list;
    bool clickedList1 = false;
    bool hover = false;

    void checkForClick(sf::RenderWindow &window, sf::Event event);
    void checkForHover(sf::RenderWindow &window, sf::Event event);
    void createDropdownList();

};
#endif //CS8FINALPROJECT_FILETREE_H
