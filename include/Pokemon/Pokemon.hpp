#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace N_Pokemon
{
    enum class PokemonType;

    class Pokemon
    {
        protected:
        int health;
        int maxhealth = 100;
        int attackPower = 25;
        PokemonType _typeofPokemon;

        public:
        string name;
        void heal();
        bool isFainted();
        void TakeDamage(int damage);
        virtual void Attack(Pokemon *pokemonattacked);
        
        Pokemon();
        Pokemon(int _health, string _name, PokemonType _type);
    };
}

