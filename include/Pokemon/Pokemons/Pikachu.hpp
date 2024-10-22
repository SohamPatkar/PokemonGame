#pragma once
#include"../Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Pikachu: Pokemon
        {
            public:
            Pikachu();

            private:
            void thunderBolt(Pokemon &target);
        };
    }
}