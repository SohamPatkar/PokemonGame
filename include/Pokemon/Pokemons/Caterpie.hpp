#pragma once
#include"../Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Caterpie : Pokemon
        {
            public:
            Caterpie();
            
            private:
            void bugBite(Pokemon &target);
        };
    }
}