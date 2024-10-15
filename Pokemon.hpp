#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
    public:
    int health;
    string name;
    PokemonType _typeofPokemon;

    static void Attack();
    
    Pokemon();
    Pokemon(int _health, string _name, PokemonType _type);
};