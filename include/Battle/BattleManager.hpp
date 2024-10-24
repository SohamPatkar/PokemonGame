#pragma once
#include"BattleState.hpp"
#include"../Character/Player/Player.hpp"
#include<iostream>
using namespace std;

namespace N_Battle
{
    class BattleManager
    {
        public:
        BattleState battleState;
        void startBattle(N_Player::Player* player, N_Pokemon::Pokemon* wildPokemon);

        void battle(N_Pokemon::Pokemon* playerPokemon, N_Pokemon::Pokemon* wildPokemon);
        void handleBattleOutcome();
        void updateState();
    };
}
