#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Pokemon.hpp"
#include "Utility.hpp"
#include <iostream>
#include <string>
using namespace std;

class Player
{
    public:
    static string _pname;
    static Pokemon _pokemonChosen;
    static int choice;

    static void choosePokemon(int choice);

    Player();

    Player(string pname, Pokemon chosenPokemon);
};