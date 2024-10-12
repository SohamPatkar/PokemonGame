#include<iostream>
using namespace std;

string _playerName, _chosenPokemon, _pokemonAttribute;
int _playerChoice;

enum class PokemonChoice
{
    Bulbasaur,
    Charmander,
    Squirtle,
    InvalidChoice
};

enum class PokemonType
{
    Grass,
    Fire,
    Water
};

int main()
{
    PokemonChoice chosen_pokemon = PokemonChoice::InvalidChoice;
    PokemonType _pokemonType;

    cout<<"Trainer! Before you embark on your journey, the Pokémon world needs to know who you are!"<<endl; 
    cout<<"Time to step up and tell us your name. And remember, a great name is the start of every great adventure!"<<endl;
    cout<<"Enter your name"<<endl;
    cin >> _playerName;
    cout<<"Great Start "<<_playerName<<" Looks like you’ve mastered the opening of every code adventure. Keep this up, and you’ll be a coding master in no time!"<<endl;
    cout<<"Ah, Trainer!"<<endl;
    cout<<"Welcome to the world of Pokémon!"<<endl;
    cout<<"Today is a momentous day—you’ll be choosing your very first Pokémon."<<endl;
    cout<<"Every great Trainer remembers this moment for the rest of their lives."<<endl;
    cout<<"So, choose wisely, young one!"<<endl;
    cout<<"Type 1 for Bulbasaur, 2 for Charmander and 3 for Squirtle"<<endl;
    cin >> _playerChoice;
    cout<<"Well done, Trainer!"<<endl;
    cout<<"But… wait, you think your journey ends with just choosing a Pokémon?"<<endl;
    cout<<"No, no, no!"<<endl;
    cout<<"You need to confirm your choice and see how the game reacts!"<<endl;

    switch(_playerChoice)
    {
        case 1:
        chosen_pokemon = PokemonChoice::Bulbasaur;
        _pokemonType = PokemonType::Grass;
        cout<<"Well Bulbasaur, a nice choice"<<endl;
        break;

        case 2:
        chosen_pokemon = PokemonChoice::Charmander;
        _pokemonType = PokemonType::Fire;
        cout<<"Well Charmander, a fiery choice"<<endl;
        break;

        case 3:
        chosen_pokemon = PokemonChoice::Squirtle;
        _pokemonType = PokemonType::Water;
        cout<<"Well Squirtle, a nice choice"<<endl;
        break;

        default:
        cout<<"Well I guess you need help with choosing pokemon, okay I will help you..."<<endl;
        chosen_pokemon = PokemonChoice::InvalidChoice;
        _pokemonType = PokemonType::Fire;
        cout<<"Here it is Pikachu, as you didnt like the choices..."<<endl;
        break;
    }

    cout<<"Ah, an excellent choice!"<<endl;
    cout<<"But beware, Trainer,"<<endl;
    cout<<"this is only the beginning."<<endl;
    cout<<"Your journey is about to unfold."<<endl;
    cout<<"Now let’s see if you’ve got what it takes to keep going!"<<endl;
    cout<<"Good luck, and remember… Choose wisely!"<<endl;

    if(chosen_pokemon == PokemonChoice::Bulbasaur)
    {
        _chosenPokemon = "Bulbasaur";
        _pokemonAttribute = "Grass";
    }
    else if(chosen_pokemon == PokemonChoice::Charmander)
    {
        _chosenPokemon = "Charmander";
        _pokemonAttribute = "Fire";
    }
    else if(chosen_pokemon == PokemonChoice::Squirtle)
    {
        _chosenPokemon = "Squirtle";
        _pokemonAttribute = "Water";
    }
    else if(chosen_pokemon == PokemonChoice::InvalidChoice)
    {
        _chosenPokemon = "Charmander";
        _pokemonAttribute = "Fire";
    }
    
    cout<<"Chosen Pokemon "<<_chosenPokemon<<endl;
}