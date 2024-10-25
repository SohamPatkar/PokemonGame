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
            virtual void Attack(Move selectedMove, Pokemon* target) override;

            private:
            void thunderBolt(Pokemon* target);
        };
    }
}