//
// Created by Saul Topete on 12/9/21.
//

#include "Pipes.h"

void Pipes::createPipes(sf::Vector2u windowY) {
    pipe1bot.setSize(sf::Vector2f(60, 250));
    pipe1bot.setPosition(400, windowY.y - pipe1bot.getSize().y);
    pipe1bot.setFillColor(sf::Color::Green);
    pipe1bot.setOutlineThickness(7);
    pipe1bot.setOutlineColor(sf::Color::Black);

    pipe1top.setSize(sf::Vector2f(60, 550));
    pipe1top.setPosition(400, 0);
    pipe1top.setFillColor(sf::Color::Green);
    pipe1top.setOutlineThickness(7);
    pipe1top.setOutlineColor(sf::Color::Black);

    pipe2bot.setSize(sf::Vector2f(60, 800));
    pipe2bot.setPosition(700, windowY.y - pipe1bot.getSize().y - 100);
    pipe2bot.setFillColor(sf::Color::Green);
    pipe2bot.setOutlineThickness(7);
    pipe2bot.setOutlineColor(sf::Color::Black);

    pipe2top.setSize(sf::Vector2f(60, 400));
    pipe2top.setPosition(700, 0);
    pipe2top.setFillColor(sf::Color::Green);
    pipe2top.setOutlineThickness(7);
    pipe2top.setOutlineColor(sf::Color::Black);

    pipe3bot.setSize(sf::Vector2f(60, 400));
    pipe3bot.setPosition(1000, windowY.y - pipe1bot.getSize().y + 75);
    pipe3bot.setFillColor(sf::Color::Green);
    pipe3bot.setOutlineThickness(7);
    pipe3bot.setOutlineColor(sf::Color::Black);

    pipe3top.setSize(sf::Vector2f(60, 600));
    pipe3top.setPosition(1000, 0);
    pipe3top.setFillColor(sf::Color::Green);
    pipe3top.setOutlineThickness(7);
    pipe3top.setOutlineColor(sf::Color::Black);

    pipe4Bot.setSize(sf::Vector2f(60, 400));
    pipe4Bot.setPosition(1300, windowY.y - pipe1bot.getSize().y - 100);
    pipe4Bot.setFillColor(sf::Color::Green);
    pipe4Bot.setOutlineThickness(7);
    pipe4Bot.setOutlineColor(sf::Color::Black);

    pipe4top.setSize(sf::Vector2f(60, 400));
    pipe4top.setPosition(1300, 0);
    pipe4top.setFillColor(sf::Color::Green);
    pipe4top.setOutlineThickness(7);
    pipe4top.setOutlineColor(sf::Color::Black);

    pipe5bot.setSize(sf::Vector2f(60, 600));
    pipe5bot.setPosition(1600, windowY.y - pipe1bot.getSize().y - 200);
    pipe5bot.setFillColor(sf::Color::Green);
    pipe5bot.setOutlineThickness(7);
    pipe5bot.setOutlineColor(sf::Color::Black);

    pipe5top.setSize(sf::Vector2f(60, 350));
    pipe5top.setPosition(1600, 0);
    pipe5top.setFillColor(sf::Color::Green);
    pipe5top.setOutlineThickness(7);
    pipe5top.setOutlineColor(sf::Color::Black);

    endLine.setSize(sf::Vector2f(2, windowY.y));
    endLine.setPosition(pipe5top.getPosition().x + 150, 0);
    endLine.setFillColor(sf::Color::Red);
    endLine.setOutlineThickness(1);
    endLine.setOutlineColor(sf::Color::Black);

    endText.setString("END");
    endText.setFont(Fonts::getFont());
    endText.setCharacterSize(50);
    endText.setFillColor(sf::Color::White);
    endText.setOutlineColor(sf::Color::Black);
    endText.setOutlineThickness(3);
    endText.setPosition(endLine.getPosition().x + endText.getCharacterSize() + 15, windowY.y/2);
    endText.rotate(90);
}

Pipes::Pipes(sf::Vector2u windowY) {
    createPipes(windowY);
}

void Pipes::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(pipe1bot);
    window.draw(pipe2bot);
    window.draw(pipe3bot);
    window.draw(pipe4Bot);
    window.draw(pipe5bot);
    window.draw(pipe1top);
    window.draw(pipe2top);
    window.draw(pipe3top);
    window.draw(pipe4top);
    window.draw(pipe5top);
    window.draw(endLine);
    window.draw(endText);
}

const sf::RectangleShape &Pipes::getPipe1Top() const {
    return pipe1top;
}

const sf::RectangleShape &Pipes::getPipe2Top() const {
    return pipe2top;
}

const sf::RectangleShape &Pipes::getPipe3Top() const {
    return pipe3top;
}

const sf::RectangleShape &Pipes::getPipe4Top() const {
    return pipe4top;
}

const sf::RectangleShape &Pipes::getPipe5Top() const {
    return pipe5top;
}

const sf::RectangleShape &Pipes::getPipe1Bot() const {
    return pipe1bot;
}

const sf::RectangleShape &Pipes::getPipe2Bot() const {
    return pipe2bot;
}

const sf::RectangleShape &Pipes::getPipe3Bot() const {
    return pipe3bot;
}

const sf::RectangleShape &Pipes::getPipe4Bot() const {
    return pipe4Bot;
}

const sf::RectangleShape &Pipes::getPipe5Bot() const {
    return pipe5bot;
}

const sf::RectangleShape &Pipes::getEndLine() const {
    return endLine;
}
