#pragma once
#include"../Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Zubat : Pokemon
        {
            public:
            Zubat();
            virtual void Attack(Pokemon* target) override;

            private:
            void superSonic(Pokemon* target);
        };
    }
}