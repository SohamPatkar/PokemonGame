#pragma once
#include"../Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Bulbasaur : Pokemon
        {
            public:
            Bulbasaur();
            
            private:
            void vineWhip(Pokemon &target);
        };
    }
}