#include"../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include"../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Pidgey::Pidgey()
        {
            Pokemon(100, "Pidgey", PokemonType::Normal);
        }

        void Pidgey::wingAttack(Pokemon* target)
        {
            cout<<"You have been attacked with Wing Attack!"<<endl;
            target->TakeDamage(20);
        }

        void Pidgey::Attack(Pokemon* target)
        {
            wingAttack(target);
        }
    }
}