#include"../../../include/Pokemon/Pokemons/Zubat.hpp"
#include"../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Zubat::Zubat()
        {
            Pokemon(100, "Zubat", PokemonType::Poison);
        }

        void Zubat::superSonic(Pokemon* target)
        {
            cout<<"You have been attacked with Super Sonic!"<<endl;
            target->TakeDamage(20);
        }

        void Zubat::Attack(Pokemon* target)
        {
            superSonic(target);
        }
    }
}