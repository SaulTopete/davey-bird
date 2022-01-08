//
// Created by Saul Topete on 12/10/21.
//

#ifndef CS8FINALPROJECT_TEXTURES_H
#define CS8FINALPROJECT_TEXTURES_H
#include <SFML/Graphics.hpp>

class Textures {
private:
    static sf::Texture fileTexture;
    static sf::Texture folderTexture;
    static void loadFile();
    static void loadFolder();
    static bool hasLoadedFile;
    static bool hasLoadedFolder;

public:
    static sf::Texture& getFile();
    static sf::Texture& getFolder();
};


#endif //CS8FINALPROJECT_TEXTURES_H
