#include<iostream>
#include<stdlib.h>
using namespace std;

string _playerName, _chosenPokemon, _pokemonAttribute;
int _playerChoice;

void waitForEnter()
{
    cin.sync();
    cin.get();
}

void clearConsole()
{
    system("cls");
}

enum class PokemonChoice
{
    Bulbasaur = 1,
    Charmander,
    Squirtle,
    Pikachu
};

enum class PokemonType
{
    Grass,
    Fire,
    Water,
    Electric
};

class Pokemon
{
    public:
    int health;
    string name;
    PokemonType _typeofPokemon;

    void Attack()
    {
        cout<<"Attacks with a cool move"<<endl;
    }

    Pokemon()
    {
        name = "Pikachu";
        _typeofPokemon = PokemonType::Electric;
        health = 10;
    }

    Pokemon(int _health, string _name, PokemonType _type)
    {
        health = _health;
        name = _name;
        _typeofPokemon = _type;
    }

    Pokemon(const Pokemon &other)
    {
        health = other.health;
        name = other.name;
        _typeofPokemon = other._typeofPokemon;
    }
};

class Player
{
    public:
    string _pname;
    Pokemon _pokemonChosen;
    int choice;

    void choosePokemon(int choice)
    {
        switch(choice)
        {
            case 1:
            _pokemonChosen = Pokemon(100, "Bulbasaur", PokemonType::Grass);
            cout<<"Well Bulbasaur, a nice choice"<<endl;
            waitForEnter();
            break;

            case 2:
            _pokemonChosen = Pokemon(100, "Charmander", PokemonType::Fire);
            cout<<"Well Charmander, a fiery choice"<<endl;
            waitForEnter();
            break;

            case 3:
            _pokemonChosen = Pokemon(100, "Squirtle", PokemonType::Water);
            cout<<"Well Squirtle, a nice choice"<<endl;
            waitForEnter();
            break;

            default:
            cout<<"Well I guess you need help with choosing pokemon, okay I will help you..."<<endl;
            _pokemonChosen = Pokemon(100, "Pikachu", PokemonType::Electric);
            cout<<"Here it is Pikachu, as you didnt like the choices..."<<endl;
            waitForEnter();
            break;
        }
    }

    Player()
    {
        _pname = "Trainer";
        _pokemonChosen; 
    }

    Player(const Player &player)
    {
        _pname = player._pname;
        _pokemonChosen = player._pokemonChosen;
    }

    Player(string pname, Pokemon chosenPokemon)
    {
        _pname = pname;
        _pokemonChosen = chosenPokemon;
    }
};

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
        clearConsole();
        cout<<p_name<<": Oak-ay "<<player._pname<<", I am about to explain you about your upcoming grand adventure."<<endl;
        waitForEnter();
        cout<<p_name<<": You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck."<<endl;
        waitForEnter();
        cout<<p_name<<": Your mission, should you choose to accept it (and trust me, you really don’t have a choice) is to collect all the Pokémon Badges and conquer the Pokémon League."<<endl;
        waitForEnter();
        cout<<player._pname<<": Wait... that sounds a lot like every other Pokémon game out there."<<endl;
        waitForEnter();
        cout<<p_name<<": Shhh! Don't break the fourth wall "<<player._pname<<" ! This is serious business."<<endl;
        waitForEnter();
        cout<<p_name<<": To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter."<<endl;
        waitForEnter();
        cout<<p_name<<": Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!"<<endl;
        waitForEnter();
        cout<<player._pname<<": Sounds like a walk in the park... right?"<<endl;
        waitForEnter();
        cout<<p_name<<": Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one."<<endl;
        waitForEnter();
        cout<<p_name<<": So, what do you say? Are you ready to become the next Pokémon Champion?"<<endl;
        waitForEnter();
        cout<<player._pname<<": Ready as I’ll ever be, Professor!"<<endl;
        waitForEnter();
        cout<<p_name<<": That’s the spirit! Now, your journey begins."<<endl;
        waitForEnter();
        cout<<p_name<<": But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!"<<endl;
        waitForEnter();
    }

    void greetPlayer(Player &player)
    {
        cout << p_name << ": Hello there! Welcome to the world of Pokemon!\n";
        waitForEnter();
        cout << p_name << ": My name is Oak. People call me the Pokemon Professor!\n";
        waitForEnter(); 
        cout << p_name << ": But enough about me. Let's talk about you!\n";
        waitForEnter();
    }

    void offerPokemonChoices(Player &player)
    {
        cout<<p_name<<": Tell me your name"<<endl;
        cin>> player._pname;
        waitForEnter();
        cout<<p_name<<": So your name is "<<player._pname<<endl;
        waitForEnter();
        cout<<p_name<<": I have Pokemons for you"<<endl;
        waitForEnter();
        cout<<p_name<<": Enter 1 for Bulbasaur, 2 for Charmander and 3 for Squirtle"<<endl;
        cin>> player.choice;
        waitForEnter();
        player.choosePokemon(player.choice);
    }

};

int main()
{
    Player player;
    ProfessorOak professor;
    Pokemon placeholderPokemon;

    Pokemon defaultPokemon;
    Pokemon charmander = Pokemon(100,"Charmander",PokemonType::Fire);

    professor = ProfessorOak("Professor Oak");
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);
    professor.explainMainQuest(player);

    return 0;
}