#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

namespace N_Pokemon
{
    class Pokemon;

    struct Grass
    {
        string environmenType;
        vector<Pokemon> pokemonList;
        int encounterRate;
    };
}



