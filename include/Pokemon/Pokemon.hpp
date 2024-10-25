#pragma once
#include"../../include/Pokemon/Move.hpp"
#include <iostream>
#include <string>
#include <vector>
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
        PokemonType _typeofPokemon;
        vector<Move> moveList;

        
        string name;
        void heal();
        bool isFainted();
        void TakeDamage(int damage);
        virtual void Attack(Move selectedMove, Pokemon *pokemonattacked);
        void selectAndUseMove(Pokemon* target);
        void wildPokemonAttack(Pokemon *target);

        int getHealth();
        
        Pokemon();
        Pokemon(int _health, string _name, PokemonType _type, vector<Move> moveList);

        protected:
        
        int selectMove();
        void useMove(Move selectedMove, Pokemon* target);
        void printAvailableMoves();
    };
}

