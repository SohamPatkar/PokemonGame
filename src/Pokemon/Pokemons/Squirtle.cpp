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

            if(target->isFainted())
            {
                cout<<"Your oppenent has fainted!"<<endl;
            }
            else
            {
                cout<<"Your oppenent has "<<target->getHealth()<<" HP left"<<endl; 
            }
        }

        void Squirtle::Attack(Pokemon* target)
        {
            waterGun(target);
        }
    }
}
