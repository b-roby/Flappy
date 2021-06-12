#include "game.h"

#include <stdexcept>

Game::Game() {

    this->video_mode = VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT);
    this->window_ = new RenderWindow( video_mode, WINDOW_TITLE, Style::Titlebar | Style::Close );
    this->renderer_ = new Renderer(window_);

}

void Game::Start() {

    if(window_ == nullptr) throw std::runtime_error("Could not initialize window!");


    Run();

}

void Game::Run() {

    while (IsWindowOpen()) {
        while (ShouldPollEvents())
            PollEvents();

        renderer_->Render();
    }

}

void Game::Stop() {
    window_->close();
    delete window_;
}

void Game::PollEvents() {
    switch (window_event.type) {
        case Event::Closed:
            Stop();
            break;
        case Event::KeyPressed:
            int key = window_event.key.code;
            if(key == Keyboard::Key::Escape)
                Stop();
            break;
    }
}


