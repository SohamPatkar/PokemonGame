#include <iostream>
#include <string>
using namespace std;

enum class PokemonType;

class Pokemon
{
    public:
    int health;
    string name;
    PokemonType _typeofPokemon;

    void Attack();
    
    Pokemon();
    Pokemon(int _health, string _name, PokemonType _type);
};