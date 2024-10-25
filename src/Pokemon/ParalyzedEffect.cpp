#include "../../include/Pokemon/ParalyzedEffect.hpp"
#include "../../include/Pokemon/Pokemon.hpp"
#include<iostream>
using namespace std;

namespace N_Pokemon
{
    namespace N_StatusEffects
    {
        void ParalyzedEffect::applyEffect(N_Pokemon::Pokemon* target)
        {
            cout << target->name << " is paralyzed!"<<endl;

            turnsLeft = rand() % 3 + 1;
        }

        string ParalyzedEffect::getEffectName()
        {
            return "Paralyzed";
        }

        bool ParalyzedEffect::turnEndEffect(N_Pokemon::Pokemon* target)
        {
            if(turnsLeft <= 0)
            {
                clearEffect(target);
                return true;
            }
            turnsLeft--;

            int paralysis_chance = rand() % 4; 

            if(paralysis_chance == 0)
            {
                cout<<"Pokemon Paralyzed!"<<endl;
                return false;
            }

            cout<<"Pokemon not Paralyzed!"<<endl;
            return true;      
        }

        void ParalyzedEffect::clearEffect(N_Pokemon::Pokemon* target)
        {
            cout<<"Pokemon is not paralyzed anymore"<<endl;
            target->clearEffect();
        }
    }
}

