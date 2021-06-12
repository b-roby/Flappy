#include "player.h"

Player::Player(sf::String const& textureFileName, float x_velocity, float y_velocity)
            : Actor(textureFileName, x_velocity, y_velocity) {
    shape = sf::RectangleShape(sf::Vector2f(50, 50));
}

void Player::Tick() {
//    Move();
    shape.move(x_velocity, y_velocity);
}
