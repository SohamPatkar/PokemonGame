#include <iostream>
#include <string>
using namespace std;

class Player
{
    public:
    string _pname;
    Pokemon _pokemonChosen;
    int choice;

    static void choosePokemon(int choice);

    Player();

    Player(string pname, Pokemon chosenPokemon);
};