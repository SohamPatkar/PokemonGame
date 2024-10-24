#include"../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include"../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Squirtle::Squirtle()
        {
            Pokemon(100, "Squirtle", PokemonType::Water);
        }

        void Squirtle::waterGun(Pokemon* target)
        {
            cout<<"You have been attacked with Water Gun!"<<endl;
            target->TakeDamage(20);
        }

        void Squirtle::Attack(Pokemon* target)
        {
            waterGun(target);
        }
    }
}
