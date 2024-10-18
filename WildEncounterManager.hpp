#include <iostream>
using namespace std;

class Pokemon;
struct Grass;

class WildEncounterManager
{
    public:

    WildEncounterManager();

    Pokemon getRandomPokemonFromGrass(const Grass &grass); 
};