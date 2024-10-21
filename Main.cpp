#include"./include/Main/Game.hpp"
#include"./include/Character/Player/Player.hpp"
#include"./include/Character/ProfessorOak.hpp"
#include"./include/Pokemon/PokemonType.hpp"
#include"./include/Pokemon/PokemonChoice.hpp"
#include"./include/Battle/WildEncounterManager.hpp"
#include<iostream>
using namespace std;

int main()
{
    N_Pokemon::Pokemon charmander = N_Pokemon::Pokemon(100, "Charmander", N_Pokemon::PokemonType::Fire);

    N_Player::Player player("Ash", charmander);

    N_Character::ProfessorOak professor;
    
    N_Main::Game game;

    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);
    professor.explainMainQuest(player);
    game.gameLoop(player);

    return 0;
}