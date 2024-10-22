#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Pokemon/grass.hpp"
#include "../../include/Pokemon/Pokemon.hpp"
#include <iostream>
using namespace std;

namespace N_Battle
{
    WildEncounterManager::WildEncounterManager()
    {
        srand(time(0));
    }

    N_Pokemon::Pokemon WildEncounterManager::getRandomPokemonFromGrass(const N_Pokemon::Grass &grass)
    {
        int randomIndex = rand() % grass.pokemonList.size();
        return grass.pokemonList[randomIndex];
    }
}
