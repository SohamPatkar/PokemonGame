#include"BattleState.hpp"
#include<iostream>
using namespace std;

class Pokemon;
class Player;

namespace N_Battle
{
    class BattleManager
    {
        public:
        BattleState battleState;
        void startBattle(Player &player, Pokemon &wildPokemon);

        private:
        void battle(Pokemon &playerPokemon, Pokemon &wildPokemon);
        void handleBattleOutcome();
        void updateState();
    };
}
