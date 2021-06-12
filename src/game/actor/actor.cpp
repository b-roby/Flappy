#include "actor.h"


Actor::Actor(sf::String const& texture_file_name, float x_velocity, float y_velocity) {

//    texture_->loadFromFile(base_resources_path + texture_file_name);
//    sprite_->setTexture(*texture_);

    this->x_velocity = x_velocity;
    this->y_velocity = y_velocity;

}

void Actor::Move() {
    sprite_->move(x_velocity, y_velocity);
}

void Actor::Tick() {
    Move();
}
