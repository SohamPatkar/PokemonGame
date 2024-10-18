#include"BattleManager.hpp"
#include"Player.hpp"
#include<iostream>
using namespace std;


void BattleManager::startBattle(Player &player, Pokemon &wildPokemon) 
{
    cout << "A wild " << wildPokemon.name << " appeared!\n";
    battle(player._pokemonChosen, wildPokemon);
}     

void BattleManager::battle(Pokemon &playerPokemon, Pokemon &wildPokemon)
{
    cout << "A wild " << wildPokemon.name << " appeared!\n";

    while (!playerPokemon.isFainted() && !wildPokemon.isFainted()) 
    {
        playerPokemon.Attack(wildPokemon);

        if (!wildPokemon.isFainted()) 
        {
            wildPokemon.Attack(playerPokemon);
        }
    }

    if (playerPokemon.isFainted()) 
    {
        cout << playerPokemon.name << " has fainted! You lose the battle.\n";
    } 
    else 
    {
        cout << "You defeated the wild " << wildPokemon.name << "!\n";
    }
}

void BattleManager::handleBattleOutcome(Player &player, bool playerWon)
{
    if(playerWon)
    {
        cout<<"Yeah brother you won!"<<endl;
    }
    else
    {
        cout<<"Your Pokemon fainted! You need to visit the PokeCenter."<<endl;
    }
}