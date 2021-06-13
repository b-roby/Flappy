#include <iostream>
#include "player.h"

Player::Player(sf::String const& textureFileName, float x_velocity, float y_velocity, bool should_tick)
            : Actor(textureFileName, x_velocity, y_velocity, should_tick) {
    shape = sf::RectangleShape(sf::Vector2f(50, 50));
}

void Player::Tick() {
    delta_time = clock.restart().asSeconds();
    Move();
}
