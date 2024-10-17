#include "grass.hpp"
#include <iostream>
using namespace std;

class Pokemon;

class WildEncounterManager
{
    public:

    WildEncounterManager();

    Pokemon getRandomPokemonFromGrass(const Grass &grass); 
};