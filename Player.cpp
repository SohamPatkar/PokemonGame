#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Pokemon.hpp"
#include "Utility.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>
using namespace std;

Player::Player()
{
    Player::_pname = "Trainer";
    Player::_pokemonChosen; 
}

Player::Player(string pname, Pokemon chosenPokemon)
{
    Player::_pname = pname;
    Player::_pokemonChosen = chosenPokemon;
}

void Player::choosePokemon(int choice)
{
    switch(choice)
    {
        case 1:
        Player::_pokemonChosen = Pokemon(100,"Bulbasaur", PokemonType::Grass);
        cout<<"Well Bulbasaur, a nice choice"<<endl;
        Utility::waitForEnter();
        break;

        case 2:
        Player::_pokemonChosen = Pokemon(100,"Charmander", PokemonType::Fire);
        cout<<"Well Charmander, a fiery choice"<<endl;
        Utility::waitForEnter();
        break;

        case 3:
        Player::_pokemonChosen = Pokemon(100,"Squirtle", PokemonType::Water);
        cout<<"Well Squirtle, a nice choice"<<endl;
        Utility::waitForEnter();
        break;

        default:
        cout<<"Well I guess you need help with choosing pokemon, okay I will help you..."<<endl;
        Player::_pokemonChosen = Pokemon(100,"Pikachu", PokemonType::Electric);
        cout<<"Here it is Pikachu, as you didnt like the choices..."<<endl;
        Utility::waitForEnter();
        break;
    }
}