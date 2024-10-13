#include<iostream>
using namespace std;

string _playerName, _chosenPokemon, _pokemonAttribute;
int _playerChoice;

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
        cout << "A new Pokemon has been created with the default constructor!\n";
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

    ~Pokemon()
    {
        cout<<"Pokemon has been released!"<<endl;
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
            break;

            case 2:
            _pokemonChosen = Pokemon(100, "Charmander", PokemonType::Fire);
            cout<<"Well Charmander, a fiery choice"<<endl;
            break;

            case 3:
            _pokemonChosen = Pokemon(100, "Squirtle", PokemonType::Water);
            cout<<"Well Squirtle, a nice choice"<<endl;
            break;

            default:
            cout<<"Well I guess you need help with choosing pokemon, okay I will help you..."<<endl;
            _pokemonChosen = Pokemon(100, "Pikachu", PokemonType::Electric);
            cout<<"Here it is Pikachu, as you didnt like the choices..."<<endl;
            break;
        }
    }

    Player()
    {
        _pname = "Trainer";
        _pokemonChosen;
        cout << "A new player named " << _pname << " has been created!" << _pokemonChosen.name<<endl; 
    }

    Player(const Player &player)
    {
        _pname = player._pname;
        _pokemonChosen = player._pokemonChosen;
        cout<<"Player Copied"<<endl;
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

    void greetPlayer(Player &player)
    {
        cout << p_name << ": Hello there! Welcome to the world of Pokemon!\n"; 
        cout << p_name << ": My name is Oak. People call me the Pokemon Professor!\n"; 
        cout << p_name << ": But enough about me. Let's talk about you!\n";
    }

    void offerPokemonChoices(Player &player)
    {
        cout<<p_name<<": Tell me your name"<<endl;
        cin>> player._pname;
        cout<<p_name<<": So your name is "<<player._pname<<endl;
        cout<<p_name<<": I have Pokemons for you"<<endl;
        cout<<p_name<<": Enter 1 for Bulbasaur, 2 for Charmander and 3 for Squirtle"<<endl;
        cin>> player.choice;

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
    Pokemon bulbasaur = Pokemon(100,"Bulbasaur",PokemonType::Grass);
    Pokemon bulbasaurCopy = Pokemon(bulbasaur);
    bulbasaurCopy.health = 80;

    {
        Pokemon Ryu = Pokemon(100,"Ryu",PokemonType::Fire);
    }

    cout<<"Pokemon Details: "<<endl;
    cout<<defaultPokemon.name<<endl;
    cout<<charmander.name<<endl;
    cout<<bulbasaur.name<<" Health:"<<bulbasaur.health<<endl;
    cout<<bulbasaurCopy.name<<" Health:"<<bulbasaurCopy.health<<endl;

    placeholderPokemon.name = "Pikachu";
    placeholderPokemon.health = 100;
    placeholderPokemon._typeofPokemon = PokemonType::Electric;

    player = Player("Trainer", bulbasaur);
    professor = ProfessorOak("Professor Oak");

    Player playerCopy = Player(player);

    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    cout<<"Player name: "<<player._pname<<endl;
    cout<<"Chosen Pokemon: "<< player._pokemonChosen.name<<endl;
}