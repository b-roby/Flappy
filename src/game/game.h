#ifndef FLAPPY_GAME_H
#define FLAPPY_GAME_H

#include <vector>

#include "game_commons.h"
#include "actor/actor.h"
#include "player/player.h"

using namespace sf;

class Game {

private:

    VideoMode video_mode;
    RenderWindow* window_;
    Event window_event;
    //////////////////////
    Player* player;
    std::vector<Actor*> actors = std::vector<Actor*>();
    //////////////////////
    void Run();
    void PollEvents();
    void Update();
    void Render();
    //////////////////////
    bool IsWindowOpen() const { return window_->isOpen(); }
    bool ShouldPollEvents() { return window_->pollEvent(window_event); }
    //////////////////////

public:

    Game();

    void Start();
    void Stop();

    RenderWindow* window() { return window_; }

};

#endif
