#include "Player.hpp"
#pragma once

#ifndef GAME_HPP
#define GAME_HPP
#include "Captain.hpp"
#endif
namespace coup {

    class Captain : public coup::Player {
    private:
        Game game;
        string _name;
    public:
        Captain(Game g, const string &n);

        void steal(const Player &p);

        void block(const Player &p);


    };
}