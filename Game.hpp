#include "Grass.hpp"
#include <iostream>
using namespace std;

class Player;
class Pokemon;

class Game
{
    private:
    Grass forestGrass;
    
    public:
    bool keepPlaying;
    int playerChoice;
    
    Game();
    void gameLoop(Player &player);
    void battle(Pokemon &playerPokemon, Pokemon &wildPokemon);
};