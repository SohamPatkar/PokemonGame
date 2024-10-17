#include <iostream>
#include <string>
using namespace std;

enum class PokemonType;

class Pokemon
{
    public:
    int health, maxhealth;
    string name;
    PokemonType _typeofPokemon;

    bool isFainted();
    void TakeDamage(int damage);
    void Attack(Pokemon &pokemonattacked);
    
    Pokemon();
    Pokemon(int _health, string _name, PokemonType _type);
};