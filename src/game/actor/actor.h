#ifndef FLAPPY_ACTOR_H
#define FLAPPY_ACTOR_H

#include "../game_commons.h"

class Actor {

protected:

    sf::String base_resources_path = "resources/";
    sf::Texture* texture_;
    sf::Sprite* sprite_;

    float x_velocity;
    float y_velocity;

public:

    Actor(sf::String const& texture_file_name, float x_velocity, float y_velocity);

    // similar to update
    virtual void Tick();

    void Move();

    sf::Texture* texture() { return texture_; }
    sf::Sprite* sprite() { return sprite_; }

};


#endif
