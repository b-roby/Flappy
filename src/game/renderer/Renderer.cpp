#include "Renderer.h"

Renderer::Renderer(sf::RenderWindow* window) {
    this->window = window;
}

void Renderer::Render() {

    window->display();

}
