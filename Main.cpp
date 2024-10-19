#include"./include/Character/Player.hpp"
#include"./include/Character/ProfessorOak.hpp"
#include"./include/Utility/Utility.hpp"
#include"./include/Pokemon/PokemonType.hpp"
#include"./include/Pokemon/PokemonChoice.hpp"
#include"./include/Battle/WildEncounterManager.hpp"
#include"./include/Main/Game.hpp"
#include<iostream>
using namespace std;

int main()
{
    Player player;
    ProfessorOak professor = ProfessorOak("Professor Oak");
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