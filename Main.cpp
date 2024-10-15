#include"Utility.hpp"
#include"PokemonType.hpp"
#include"PokemonChoice.hpp"
#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;

string _playerName, _chosenPokemon, _pokemonAttribute;
int playerChoice;
bool keepPlaying;

#include"Pokemon.hpp"

#include"Player.hpp"

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

void gameLoop(Player &player)
{
    keepPlaying = true;
    while(keepPlaying)
    {
        string quitChoice;

        Utility::clearConsole();
        cout<<"What would you like to do next "<<player._pname<<"?"<<endl;
        cout<<"1.Battle Wild Pokémon"<<endl;
        cout<<"2.Visit PokeCenter"<<endl;
        cout<<"3.Challenge Gyms"<<endl;
        cout<<"4.Enter Pokémon League"<<endl;
        cout<<"5.Quit"<<endl;
        cout<<"Enter your next move:"<<endl;
        cin>>playerChoice;

        switch(playerChoice)
        {
            case 1:
            cout<<"You look around... but all the wild Pokemon are on vacation. Maybe try again later?\\n";
            break;

            case 2:
            cout<<"You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!\\n";
            break;

            case 3:
            cout<<"You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!"<<endl;
            break;

            case 4:
            cout<<"You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\\n";
            break;

            case 5:
            cout<<"You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!'\\n";
            cout<<"You really want to Quit?(Y/N)"<<endl;
            cin >> quitChoice;
            if(quitChoice == "Y" || quitChoice == "y")
            {
                keepPlaying = false;
            }
            break;

            default:
            cout<<"Invalid Choice"<<endl;
            break;
        }
        cout<<"Thanks for playing!"<<endl;
    }
}

int main()
{
    Player player;
    ProfessorOak professor = ProfessorOak("Professor Oak");
    Pokemon placeholderPokemon;

    Pokemon defaultPokemon;
    Pokemon charmander = Pokemon(100,"Charmander",PokemonType::Fire);

   
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);
    professor.explainMainQuest(player);
    gameLoop(player);

    return 0;
}