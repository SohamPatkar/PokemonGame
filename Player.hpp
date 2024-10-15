#include "Pokemon.hpp"
#include <iostream>
#include <string>
using namespace std;

class Pokemon;

class Player
{
    public:
    string _pname;
    Pokemon _pokemonChosen;
    int choice;

    void choosePokemon(int choice);

    Player();

    Player(string pname, Pokemon chosenPokemon);
};