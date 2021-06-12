#ifndef FLAPPY_RENDERER_H
#define FLAPPY_RENDERER_H

#include "../game_commons.h"


class Renderer {

private:

    sf::RenderWindow* window;

public:

    Renderer(sf::RenderWindow* window);

    void Render();

};


#endif
