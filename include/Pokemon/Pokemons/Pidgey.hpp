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
            
            private:
            void wingAtttack(Pokemon &target);
        };
    }
}