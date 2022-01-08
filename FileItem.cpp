//
// Created by Saul Topete on 12/10/21.
//

#include "FileItem.h"

FileItem::FileItem() {}

const sf::Text &FileItem::getText() const {
    return word;
}

const sf::RectangleShape &FileItem::getBox() const {
    return box;
}

void FileItem::constructWord(const std::string& text) {
    word.setString(text);
    word.setPosition(box.getPosition().x + box.getGlobalBounds().width/5, box.getPosition().y);
    word.setCharacterSize(box.getSize().y - 10);
    word.setFillColor(sf::Color::White);
    word.setFont(Fonts::getFont());
}

void FileItem::constructBox() {
    box.setPosition(500,500);
    box.setOutlineColor(sf::Color::White);
    box.setSize(sf::Vector2f(300, 50));
    box.setFillColor(sf::Color::Black);
    box.setOutlineThickness(4);
}

void FileItem::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(iconFile);
    window.draw(iconFolder);
    window.draw(box);
    window.draw(word);
}

void FileItem::highlightedEffect() {
    box.setOutlineColor(sf::Color::Cyan);
    box.setOutlineThickness(5);
    word.setFillColor(sf::Color::Yellow);
}

void FileItem::unHighlightedEffect() {
    box.setOutlineThickness(4);
    box.setOutlineColor(sf::Color::White);
    word.setFillColor(sf::Color::White);
}

void FileItem::changeColor(sf::Color color) {
    box.setOutlineColor(color);
}

void FileItem::constructDropdown(const FileItem reference, int pos) {
    if(pos == 1 || pos == 4)
        box.setPosition(500 + 30, (500 + 50 * (pos + 1)) + 10);
    else
        box.setPosition(500, (500 + 50 * (pos + 1)) + 10);
    box.setOutlineColor(sf::Color::White);
    box.setSize(sf::Vector2f(300, 50));
    box.setFillColor(sf::Color::Black);
    box.setOutlineThickness(2);
}

void FileItem::constructDropdownWord(const std::string &text, const FileItem &thing, const int pos) {
    word.setString(text);
    word.setCharacterSize(box.getSize().y - 10);
//    word.setPosition(thing.getBox().getPosition().x + thing.getBox().getGlobalBounds().width/4,
//                     (thing.getBox().getPosition().y + 50 * (pos + 1) + 10));
    word.setPosition(500 + 40,
                     (500 + 50 * (pos + 1) + 10));
    word.setFillColor(sf::Color::White);
    word.setFont(Fonts::getFont());
}

void FileItem::constructBox(const FileItem &reference) {
    box.setPosition(55 + reference.getBox().getGlobalBounds().width,5);
    box.setOutlineColor(sf::Color::White);
    box.setSize(sf::Vector2f(300, 50));
    box.setFillColor(sf::Color::Black);
    box.setOutlineThickness(4);
}

void FileItem::constructFolder(const FileItem &thing, int pos) {
    loadFolder.loadFromFile("Images/folder.png");
    iconFolder.setTexture(Textures::getFolder());
    iconFolder.setPosition(500-15, 500 + 50 * (pos + 1) + 10);
    iconFolder.setScale(sf::Vector2f(0.05, 0.05));
//    iconFolder.setTextureRect(sf::IntRect(100,100,100,100));
}

void FileItem::constructFile(const FileItem &thing, int pos) {
    loadFile.loadFromFile("Images/file.png");
    iconFile.setTexture(Textures::getFile());
    iconFile.setPosition(500, 500 + 50 * (pos + 1) + 10);
    iconFile.setScale(sf::Vector2f(0.09, 0.09));
}

const sf::Sprite &FileItem::getIconFile() const {
    return iconFile;
}

const sf::Sprite &FileItem::getIconFolder() const {
    return iconFolder;
}