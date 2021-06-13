#include "actor.h"


Actor::Actor(sf::String const& texture_file_name, float x_velocity, float y_velocity, bool should_tick) {

//    texture_->loadFromFile(base_resources_path + texture_file_name);
//    sprite_->setTexture(*texture_);

    this->x_velocity = x_velocity;
    this->y_velocity = y_velocity;

    this->should_tick = should_tick;

}

void Actor::Move() {
    shape.move(x_velocity * delta_time, y_velocity * delta_time);
}

