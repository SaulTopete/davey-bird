//
// Created by Saul Topete on 12/10/21.
//

#include "FileNode.h"
void FileNode::push(FileItem thing) {
    itemList.push_back(thing);
}

FileItem FileNode::get(FileItem thing) {
    for(int i = 0; i < itemList.size(); i++){
        if(itemList.at(i).getText().getString() == thing.getText().getString()){
            return itemList.at(i);
        }
    }
}

FileItem FileNode::getAt(int pos) {
    return itemList.at(pos);
}

void FileNode::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    for(int i = 0; i < size(); ++i){
        window.draw(itemList.at(i).getBox());
        window.draw(itemList.at(i).getText());
        window.draw(itemList.at(i).getIconFile());
        window.draw(itemList.at(i).getIconFolder());
    }
}

int FileNode::size() const {
    return itemList.size();
}