//
// Created by Saul Topete on 12/10/21.
//

#include "ItemList.h"


void ItemList::push(Item thing) {
    itemList.push_back(thing);
}

Item ItemList::get(Item thing) {
    for(int i = 0; i < itemList.size(); i++){
        if(itemList.at(i).getText().getString() == thing.getText().getString()){
            return itemList.at(i);
        }
    }
}

Item ItemList::getAt(int pos) {
    return itemList.at(pos);
}

void ItemList::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    for(int i = 0; i < size(); ++i){
        window.draw(itemList.at(i).getBox());
        window.draw(itemList.at(i).getText());
    }
//    window.draw(itemList.at(0).getBox());
//    window.draw(itemList.at(0).getText());
}

int ItemList::size() const {
    return itemList.size();
}