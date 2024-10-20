#include"../Pokemon/grass.hpp"
#include <iostream>
using namespace std;
using namespace N_Pokemon;

class Player;

namespace N_Main
{
    class Game
    {
        private:
        Grass forestGrass;
        
        public:
        bool keepPlaying;
        int playerChoice;
        
        Game();
        void gameLoop(Player &player);
    };
}
