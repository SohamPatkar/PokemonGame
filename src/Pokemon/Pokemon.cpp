#include"../../include/Pokemon/Pokemon.hpp"
#include"../../include/Pokemon/PokemonType.hpp"
#include"../../include/Pokemon/Move.hpp"
#include"../../include/Utility/Utility.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace N_Pokemon;

namespace N_Pokemon
{
    Pokemon::Pokemon()
    {
        name = "Pikachu";
        _typeofPokemon = PokemonType::Electric;
        health = 100;
    }

    void Pokemon::heal()
    {
        health = maxhealth;
    }

    bool Pokemon::isFainted()
    {
        return health <= 0;
    }

    void Pokemon::TakeDamage(int damage)
    {
        health -= damage;
        if(health <= 0)
        {
            health = 0;
        }
    }

    int Pokemon::getHealth()
    {
        return health;
    }

    void Pokemon::Attack(Move selectedMove, Pokemon* target)
    {
        int damage = selectedMove.power;
        cout<<name<< " attacks " << target->name << " for " << damage << " damage!\\n";
        target->TakeDamage(damage);
    }

    Pokemon::Pokemon(int _health, string _name, PokemonType _type, vector<Move> moveList)
    {
        health = _health;
        name = _name;
        _typeofPokemon = _type;
    }

    void Pokemon::printAvailableMoves()
    {
        cout<<"Moves available"<<endl;
        for (int i = 0; i < Pokemon::moveList.size(); i++)
        {
            cout<<i+1<<" "<<moveList[i].name<<" Power is "<<moveList[i].power<<endl;
        }
    }

    int Pokemon::selectMove()
    {
        int inputChoice;
        cout<<"Choose a move: "<<endl;
        cin>> inputChoice;

        if(inputChoice < 1 || inputChoice >  static_cast<int>(moveList.size()))
        {
            cout<<"Invalid input, Try again"<<endl;
            cin>>inputChoice;
        }

        return inputChoice;
    }

    void Pokemon::useMove(Move selectedMove, Pokemon* target)
    {
        cout << name << " used " << selectedMove.name << "!\n";
        Attack(selectedMove, target);
        
        N_Utility::Utility::waitForEnter();

        cout << "...\n"; 
        N_Utility::Utility::waitForEnter();
        
        if (target->isFainted())
        {
            cout << target->name << " fainted!\n";
        }
        else
        {
            cout << target->name << " has " << target->health << " HP left.\n";
        }
    }

    void Pokemon::selectAndUseMove(Pokemon* target)
    {
        printAvailableMoves();

        int choice = selectMove();
        Move selectedMove = moveList[choice-1];
        
        useMove(selectedMove, target);
    }

    void Pokemon::wildPokemonAttack(Pokemon* target)
    {
        int damage = attackPower;
        cout<<name<< " attacks " << target->name << " for " << damage << " damage!\\n";
        target->TakeDamage(damage);
    }
}

