#include"../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include"../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Caterpie::Caterpie()
        {
            Pokemon(100, "Caterpie", PokemonType::Grass);
        }

        void Caterpie::bugBite(Pokemon &target)
        {
            cout<<"You have been attacked with Bug Bite!"<<endl;
            target.TakeDamage(20);
        }
    }
}
