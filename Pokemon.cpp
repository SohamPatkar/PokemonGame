#include"Pokemon.hpp"
#include"PokemonType.hpp"
#include <iostream>
#include <string>
using namespace std;

Pokemon::Pokemon()
{
    name = "Pikachu";
    _typeofPokemon = PokemonType::Electric;
    health = 10;
}

bool Pokemon::isFainted()
{
    return health <= 0;
}

void Pokemon::TakeDamage(int damage)
{
    health -= damage;
    if(health <= 0)
    {
        health = 0;
        isFainted();
    }
}

void Pokemon::Attack(Pokemon &target)
{
    int damage = 10;
    cout<<name<< " attacks " << target.name << " for " << damage << " damage!\\n";
    target.TakeDamage(damage);
}

Pokemon::Pokemon(int _health, string _name, PokemonType _type)
{
    health = _health;
    name = _name;
    _typeofPokemon = _type;
}