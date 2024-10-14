#include "Pokemon.hpp"
#include <iostream>
#include <string>
using namespace std;

Pokemon::Pokemon()
{
    name = "Pikachu";
    _typeofPokemon = PokemonType::Electric;
    health = 10;
}

void Pokemon::Attack()
{
    cout <<"Attacks!";
}

Pokemon::Pokemon(int _health, string _name, PokemonType _type)
{
    health = _health;
    name = _name;
    _typeofPokemon = _type;
}