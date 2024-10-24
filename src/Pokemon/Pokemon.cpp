#include"../../include/Pokemon/Pokemon.hpp"
#include"../../include/Pokemon/PokemonType.hpp"
#include <iostream>
#include <string>
using namespace std;

namespace N_Pokemon
{
    Pokemon::Pokemon()
    {
        name = "Pikachu";
        _typeofPokemon = PokemonType::Electric;
        health = 100;
    }

    void Pokemon::heal()
    {
        health = maxhealth;
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
        }
    }

    int Pokemon::getHealth()
    {
        return health;
    }

    void Pokemon::Attack(Pokemon* target)
    {
        int damage = attackPower;
        cout<<name<< " attacks " << target->name << " for " << damage << " damage!\\n";
        target->TakeDamage(damage);
    }

    Pokemon::Pokemon(int _health, string _name, PokemonType _type)
    {
        health = _health;
        name = _name;
        _typeofPokemon = _type;
    }
}

