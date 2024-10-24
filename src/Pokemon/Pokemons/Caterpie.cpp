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

        void Caterpie::bugBite(Pokemon* target)
        {
            cout<<"You have been attacked with Bug Bite!"<<endl;
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

        void Caterpie::Attack(Pokemon* target)
        {
            bugBite(target);
        }
    }
}
