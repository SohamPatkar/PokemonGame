#include"../../../include/Pokemon/Pokemons/Zubat.hpp"
#include"../../../include/Pokemon/PokemonType.hpp"
#include"../../../include/Pokemon/Move.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Zubat::Zubat()
        {
            Pokemon(100, "Zubat", PokemonType::Poison, {N_Pokemon::Move("Poison Sting", 25), N_Pokemon::Move("Super Sonic", 15)});
        }

        void Zubat::superSonic(Pokemon* target)
        {
            cout<<"You have been attacked with Super Sonic!"<<endl;
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

        void Zubat::Attack(Move selectedMove, Pokemon* target)
        {
            selectAndUseMove(target);

            if(selectedMove.name == "Poison Sting")
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
