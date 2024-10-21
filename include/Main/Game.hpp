#pragma once
#include"../Pokemon/grass.hpp"
#include"../Character/Player/Player.hpp"
#include <iostream>
using namespace std;
using namespace N_Pokemon;

namespace N_Main
{
    class Game
    {
        private:
        N_Pokemon::Grass forestGrass;
        
        public:
        bool keepPlaying;
        int playerChoice;
        
        Game();
        void gameLoop(N_Player::Player &player);
    };
}
