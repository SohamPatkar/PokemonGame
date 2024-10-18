#include<iostream>
using namespace std;

class Pokemon;
class Player;


class BattleManager
{
    public:
    void startBattle(Player &player, Pokemon &wildPokemon);

    private:
    void battle(Pokemon &playerPokemon, Pokemon &wildPokemon);
    void handleBattleOutcome(Player &player, bool playerWon);
};