#pragma once
#include"../Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Pikachu: public Pokemon
        {
            public:
            Pikachu();
            virtual void Attack(Pokemon* target) override;

            private:
            void thunderBolt(Pokemon* target);
        };
    }
}