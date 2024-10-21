#pragma once
#include"./Player/Player.hpp"
#include<iostream>
using namespace std;

namespace N_Character
{
    class ProfessorOak
    {
        public:
        string p_name;

        ProfessorOak();
        ProfessorOak(string name);
        void explainMainQuest(N_Player::Player &player);
        void greetPlayer(N_Player::Player &player);
        void offerPokemonChoices(N_Player::Player &player);
    };
}
