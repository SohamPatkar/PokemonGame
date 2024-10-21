#pragma once
#include"../Pokemon/Pokemon.hpp"
#include <iostream>
#include <string>
using namespace std;

namespace N_Battle
{
    struct BattleState
    {
        N_Pokemon::Pokemon *playerPokemon;
        N_Pokemon::Pokemon *wildPokemon;

        bool playerTurn;
        bool battleOngoing;
    };
}
