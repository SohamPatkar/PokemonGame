#include"../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include"../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Bulbasaur::Bulbasaur()
        {
            Pokemon(100, "Bulbasaur", PokemonType::Grass);
        }

        void Bulbasaur::vineWhip(Pokemon* target)
        {
            cout<<"You have been attacked with Flame Burst!"<<endl;
            target->TakeDamage(20);

            if(target->isFainted())
            {
                cout<<"Your oppenent has fainted!"<<endl;
            }
            else
            {
                cout<<"Your oppenent has "<<target->getHealth()<<" HP left"<<endl; 
            }
        }

        void Bulbasaur::Attack(Pokemon* target)
        {
            vineWhip(target);
        }
    }
}
