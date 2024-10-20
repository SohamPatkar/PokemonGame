#include"../../Pokemon/Pokemon.hpp"
#include <iostream>
#include <string>
using namespace std;

namespace N_Player
{
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
}


