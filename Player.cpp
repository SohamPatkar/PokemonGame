#include "Pokemon.hpp"
#include "Player.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include <iostream>
#include <string>
using namespace std;

Player::Player()
{
    _pname = "Trainer";
    _pokemonChosen = Pokemon(100,"Pikachu",PokemonType::Electric); 
}

Player::Player(string pname, Pokemon chosenPokemon)
{
    _pname = pname;
    _pokemonChosen = chosenPokemon;
}

void Player::choosePokemon(int choice)
{
    switch(choice)
    {
        case 1:
        _pokemonChosen = Pokemon(100,"Bulbasaur", PokemonType::Grass);
        cout<<"Well Bulbasaur, a nice choice"<<endl;
        Utility::waitForEnter();
        break;

        case 2:
        _pokemonChosen = Pokemon(100,"Charmander", PokemonType::Fire);
        cout<<"Well Charmander, a fiery choice"<<endl;
        Utility::waitForEnter();
        break;

        case 3:
        _pokemonChosen = Pokemon(100,"Squirtle", PokemonType::Water);
        cout<<"Well Squirtle, a nice choice"<<endl;
        Utility::waitForEnter();
        break;

        default:
        cout<<"Well I guess you need help with choosing pokemon, okay I will help you..."<<endl;
        _pokemonChosen = Pokemon(100,"Pikachu", PokemonType::Electric);
        cout<<"Here it is Pikachu, as you didnt like the choices..."<<endl;
        Utility::waitForEnter();
        break;
    }
}