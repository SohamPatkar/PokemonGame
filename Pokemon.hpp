#include<iostream>
#include<string>
#include"PokemonType.hpp"
using namespace std;

class Pokemon
{
    public:
    string health;
    string name;
    PokemonType _typeofPokemon;

    static void Attack();

    Pokemon();
    Pokemon(int _health, string _name, PokemonType _type);
};