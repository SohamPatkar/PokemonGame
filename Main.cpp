#include<iostream>
using namespace std;

string _playerName, _playerChoice;

int main()
{
    cout<<"Trainer! Before you embark on your journey, the Pokémon world needs to know who you are!"<<endl; 
    cout<<"Time to step up and tell us your name. And remember, a great name is the start of every great adventure!"<<endl;
    cout<<"Enter your name"<<endl;
    cin >> _playerName;
    cout<<"Great Start "<<_playerName<<" Looks like you’ve mastered the opening of every code adventure. Keep this up, and you’ll be a coding master in no time!"<<endl;
    cout<<"Please choose a pokemon to Start"<<endl;
    cout<<"Type B for Bulbasaur, C for Charmander and S for Squirtle"<<endl;
    cin >> _playerChoice;

    if(_playerChoice == "b" || _playerChoice == "B")
    {
        cout<<"You chose Bulbasaur! A wise choice."<<endl;
    }
    else if(_playerChoice == "c" || _playerChoice == "C")
    {
        cout<<"You chose Charmander! A fiery choice."<<endl;
    }
    else if(_playerChoice == "s" || _playerChoice == "S")
    {
        cout<<"You chose Squirtle! A cool choice."<<endl;
    }
    else
    {
        cout<<"Invalid choice. Please restart the game."<<endl;
    }
}