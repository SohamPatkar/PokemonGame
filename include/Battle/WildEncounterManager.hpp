#pragma once
#include"../Pokemon/Pokemon.hpp"
#include"../Pokemon/grass.hpp"
#include <iostream>
using namespace std;

namespace N_Battle
{
    class WildEncounterManager
    {
        public:

        WildEncounterManager();

        N_Pokemon::Pokemon getRandomPokemonFromGrass(const N_Pokemon::Grass &grass); 
    };
}
