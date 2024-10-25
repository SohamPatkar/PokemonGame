#pragma once
#include"./Pokemon.hpp"
#include<iostream>

namespace N_Pokemon
{
    class Pokemon;

    namespace N_StatusEffects
    {
        class IStatusEffect
        {
            public:
            virtual void applyEffect(Pokemon* target);

            virtual std::string getEffectName();

            virtual bool turnEndEffect(Pokemon* target);

            virtual void clearEffect(Pokemon* target);
        };    
    }
}
