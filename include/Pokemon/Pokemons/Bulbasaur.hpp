#pragma once
#include"../Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Bulbasaur : public Pokemon
        {
            public:
            Bulbasaur();
            virtual void Attack(Pokemon* target) override;

            private:
            void vineWhip(Pokemon* target);
        };
    }
}