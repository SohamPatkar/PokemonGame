#pragma once
#include"../Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Caterpie : public Pokemon
        {
            public:
            Caterpie();
            virtual void Attack(Move selectedMove, Pokemon* target) override;

            private:
            void bugBite(Pokemon* target);
        };
    }
}