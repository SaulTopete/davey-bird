//
// Created by Saul Topete on 11/28/21.
//

#include "Game.h"


Game::Game(){

}

void Game::run() {
    bool hit, finished;
    bool pressedEnter = false;
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Davey Bird");
    window.setFramerateLimit(60);
    sf::RenderStates states;

    TypingBackground typingBackground(window.getPosition());
    Typing typing(window.getPosition());
    Pipes pipes(window.getSize());
    Bird bird(window.getSize());
    DropdownMenu dropdownMenu;
    FileTree fileTree;

    while (window.isOpen())
    {
        hit = hitDetection(bird, pipes);
        finished = finish(bird, pipes);

        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            dropdownMenu.addEventHandler(window, event);
            if(!hit)
                bird.addEventHandler(window, event);
            if(!pressedEnter)
                typing.addEventHandler(window, event);
            if(finished || hit)
                fileTree.addEventHandler(window, event);
        }

        pipes.draw(window, states);
        dropdownMenu.draw(window, states);
        bird.draw(window, states);

        if(!pressedEnter)
        {
            typingBackground.draw(window, states);
            window.draw(typing);
            typing.update();
            pressedEnter = Typing::checkForEnter();
        }

        if(!hit && !finished && pressedEnter)
        {
            bird.updateMovement(window.getSize());
        }

        if(finished){
            EndScreen endScreen(window.getPosition(), finished, typing.getWord());
            endScreen.draw(window, states);
            fileTree.draw(window, states);
        }
        if(hit){
            EndScreen endScreen(window.getPosition(), finished, typing.getWord());
            endScreen.draw(window, states);
            fileTree.draw(window, states);
        }

        window.display();
        window.clear(sf::Color(135, 206, 235));
    }
}

bool Game::hitDetection(const Bird& bird, const Pipes& pipes) {
    if(pipes.getPipe1Top().getGlobalBounds().intersects(
            bird.getBird().getGlobalBounds())){
        return true;
    }
    if(pipes.getPipe1Bot().getGlobalBounds().intersects(
            bird.getBird().getGlobalBounds())){
        return true;
    }
    if(pipes.getPipe2Top().getGlobalBounds().intersects(
            bird.getBird().getGlobalBounds())){
        return true;
    }
    if(pipes.getPipe2Bot().getGlobalBounds().intersects(
            bird.getBird().getGlobalBounds())){
        return true;
    }
    if(pipes.getPipe3Top().getGlobalBounds().intersects(
            bird.getBird().getGlobalBounds())){
        return true;
    }
    if(pipes.getPipe3Bot().getGlobalBounds().intersects(
            bird.getBird().getGlobalBounds())){
        return true;
    }
    if(pipes.getPipe4Top().getGlobalBounds().intersects(
            bird.getBird().getGlobalBounds())){
        return true;
    }
    if(pipes.getPipe4Bot().getGlobalBounds().intersects(
            bird.getBird().getGlobalBounds())){
        return true;
    }
    if(pipes.getPipe5Top().getGlobalBounds().intersects(
            bird.getBird().getGlobalBounds())){
        return true;
    }
    if(pipes.getPipe5Bot().getGlobalBounds().intersects(
            bird.getBird().getGlobalBounds())){
        return true;
    }

    return false;
}

bool Game::finish(const Bird &bird, const Pipes &pipes) {
    if(bird.getBird().getPosition().x > pipes.getEndLine().getPosition().x){
        return true;
    }
    return false;
}

bool Game::retry(const EndScreen& endScreen, const sf::RenderTarget &window, sf::Event event) {
    if(MouseEvents<sf::Text>::mouseClicked((sf::RenderWindow &) window, event)){
        if(endScreen.getRetry().getGlobalBounds().contains
                (MouseEvents<sf::Text>::get_mouse_pos((sf::RenderWindow &) window, event).x, MouseEvents<sf::Text>::get_mouse_pos(
                        (sf::RenderWindow &) window, event).y)){
            return true;
        }
    }
    return false;
}
