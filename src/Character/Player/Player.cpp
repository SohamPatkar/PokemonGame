#include "../../../include/Character/Player/Player.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Pokemon/PokemonChoice.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace N_Utility;

namespace N_Player
{
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
        switch((PokemonChoice)choice)
        {
            case PokemonChoice::Bulbasaur:
            _pokemonChosen = Pokemon(100,"Bulbasaur", PokemonType::Grass);
            cout<<"Well Bulbasaur, a nice choice"<<endl;
            Utility::waitForEnter();
            break;

            case PokemonChoice::Charmander:
            _pokemonChosen = Pokemon(100,"Charmander", PokemonType::Fire);
            cout<<"Well Charmander, a fiery choice"<<endl;
            Utility::waitForEnter();
            break;

            case PokemonChoice::Squirtle:
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
}



