#ifndef FLAPPY_ACTOR_H
#define FLAPPY_ACTOR_H

#include "../game_commons.h"

class Actor {

protected:

    sf::String base_resources_path = "resources/";
    sf::Texture* texture_;
    sf::Sprite* sprite_;
    sf::Clock clock;

    float x_velocity;
    float y_velocity;
    float delta_time;

private:

    bool should_tick;

public:

    sf::RectangleShape shape = sf::RectangleShape(sf::Vector2f(50.f, 50.f));

    Actor(sf::String const& texture_file_name, float x_velocity = 10.f, float y_velocity = 10.f, bool should_tick = false);

    // similar to update
    virtual void Tick() = 0;

    void Move();

    sf::Vector2f position() { return shape.getPosition(); };

    sf::Texture* texture() { return texture_; }
    sf::Sprite* sprite() { return sprite_; }

    bool should_always_tick() const { return should_tick; }

};


#endif
