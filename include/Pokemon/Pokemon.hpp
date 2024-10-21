#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace N_Pokemon
{
    enum class PokemonType;

    class Pokemon
    {
        public:
        int health;
        int maxhealth = 100;
        int attackPower = 25;
        string name;
        PokemonType _typeofPokemon;

        void heal();
        bool isFainted();
        void TakeDamage(int damage);
        void Attack(Pokemon &pokemonattacked);
        
        Pokemon();
        Pokemon(int _health, string _name, PokemonType _type);
    };
}

