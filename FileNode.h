//
// Created by Saul Topete on 12/10/21.
//

#ifndef CS8FINALPROJECT_FILENODE_H
#define CS8FINALPROJECT_FILENODE_H

#include <iostream>
#include "FileItem.h"

class FileNode {
public:
    void push(FileItem thing);
    FileItem get(FileItem thing);
    FileItem getAt(int pos);
    int size() const;
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

private:
    std::vector<FileItem> itemList;
};


#endif //CS8FINALPROJECT_FILENODE_H
