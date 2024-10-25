#include"../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include"../../../include/Pokemon/PokemonType.hpp"
#include"../../../include/Pokemon/Move.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Squirtle::Squirtle()
        {
            Pokemon(100, "Squirtle", PokemonType::Water, {N_Pokemon::Move("Water Gun", 25), N_Pokemon::Move("Water Blast", 15)});
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

        void Squirtle::Attack(Move selectedMove, Pokemon* target)
        {
            selectAndUseMove(target);

            if(selectedMove.name == "Water Gun")
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
