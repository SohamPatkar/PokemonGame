#include"../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include"../../../include/Pokemon/PokemonType.hpp"
#include"../../../include/Pokemon/Move.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Pidgey::Pidgey()
        {
            Pokemon(100, "Pidgey", PokemonType::Normal, {N_Pokemon::Move("WingAttack", 25), N_Pokemon::Move("WindCannon", 15)});
        }

        void Pidgey::wingAttack(Pokemon* target)
        {
            cout<<"You have been attacked with Wing Attack!"<<endl;
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

        void Pidgey::Attack(Move selectedMove, Pokemon* target)
        {
            selectAndUseMove(target);

            if(selectedMove.name == "WingAttack")
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