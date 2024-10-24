#pragma once
#include"../Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Squirtle : public Pokemon
        {
            public:
            Squirtle();
            virtual void Attack(Pokemon* target) override;

            private:
            void waterGun(Pokemon* target);
        };
    }
}