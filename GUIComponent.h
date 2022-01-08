//
// Created by Saul Topete on 12/10/21.
//

#ifndef CS8FINALPROJECT_GUICOMPONENT_H
#define CS8FINALPROJECT_GUICOMPONENT_H
#include "EventHandler.h"
#include "Snapshot.h"
#include "SnapshotInterface.h"
#include "States.h"
#include <SFML/Graphics.hpp>

class GUIComponent : public EventHandler, public Snapshot, public SnapshotInterface, public States,
                     public sf::Drawable, public sf::Transformable{

public:
    GUIComponent(){}

    //from the sf::Drawable class
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const = 0;

// from EventHandler
    virtual void addEventHandler(sf::RenderWindow& window, sf::Event event) = 0;
    virtual void update() = 0;

//from SnapshotInterface
    virtual Snapshot& getSnapshot() = 0;
    virtual void applySnapshot(const Snapshot& snapshot) = 0;


private:

};
#endif //CS8FINALPROJECT_GUICOMPONENT_H
