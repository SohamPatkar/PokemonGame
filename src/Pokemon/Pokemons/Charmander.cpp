#include"../../../include/Pokemon/Pokemons/Charmander.hpp"
#include"../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Charmander::Charmander()
        {
            Pokemon(100, "Charmander", PokemonType::Fire);
        }

        void Charmander::flameBurst(Pokemon* target)
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

        void Charmander::Attack(Pokemon* target)
        {
            flameBurst(target);
        }
    }
}
