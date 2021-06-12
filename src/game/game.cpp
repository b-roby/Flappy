#include "game.h"

#include <stdexcept>

Game::Game() {

    this->video_mode = VideoMode( WINDOW_WIDTH, WINDOW_HEIGHT );
    this->window_ = new RenderWindow( video_mode, WINDOW_TITLE, Style::Titlebar | Style::Close );

    player = new Player("player.png", 2.5f, 0.f);
    actors.push_back(player);

}

void Game::Start() {

    if(window_ == nullptr) throw std::runtime_error("Could not initialize window!");


    Run();

}

void Game::Run() {

    while (IsWindowOpen()) {
        while (ShouldPollEvents())
            PollEvents();

        this->Update();
        this->Render();

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

// update before rendering
void Game::Update() {

    for(auto actor : actors){

    }

}

void Game::Render() {

    window_->display();

    for(auto actor : actors){
//        window_->draw(actor->sprite());
        window_->draw(player->shape);
    }

}


