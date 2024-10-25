#include"../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include"../../../include/Pokemon/PokemonType.hpp"
#include"../../../include/Pokemon/StatusEffects.hpp"
#include"../../../include/Pokemon/Move.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Pikachu::Pikachu()
        {
            Pokemon(100, "Pikachu", PokemonType::Electric, {N_Pokemon::Move("ThunderBolt", 25), N_Pokemon::Move("StaticShock", 15)});
        }

        void Pikachu::thunderBolt(Pokemon* target)
        {
            cout<<"You have been attacked with Thunderbolt!"<<endl;
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

        void Pikachu::Attack(Move selectedMove, Pokemon* target)
        {
            selectAndUseMove(target);

            if(selectedMove.name == "ThunderBolt")
            {
                if(target->canApplyEffect())
                {
                     target->applyEffect(N_StatusEffects::StatusEffectsType::PARALYZED);
                }
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
