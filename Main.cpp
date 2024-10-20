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
    Player player;
    N_Character::ProfessorOak professor = N_Character::ProfessorOak("Professor Oak");
    Pokemon placeholderPokemon;
    Game game;

    Pokemon defaultPokemon;
    Pokemon charmander = Pokemon(100,"Charmander",PokemonType::Fire);

   
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);
    professor.explainMainQuest(player);
    game.gameLoop(player);

    return 0;
}