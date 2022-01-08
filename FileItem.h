//
// Created by Saul Topete on 12/10/21.
//

#ifndef CS8FINALPROJECT_FILEITEM_H
#define CS8FINALPROJECT_FILEITEM_H
#include <SFML/Graphics.hpp>
#include "Fonts.h"
#include "Textures.h"

class FileItem : public sf::Drawable {
public:
    FileItem();
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    const sf::Text &getText() const;
    const sf::RectangleShape &getBox() const;
    const sf::Sprite &getIconFile() const;
    const sf::Sprite &getIconFolder() const;
    void constructWord(const std::string& text);
    void constructBox();
    void constructBox(const FileItem& reference);
    void constructDropdown(const FileItem reference, int pos);
    void constructDropdownWord(const std::string& text, const FileItem &thing, const int pos);
    void highlightedEffect();
    void unHighlightedEffect();
    void changeColor(sf::Color color);
    void constructFolder(const FileItem &thing, int pos);
    void constructFile(const FileItem &thing, int pos);

private:
    sf::Text word;
    sf::RectangleShape box;
    sf::Sprite iconFolder;
    sf::Texture loadFolder;
    sf::Sprite iconFile;
    sf::Texture loadFile;
};
#endif //CS8FINALPROJECT_FILEITEM_H
