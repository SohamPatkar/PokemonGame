#include"../../include/Main/Game.hpp"
#include"../../include/Character/Player/Player.hpp"
#include"../../include/Utility/Utility.hpp"
#include"../../include/Battle/WildEncounterManager.hpp"
#include"../../include/Battle/BattleManager.hpp"
using namespace std;
using namespace N_Utility;
using namespace N_Battle;

namespace N_Main
{
    Game::Game()
    {
       forestGrass =
        {
            "Forest",
            {Pokemon(), Pokemon()},
            70
        };

    }

    void Game::gameLoop(Player &player)
    {
        Utility::clearConsole();
        BattleManager battleManager;
        keepPlaying = true;
        while(keepPlaying)
        {
            string quitChoice;
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
                {
                    WildEncounterManager encounteredPokemon;
                    Pokemon encountered = encounteredPokemon.getRandomPokemonFromGrass(forestGrass);
                    battleManager.startBattle(player, encountered);
                    break;
                }
                case 2:
                {
                    player._pokemonChosen.heal();
                    cout<<"You go to the PokeCenter and ask for heal."<<endl;
                    break;
                }
                case 3:
                {
                    cout<<"You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!"<<endl;
                    break;
                }
                case 4:
                {
                    cout<<"You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\\n";
                    break;
                }
                case 5:
                {
                    cout<<"You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!'\\n";
                    cout<<"You really want to Quit?(Y/N)"<<endl;
                    cin >> quitChoice;
                    if(quitChoice == "Y" || quitChoice == "y")
                    {
                        keepPlaying = false;
                    }
                    break;
                }
                default:
                {
                    cout<<"Invalid Choice"<<endl;
                    break;
                }
            }       
        }
        cout<<"Thanks for playing!"<<endl;
    }
}


