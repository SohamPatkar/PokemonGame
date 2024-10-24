#include "../../../include/Character/Player/Player.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/PokemonChoice.hpp"
#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace N_Utility;
using namespace N_Pokemon;

namespace N_Player
{
    Player::Player()
    {
        _pname = "Trainer";
        _pokemonChosen = new N_Pokemons::Pikachu(); 
    }

    Player::Player(string pname)
    {
        _pname = pname;
    }

    void Player::choosePokemon(int choice)
    {
        switch((N_Pokemon::PokemonChoice)choice)
        {
            case N_Pokemon::PokemonChoice::Bulbasaur:
            _pokemonChosen = new N_Pokemons::Bulbasaur();
            cout<<"Well Bulbasaur, a nice choice"<<endl;
            Utility::waitForEnter();
            break;

            case N_Pokemon::PokemonChoice::Charmander:
            _pokemonChosen = new N_Pokemons::Charmander();
            cout<<"Well Charmander, a fiery choice"<<endl;
            Utility::waitForEnter();
            break;

            case N_Pokemon::PokemonChoice::Squirtle:
            _pokemonChosen = new N_Pokemons::Squirtle();
            cout<<"Well Squirtle, a nice choice"<<endl;
            Utility::waitForEnter();
            break;

            default:
            cout<<"Well I guess you need help with choosing pokemon, okay I will help you..."<<endl;
            _pokemonChosen = new N_Pokemons::Pikachu();
            cout<<"Here it is Pikachu, as you didnt like the choices..."<<endl;
            Utility::waitForEnter();
            break;
        }
    } 
}



