#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Pokemon/grass.hpp"
#include "../../include/Pokemon/Pokemon.hpp"
#include <iostream>
using namespace std;

WildEncounterManager::WildEncounterManager()
{
    srand(time(0));
}

Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass &grass)
{
    int randomIndex = rand() % grass.pokemonList.size();
    return grass.pokemonList[randomIndex];
}