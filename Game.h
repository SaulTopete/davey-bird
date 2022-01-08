//
// Created by Saul Topete on 11/28/21.
//

#ifndef CS8FINALPROJECT_GAME_H
#define CS8FINALPROJECT_GAME_H
#include "MouseEvents.h"
#include "Bird.h"
#include "Pipes.h"
#include "DropdownMenu.h"
#include "Typing.h"
#include "TypingBackground.h"
#include "EndScreen.h"
#include "FileTree.h"

class Game {
public:
    Game();
    void run();
private:
    static bool hitDetection(const Bird& bird, const Pipes& pipes);
    static bool finish(const Bird& bird, const Pipes& pipes);
    bool retry(const EndScreen& endScreen, const sf::RenderTarget &window, sf::Event event);
};


#endif //CS8FINALPROJECT_GAME_H
