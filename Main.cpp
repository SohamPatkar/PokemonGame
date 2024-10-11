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
    cout<<"Ah, Trainer!"<<endl;
    cout<<"Welcome to the world of Pokémon!"<<endl;
    cout<<"Today is a momentous day—you’ll be choosing your very first Pokémon."<<endl;
    cout<<"Every great Trainer remembers this moment for the rest of their lives."<<endl;
    cout<<"So, choose wisely, young one!"<<endl;
    cout<<"Type B for Bulbasaur, C for Charmander and S for Squirtle"<<endl;
    cin >> _playerChoice;
    cout<<"Well done, Trainer!"<<endl;
    cout<<"But… wait, you think your journey ends with just choosing a Pokémon?"<<endl;
    cout<<"No, no, no!"<<endl;
    cout<<"You need to confirm your choice and see how the game reacts!"<<endl;

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

    cout<<"Ah, an excellent choice!"<<endl;
    cout<<"But beware, Trainer,"<<endl;
    cout<<"this is only the beginning."<<endl;
    cout<<"Your journey is about to unfold."<<endl;
    cout<<"Now let’s see if you’ve got what it takes to keep going!"<<endl;
    cout<<"Good luck, and remember… Choose wisely!"<<endl;
}