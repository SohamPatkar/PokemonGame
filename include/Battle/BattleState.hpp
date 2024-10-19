#include <iostream>
#include <string>
using namespace std;

class Pokemon;

struct BattleState
{
    Pokemon *playerPokemon;
    Pokemon *wildPokemon;

    bool playerTurn;
    bool battleOngoing;
};