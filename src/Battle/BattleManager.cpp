#include"../../include/Battle/BattleManager.hpp"
#include"../../include/Character/Player/Player.hpp"
#include"../../include/Utility/Utility.hpp"
#include<iostream>
using namespace std;
using namespace N_Utility;

namespace N_Battle
{
    void BattleManager::startBattle(N_Player::Player &player, N_Pokemon::Pokemon &wildPokemon) 
    {
        battleState.playerPokemon = &player._pokemonChosen;
        battleState.wildPokemon = &wildPokemon;
        battleState.playerTurn = true;
        battleState.battleOngoing = true;
        cout << "A wild " << wildPokemon.name << " appeared!\n";
        battle(player._pokemonChosen, wildPokemon);
    }     

    void BattleManager::updateState()
    {
        if(battleState.playerPokemon->isFainted())
        {
            battleState.battleOngoing = false;
        }
        else if(battleState.wildPokemon->isFainted())
        {
            battleState.battleOngoing = false;
        }
    }

    void BattleManager::battle(N_Pokemon::Pokemon &playerPokemon, N_Pokemon::Pokemon &wildPokemon)
    {
        cout << "A wild " << wildPokemon.name << " appeared!\n";
        
        while (battleState.battleOngoing) 
        {
            if(battleState.playerTurn)
            {
                battleState.playerPokemon->Attack(*battleState.wildPokemon);
            }
            else
            {
                battleState.wildPokemon->Attack(*battleState.playerPokemon);
            }
            updateState();
            battleState.playerTurn = !battleState.playerTurn;
            Utility::waitForEnter();
        }
        handleBattleOutcome();
    }

    void BattleManager::handleBattleOutcome()
    {
        if (battleState.playerPokemon->isFainted()) 
        {
            cout << battleState.playerPokemon->name << " has fainted! You lose the battle.\\n";
        } 
        else 
        {
            cout << "You defeated the wild " << battleState.wildPokemon->name << "!\\n";
        }
    }
}


