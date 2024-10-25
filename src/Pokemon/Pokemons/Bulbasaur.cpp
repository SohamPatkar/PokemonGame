#include"../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include"../../../include/Pokemon/PokemonType.hpp"
#include"../../../include/Pokemon/Move.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Bulbasaur::Bulbasaur()
        {
            Pokemon(100, "Bulbasaur", PokemonType::Grass, {Move("VineWhip", 25), Move("Tackle", 10)});
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

        void Bulbasaur::Attack(Move selectedMove, Pokemon* target)
        {
            selectAndUseMove(target);

            if(selectedMove.name == "VineWhip")
            {
                int secondHitChance = rand() % 2;
            
                if (secondHitChance == 1)
                {
                    Pokemon::Attack(selectedMove, target);
                    cout << name << " hits again with a second " << selectedMove.name << "!\n";
                }
                else
                {
                    cout << target->name << " dodged the second hit!\n";
                }     
            }
        }
    }
}
