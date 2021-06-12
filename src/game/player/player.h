#ifndef FLAPPY_PLAYER_H
#define FLAPPY_PLAYER_H

#include "../actor/actor.h"

class Player : public Actor {

public:

    Player(sf::String const& textureFileName, float x_velocity, float y_velocity);

    void Tick() override;

    sf::RectangleShape shape;
};


#endif
