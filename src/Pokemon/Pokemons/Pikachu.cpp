#include"../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include"../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Pikachu::Pikachu()
        {
            Pokemon(100, "Pikachu", PokemonType::Electric);
        }

        void Pikachu::thunderBolt(Pokemon* target)
        {
            cout<<"You have been attacked with Thunderbolt!"<<endl;
            target->TakeDamage(20);
        }

        void Pikachu::Attack(Pokemon* target)
        {
            thunderBolt(target);
        }
    }
}
