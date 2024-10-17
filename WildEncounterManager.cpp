#include "WildEncounterManager.hpp"
#include "Pokemon.hpp"
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