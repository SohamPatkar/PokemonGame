#pragma once
#include"../Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Charmander : Pokemon
        {
            public:
            Charmander();
            
            private:
            void flameBurst(Pokemon &target);
        };
    }
}