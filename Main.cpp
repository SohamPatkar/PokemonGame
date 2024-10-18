#include"Player.hpp"
#include"Utility.hpp"
#include"PokemonType.hpp"
#include"PokemonChoice.hpp"
#include"WildEncounterManager.hpp"
#include"Game.hpp"
#include<iostream>
using namespace std;

string _playerName, _chosenPokemon, _pokemonAttribute;

class ProfessorOak
{
    public:
    string p_name;

    ProfessorOak()
    {

    }

    ProfessorOak(string name)
    {
        p_name = name;
    }

    void explainMainQuest(Player &player)
    {
        Utility::clearConsole();
        cout<<p_name<<": Oak-ay "<<player._pname<<", I am about to explain you about your upcoming grand adventure."<<endl;
        Utility::waitForEnter();
        cout<<p_name<<": You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck."<<endl;
        Utility::waitForEnter();
        cout<<p_name<<": Your mission, should you choose to accept it (and trust me, you really don’t have a choice) is to collect all the Pokémon Badges and conquer the Pokémon League."<<endl;
        Utility::waitForEnter();
        cout<<player._pname<<": Wait... that sounds a lot like every other Pokémon game out there."<<endl;
        Utility::waitForEnter();
        cout<<p_name<<": Shhh! Don't break the fourth wall "<<player._pname<<" ! This is serious business."<<endl;
        Utility::waitForEnter();
        cout<<p_name<<": To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter."<<endl;
        Utility::waitForEnter();
        cout<<p_name<<": Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!"<<endl;
        Utility::waitForEnter();
        cout<<player._pname<<": Sounds like a walk in the park... right?"<<endl;
        Utility::waitForEnter();
        cout<<p_name<<": Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one."<<endl;
        Utility::waitForEnter();
        cout<<p_name<<": So, what do you say? Are you ready to become the next Pokémon Champion?"<<endl;
        Utility::waitForEnter();
        cout<<player._pname<<": Ready as I’ll ever be, Professor!"<<endl;
        Utility::waitForEnter();
        cout<<p_name<<": That’s the spirit! Now, your journey begins."<<endl;
        Utility::waitForEnter();
        cout<<p_name<<": But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!"<<endl;
        Utility::waitForEnter();
    }

    void greetPlayer(Player &player)
    {
        cout << p_name << ": Hello there! Welcome to the world of Pokemon!\n";
        Utility::waitForEnter();
        cout << p_name << ": My name is Oak. People call me the Pokemon Professor!\n";
        Utility::waitForEnter(); 
        cout << p_name << ": But enough about me. Let's talk about you!\n";
        Utility::waitForEnter();
    }

    void offerPokemonChoices(Player &player)
    {
        Utility::clearConsole();
        cout<<p_name<<": Tell me your name"<<endl;
        cin>> player._pname;
        Utility::waitForEnter();
        cout<<p_name<<": So your name is "<<player._pname<<endl;
        Utility::waitForEnter();
        cout<<p_name<<": I have Pokemons for you"<<endl;
        Utility::waitForEnter();
        cout<<p_name<<": Enter 1 for Bulbasaur, 2 for Charmander and 3 for Squirtle"<<endl;
        cin>> player.choice;
        Utility::waitForEnter();
        player.choosePokemon(player.choice);
    }
};

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