#include "../../../include/Character/Player/Player.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/PokemonChoice.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace N_Utility;

namespace N_Player
{
    Player::Player()
    {
        _pname = "Trainer";
        _pokemonChosen = N_Pokemon::Pokemon(100,"Pikachu",N_Pokemon::PokemonType::Electric); 
    }

    Player::Player(string pname, N_Pokemon::Pokemon* chosenPokemon)
    {
        _pname = pname;
        _pokemonChosen = *chosenPokemon;
    }

    void Player::choosePokemon(int choice)
    {
        switch((N_Pokemon::PokemonChoice)choice)
        {
            case N_Pokemon::PokemonChoice::Bulbasaur:
            _pokemonChosen = N_Pokemon::Pokemon(100,"Bulbasaur", N_Pokemon::PokemonType::Grass);
            cout<<"Well Bulbasaur, a nice choice"<<endl;
            Utility::waitForEnter();
            break;

            case N_Pokemon::PokemonChoice::Charmander:
            _pokemonChosen = N_Pokemon::Pokemon(100,"Charmander", N_Pokemon::PokemonType::Fire);
            cout<<"Well Charmander, a fiery choice"<<endl;
            Utility::waitForEnter();
            break;

            case N_Pokemon::PokemonChoice::Squirtle:
            _pokemonChosen = N_Pokemon::Pokemon(100,"Squirtle", N_Pokemon::PokemonType::Water);
            cout<<"Well Squirtle, a nice choice"<<endl;
            Utility::waitForEnter();
            break;

            default:
            cout<<"Well I guess you need help with choosing pokemon, okay I will help you..."<<endl;
            _pokemonChosen = N_Pokemon::Pokemon(100,"Pikachu", N_Pokemon::PokemonType::Electric);
            cout<<"Here it is Pikachu, as you didnt like the choices..."<<endl;
            Utility::waitForEnter();
            break;
        }
    } 
}



