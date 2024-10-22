#pragma once
#include"../Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Squirtle : Pokemon
        {
            public:
            Squirtle();
            
            private:
            void waterGun(Pokemon &target);
        };
    }
}