//
// Created by Saul Topete on 12/10/21.
//

#ifndef CS8FINALPROJECT_ITEMLIST_H
#define CS8FINALPROJECT_ITEMLIST_H
#include <iostream>
#include "Item.h"

class ItemList {
public:
    void push(Item thing);
    Item get(Item thing);
    Item getAt(int pos);
    int size() const;
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

private:
    std::vector<Item> itemList;
};
#endif //CS8FINALPROJECT_ITEMLIST_H
