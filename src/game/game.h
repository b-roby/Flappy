#ifndef FLAPPY_GAME_H
#define FLAPPY_GAME_H

#include "game_commons.h"
#include "renderer/Renderer.h"

using namespace sf;

class Game {

private:

    VideoMode video_mode;
    RenderWindow* window_;
    Event window_event;
    //////////////////////
    Renderer* renderer_;
    //////////////////////
    void Run();
    void PollEvents();
    bool IsWindowOpen() const { return window_->isOpen(); }
    bool ShouldPollEvents() { return window_->pollEvent(window_event); }
    //////////////////////

public:

    Game();

    void Start();
    void Stop();

    RenderWindow* window() { return window_; }
    Renderer* renderer() { return renderer_; }

};

#endif
