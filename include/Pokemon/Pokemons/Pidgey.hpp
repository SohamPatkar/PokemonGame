#pragma once
#include"../Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Pidgey : public Pokemon
        {
            public:
            Pidgey();
            virtual void Attack(Pokemon* target) override;

            private:
            void wingAttack(Pokemon* target);
        };
    }
}