#include"../../include/Character/Player/Player.hpp"
#include <iostream>
#include <string>
using namespace std;

namespace N_Battle
{
    struct BattleState
    {
        Pokemon *playerPokemon;
        Pokemon *wildPokemon;

        bool playerTurn;
        bool battleOngoing;
    };
}
