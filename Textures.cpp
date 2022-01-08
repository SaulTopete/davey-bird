//
// Created by Saul Topete on 12/10/21.
//

#include "Textures.h"


sf::Texture Textures::folderTexture;
sf::Texture Textures::fileTexture;
bool Textures::hasLoadedFile = false;
bool Textures::hasLoadedFolder = false;

void Textures::loadFile() {
    if(!hasLoadedFile){
        if(!fileTexture.loadFromFile("Images/file.png")){
            exit(1);
        }
        hasLoadedFile = true;
    }
}

void Textures::loadFolder() {
    if(!hasLoadedFolder){
        if(!folderTexture.loadFromFile("Images/folder.png")){
            exit(1);
        }
        hasLoadedFolder = true;
    }
}

sf::Texture &Textures::getFile() {
    loadFile();
    return fileTexture;
}

sf::Texture &Textures::getFolder() {
    loadFolder();
    return folderTexture;
}