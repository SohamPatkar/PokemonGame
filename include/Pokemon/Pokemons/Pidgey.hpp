#pragma once
#include"../Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Pidgey : Pokemon
        {
            public:
            Pidgey();
            
            void wingAtttack(Pokemon &target);
        };
    }
}